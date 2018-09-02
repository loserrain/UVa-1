#include <stdio.h>

#define MAXN 100000

int main(int argc, char *argv[])
{
  int m;
  int n, s1, s2, v1, v2;
  int l, i, t, k;
  long long res, temp;
  double cost_per_unit1, cost_per_unit2;

  scanf("%d", &m);

  for(k=0; k<m; k++)
  {
    printf("Case #%lld: ", k+1);
    scanf("%d %d %d %d %d", &n, &s1, &v1, &s2, &v2);

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
      /*
        Let us take a common area.
        s1 * s2

        cost can be s1*s2*v1 or s1*s2*v2

        Say v1 > v2 => 1st (s1*s2*v1) is preferred

        so that means if we had s1 units of s2 size of value v2, to maximize profit
        they will immediately be relaced by s2 units of s1 size of value v1

        hence, there can only be (s1 - 1) max units of size s2

        Similar logic if v2 > v1

        Condition:
          if(cost_per_unit1 >= cost_per_unit2)
        could also be written as:
          if(s2*v1 >= s1*v2)
        because
          v1 / s1 >= v2 / s2
          => s2*v1 >= s1*v2
      */
      if(cost_per_unit1 >= cost_per_unit2)
      {
        l = s1 - 1;

        for(i=0; i <= l; i++)
        {
          temp = i * v2 + ((n - s2 * i) / s1) * v1;

          if(temp > res)
            res = temp;
        }
      }
      else
      {
        l = s2 - 1;

        for(i=0; i <= l; i++)
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
