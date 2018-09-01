#include <stdio.h>

int main(int argc, char *argv[])
{
  int w, l;
  int n;
  int x, y;
  int area;
  int i;

  while(scanf("%d", &w) != EOF)
  {
    scanf("%d", &n);

    area = 0;
    for(i=0; i<n; i++)
    {
      scanf("%d %d", &x, &y);
      area = area + x * y;
    }

    l = area / w;
    printf("%d\n", l);
  }

  return 0;
}
