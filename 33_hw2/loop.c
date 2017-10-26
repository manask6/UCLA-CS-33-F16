long loop(long x, long n)
{
  long result = 0;
  long mask;
  for (mask = 1; mask != 0; mask = mask<<n) {
    result |= (mask & x);
  }
  return result;
}

// x is stored in %rdi and %r8
// n is stored in %esi and %ecx (and in %cl)
// result is stored in %eax (and thus in %rdx)
// mask is stored in %edx (and thus in %rdx)

// Initially, result is 0 and mask is 1

// The test condition for mask is mask!=0


// Mask is left shifted by n each succesive loop

// Result is updated by being or'd with the result of masking x every loop
