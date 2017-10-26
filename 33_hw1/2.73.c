#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y)
{
  int z = x + y;
  int total = x + y;
  x >> 31;
  y >> 31;
  z >> 31;
  return total;
}
