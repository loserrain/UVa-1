#include <stdio.h>

int main(int argc, char *argv[])
{
  int t;
  int bars[1005];
  int n, p;
  int temp, bar, i, j;
  int sum, flag;

  scanf("%d", &t);

  for(temp = 0; temp < t; temp++)
  {
    scanf("%d", &n);
    scanf("%d", &p);

    for(bar=0; bar<p; bar++)
    {
      scanf("%d", &bars[bar]);
    }

    flag = 0;
    for(i=0; i<(1 << p); i++)
    {
      sum = 0;
      for(j=0; j<p; j++)
      {
        if(i & (1 << j))
          sum = sum + bars[j];
      }

      if (sum == n)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
      printf("NO\n");
    else
      printf("YES\n");
  }

  return 0;
}
