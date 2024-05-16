int hammingWeight(uint32_t n) {

  if (n == 0) {
    return 0;
  }

  int count = 0;

  while (n != 0) {
    if (n & 1 == 1) {
        printf("n: %d\n", n);
        printf("n & 1: %d\n", n & 1);
        count++;
    }

    n = n >> 1; 

  }

  return count; 
    
}