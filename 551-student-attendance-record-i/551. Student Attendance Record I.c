// code by Jiwoong Jung 
bool checkRecord(char * s){
    int absent = 0;
    int Late = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'A') {
            absent++;
        }
        if (s[i] == 'L') {
            if (s[i+1] == 'L' && s[i+2] == 'L' && (i+2) < strlen(s)) {
                Late = 1;
                break;
            } else {
                Late = 0;
            }
        }
    }
    printf("Absent:%d\n", absent);
    printf("Late:%d", Late);

    if (absent >= 2 || Late == 1) {
        return false;
    } else {
        return true;
    }

}