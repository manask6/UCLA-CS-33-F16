long switch_prob(long x, long n) {
  long result = x;
  switch(n) {
  case 60:
  case 62: return (x*8);
  case 63: return (x>>3);
  case 64: return (75+(x*15)^2);
  case 65: return (75+(x)^2);
  default: return (75+x);
  }
  return result;
}
