#include <stdio.h>

int inversions = 0;
int n;

void merge(int A[], int p, int q, int r)
{
  int i, j, k;

  printf("A[i] merge: ");
  for(i=0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");

  printf("pqr merge: %d %d %d\n", p, q, r);
  int n1 = q - p + 1;
  int n2 = r - q;

  printf("n1 n2 merge: %d %d\n", n1, n2);

  int L[n1];
  int R[n2];

  printf("L[i]: ");
  for(i=0; i < n1; i++)
  {
    L[i] = A[p+i];
    printf("%d ", L[i]);
  }
  printf("\n");

  printf("R[j]: ");
  for(j=0; j < n2; j++)
  {
    R[j] = A[q+j+1];
    printf("%d ", R[j]);
  }
  printf("\n");

  i = 0;
  j = 0;

  for(k=p; k<=r; k++)
  {
    if(i >= n1)
    {
      A[k] = R[j];
      j++;
    }
    else if(j >= n2)
    {
      A[k] = L[i];
      i++;
    }
    else
    {
      if(L[i] <= R[j])
      {
        A[k] = L[i];
        i++;
      }
      else
      {
        A[k] = R[j];
        j++;
        inversions = inversions + (n1 - i);
      }
    }
  }

  printf("A[i] merge: ");
  for(i=0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n");
}

void merge_sort(int A[], int p, int r)
{
  if (p < r)
  {
    int q = (p+r) / 2;

    printf("pqr: %d %d %d\n", p, q, r);
    merge_sort(A, p, q);
    merge_sort(A, q+1, r);
    merge(A, p, q, r);
  }
}

int main(int argc, char *argv[])
{
  int i;
  int A[1000005];

  while(1)
  {
    scanf("%d", &n);

    printf("n: %d\n", n);

    if(n == 0)
      break;

    for(i=0; i<n; i++)
    {
      scanf("%d", &A[i]);
      printf("%d ", A[i]);
    }
    printf("\n");

    inversions = 0;

    merge_sort(A, 0, n-1);

    printf("%d\n", inversions);
  }

  return 0;
}
