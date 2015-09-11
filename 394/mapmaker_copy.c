#include <stdio.h>
#include <string.h>

typedef struct
{
  int lower_bound;
  int upper_bound;
} Dimension;

typedef struct
{
  char name[20];
  int base_address;
  int element_size;
  int D;
  Dimension dimension[20];
  int constants[20];
} Array;

Array array[1000];

void calculate_constants(int N)
{
  int i, j;

  for(i=0; i<N; i++)
  {
    int D = array[i].D;

    array[i].constants[D] = array[i].element_size;

    for(j=(D-1); j>0; j--)
    {
      int t = array[i].dimension[j].upper_bound - array[i].dimension[j].lower_bound + 1;
      array[i].constants[j] = array[i].constants[j+1] * (t);
    }

    array[i].constants[0] = array[i].base_address;

    for(j=0; j<D; j++)
    {
      int t = array[i].constants[j+1] * array[i].dimension[j].lower_bound;
      array[i].constants[0] = array[i].constants[0] - t;
    }
  }
}


int get_array_index(char reference_array[], int N)
{
  int j;
  int array_num;

  for(j=0; j<N; j++)
  {
    if(strcmp(reference_array, array[j].name) == 0)
    {
      array_num = j;
      break;
    }
  }

  return array_num;
}

int main(int argc, char *argv[])
{
  int N, R;
  int i, j;

  scanf("%d %d", &N, &R);

  for (i=0; i<N; i++)
  {
    scanf("%s", array[i].name);
    scanf("%d", &array[i].base_address);
    scanf("%d", &array[i].element_size);
    scanf("%d", &array[i].D);

    array[i].constants[0] = 0;

    for (j=0; j < array[i].D; j++)
    {
      scanf("%d %d", &array[i].dimension[j].lower_bound, &array[i].dimension[j].upper_bound);
      array[i].constants[j+1] = 0;
    }
  }

  calculate_constants(N);

  for(i=0; i<R; i++)
  {
    char reference_array[20];
    int target_dimensions[20];

    int array_num;

    scanf("%s", reference_array);

    array_num = get_array_index(reference_array, N);

    int reference_dimensions = array[array_num].D;

    for(j=0; j<reference_dimensions; j++)
    {
      scanf("%d", &target_dimensions[j]);
    }

    int array_index = array[array_num].constants[0];

    printf("%s", array[array_num].name);
    printf("[");

    for(j=0; j<reference_dimensions; j++)
    {
      array_index = array_index + array[array_num].constants[j+1] * target_dimensions[j];
      printf("%d", target_dimensions[j]);

      if(j != (reference_dimensions - 1))
      {
        printf(", ");
      }
    }

    printf("]");
    printf(" = %d\n", array_index);
  }

  return 0;
}
