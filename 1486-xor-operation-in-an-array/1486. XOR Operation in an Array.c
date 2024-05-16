int xorOperation(int n, int start){

    int count = n;
    int begin = 0;
    int xor = start;

    for (int i = 1; i < count; i++) {
        xor ^= show(start,i);
    }
   
    return xor; 

}

int show(int start, int i) {
    return start + 2 * i;
}