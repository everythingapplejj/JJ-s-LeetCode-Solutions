int countDigits(int num){
    int or_num = num;
    int or_2_num = num;
    int count = 0;
    int mod = 0; 
    while (or_2_num != 0) {
        mod = or_2_num % 10;
        if (or_num % mod == 0) {
            count++;
        }
        or_2_num = or_2_num / 10;
    }
    return count;
}