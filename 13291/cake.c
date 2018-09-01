#include <stdio.h>

// Time Exceeded
int main(int argc, char *argv[])
{
  int n;
  int A[100005];
  int B[100005];
  int i, j, k;
  int area, color, y, p, w;

  while(scanf("%d", &n) != EOF)
  {
    for(k=0; k<n; k++)
      scanf("%d", &A[k]);

    for(k=0; k<n; k++)
      scanf("%d", &B[k]);

    y = 0;
    p = 0;
    w = 0;

    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
        area = A[i] * B[j];

        color = (i+j+2) % 3;

        if(color == 0)
          y = y + area;
        else if (color == 1)
          p = p + area;
        else
          w = w + area;
      }
    }

    printf("%d %d %d\n", y, p, w);
  }

  return 0;
}
