#include <stdio.h>

long long inversions = 0;
int n;

void merge(int A[], int p, int q, int r)
{
  int i, j, k;

  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1];
  int R[n2];

  for(i=0; i < n1; i++)
  {
    L[i] = A[p+i];
  }

  for(j=0; j < n2; j++)
  {
    R[j] = A[q+j+1];
  }

  i = 0;
  j = 0;

  for(k=p; k<=r; k++)
  {
    if(i >= n1)
    {
      A[k] = R[j];
      j++;
      inversions = inversions + (n1 - i);
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
}

void merge_sort(int A[], int p, int r)
{
  if (p < r)
  {
    int q = (p+r) / 2;

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

    if(n == 0)
      break;

    for(i=0; i<n; i++)
    {
      scanf("%d", &A[i]);
    }

    inversions = 0;

    merge_sort(A, 0, n-1);

    printf("%lld\n", inversions);
  }

  return 0;
}
