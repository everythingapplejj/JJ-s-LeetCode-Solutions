int subtractProductAndSum(int n){
    return product(n)-sum(n);
}


int product(int n) {
    int result = 1;
    while (n != 0) {
        result *= n % 10;
        n = n/10;
    }

    return result;
}

int sum(int n) {
    int result = 0;
    while (n != 0) {
        result += n % 10;
        n = n/10;
    }

    return result;

}