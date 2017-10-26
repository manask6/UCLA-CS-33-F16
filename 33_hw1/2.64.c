#include<stdio.h>

int any_odd_one(unsigned x)
{
  int mask = 0xAAAAAAAA;
  return (1)&&(x&mask);
}
