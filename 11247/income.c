#include <stdio.h>

//Accepted
int main(int argc, char *argv[])
{
  long long m, x, v;
  long long t;
  double temp;

  while(1)
  {
    scanf("%lld %lld", &m, &x);

    if(m == 0 && x == 0)
      break;

    if(x == 0 || x == 100)
    {
      printf("Not found\n");
      continue;
    }

    v = ((m - 1) * 100) / (100 - x);
    t = ((m - 1) * 100) % (100 - x);

    if (t == 0)
      v--;

    if(v < 0 || v < m)
    {
      printf("Not found\n");
      continue;
    }
    printf("%lld\n", v);
  }

  return 0;
}
