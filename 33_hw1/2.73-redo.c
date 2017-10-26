#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int saturating_add(int x, int y)
{
  int a;
  (__builtin_add_overflow(x,y,a));
  return a;
}
