int numberSetBit(int n){
  int count = 0;

  for ( int i = 0; i <= 31; i++) {
    // set bit at ith position
    int x = 1 << i;

    // check if bit is set
    if ((n & x) == x) {
      count++;
    }
  }

  return count;
}