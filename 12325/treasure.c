#include <stdio.h>

#define MAXN 100000

int main(int argc, char *argv[])
{
  int m;
  long long n, s1, s2, v1, v2;
  long long l, i, t, k;
  long long res, temp;
  double cost_per_unit1, cost_per_unit2;

  scanf("%d", &m);

  for(k=0; k<m; k++)
  {
    printf("Case #%lld: ", k+1);
    scanf("%lld %lld %lld %lld %lld", &n, &s1, &v1, &s2, &v2);

    if(s1 < s2)
    {
      t = s1;
      s1 = s2;
      s2 = t;

      t = v1;
      v1 = v2;
      v2 = t;
    }

    l = n / s1;
    res = 0;

    if (l < MAXN)
    {
      for(i=0; i<=l; i++)
      {
        temp = i * v1 + ((n - s1 * i) / s2) * v2;

        if(temp > res)
          res = temp;
      }
    }
    else
    {
      cost_per_unit1 = v1 / s1;
      cost_per_unit2 = v2 / s2;

      if(s2*v1 >= s1*v2)
      {
        l = s1 - 1;

        for(i=0; i<=l; i++)
        {
          temp = i * v2 + ((n - s2 * i) / s1) * v1;

          if(temp > res)
            res = temp;
        }
      }
      else
      {
        l = s2 - 1;

        for(i=0; i<=l; i++)
        {
          temp = i * v1 + ((n - s1 * i) / s2) * v2;

          if(temp > res)
            res = temp;
        }
      }
    }

    printf("%lld\n", res);
  }
  return 0;
}
