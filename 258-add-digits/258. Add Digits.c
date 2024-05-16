int addDigits(int num){
    int processed = num;
    int addition = 0;

    while(processed != 0) {
        addition += processed % 10;
        processed = processed / 10;
    }

    int count = 0;
    int interm = addition;
    while (interm !=0){
        count++;
        interm = interm / 10; 
    }

    printf("%d", count);

    if (count < 2) {
        return addition;
    } else {
        int select = addition;
        return addDigits(select);
    }



}