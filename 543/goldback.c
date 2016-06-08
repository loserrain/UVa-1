#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
  int i;

  if(n==2 || n==3)
    return 1;

  if ((n%2 == 0) || (n%3) == 0)
    return 0;

  for(i=6; (i-1) <= sqrt(n); i=i+6)
  {
    if(n%(i-1) == 0)
     return 0;

    if(n%(i+1) == 0)
      return 0;
  }

  return 1;
}

int main(int argc, char *argv[])
{
  int i, n;
  
  scanf("%d", &n);
  
  while(n != 0)
  {
    int flag = 0;

    for(i=3; i <= (n/2); i=i+2)
    {
      if ((is_prime(i) == 1) && (is_prime(n-i)))
      {
        flag = 1;
        break;
      }
    }

    if (flag == 1)
      printf("%d = %d + %d\n", n, i, n-i);
    else
      printf("Goldbach's conjecture is wrong.\n");
    
    scanf("%d", &n);
  }


  return 0;
}
