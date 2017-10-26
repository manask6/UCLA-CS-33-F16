#include <stdio.h>
#include <limits.h>

int main(void)
{
  int x = random();
  int y = random();
  unsigned ux = (unsigned) x;
  unsigned uy = (unsigned) y;
  
  printf("%d",  (ux-uy)==-(unsigned)(y-x) );
  return 0;
}
