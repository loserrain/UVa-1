#include <stdio.h>
#include <stdlib.h>


int phones[100000];
const int map[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9,0};


int to_int(char *number)
{
  int i = 0;
  int num = 0;
  char t;
  int u;

  while(number[i] != '\0')
  {
    t = number[i];
    u = -1;

    if(t >= 48 && t <= 57)
    {
      u = (t - '0');
    }

    if(t >= 'A' && t <= 'Z')
    {
      u = map[t - 'A'];
    }

    if(u != -1)
      num = num * 10 + u;

    i++;
  }

  return num;
}

int compare(const void *a, const void *b)
{
  return *(int*) a - *(int*) b;
}

void printing(int phones[], int n)
{
  int i;
  int count = 1;
  int duplicates = 0;

  for(i=0; i<n-1; i++)
  {
    if(phones[i] == phones[i+1])
    {
      count = count + 1;
    }
    else
    {
      if(count != 1)
      {
        printf("%03d-%04d %d\n", phones[i]/10000, phones[i]%10000, count);
        duplicates++;
      }

      count = 1;
    }
  }

  if(count != 1)
  {
    printf("%03d-%04d %d\n", phones[n-2]/10000, phones[n-2]%10000, count);
    duplicates++;
  }

  if(duplicates == 0)
  {
    printf("No duplicates.\n");
  }
}

int main(int argc, char *argv[])
{
  int i;
  int n;
  int t;
  char temp[10];

  scanf("%d\n", &t);

  while(t--)
  {
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
      phones[i] = 0;
    }

    for(i=0; i<n; i++)
    {
      char number[1000];

      scanf("%s", &number[0]);

      phones[i] = to_int(number);
    }

    qsort(phones, n, sizeof(int), compare);

    printing(phones, n);

    if (t != 0)
      printf("\n");
  }

  return 0;
}
