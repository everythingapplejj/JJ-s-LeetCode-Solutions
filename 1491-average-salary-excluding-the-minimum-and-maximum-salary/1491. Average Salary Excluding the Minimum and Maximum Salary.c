

double average(int* salary, int salarySize){
    double average;
    int total = 0;
    int max = 0;
    int min = salary[0];
    int count = 0;
    
    for (int i = 0; i < salarySize; i++) {
        if (max <= salary[i]) {
            max = salary[i];
        }
    }

    printf("max: %d", max);

    for (int i = 0; i < salarySize; i++) {
        if (min > salary[i]) {
             min = salary[i];
        }
    }

    printf("min: %d", min);

    for (int i = 0; i < salarySize; i++) {
        if (salary[i] == max || salary[i] == min) {
            continue;
        } else {
            total += salary[i];
        }
    }
    
    double total_final = (double) total;
    double size = (double) (salarySize - 2) ; 

    average = total_final/size;
    return average; 
}
