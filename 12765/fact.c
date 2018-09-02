#include <stdio.h>

int main(int argc, char *argv[])
{
  int n, m;
  int a[1005];
  int b[1005];
  int fact1[11];
  int fact2[11];
  int i, j;
  int flag;

  while(1)
  {
    scanf("%d", &n);
    scanf("%d", &m);

    if(n == 0 && m == 0)
      break;

    for(i=0; i<10; i++)
    {
      fact1[i] = 0;
      fact2[i] = 0;
    }

    for(i=0; i<n; i++)
    {
      scanf("%d", &a[i]);

      for(j=2; j<=a[i]; j++)
        fact1[j]++;
    }
    for(i=0; i<m; i++)
    {
      scanf("%d", &b[i]);

      for(j=2; j<=b[i]; j++)
        fact2[j]++;
    }

    fact1[2] = fact1[2] + 2*fact1[4] + fact1[6] + 3*fact1[8];
    fact1[3] = fact1[3] + fact1[6] + 2*fact1[9];
    fact1[4] = 0;
    fact1[6] = 0;
    fact1[8] = 0;
    fact1[9] = 0;

    fact2[2] = fact2[2] + 2*fact2[4] + fact2[6] + 3*fact2[8];
    fact2[3] = fact2[3] + fact2[6] + 2*fact2[9];
    fact2[4] = 0;
    fact2[6] = 0;
    fact2[8] = 0;
    fact2[9] = 0;

    flag = 0;
    for(i=2; i<10; i++)
    {
      if(fact1[i] != fact2[i])
      {
        flag = 1;
        break;
      }
    }

    if(flag == 0)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}
