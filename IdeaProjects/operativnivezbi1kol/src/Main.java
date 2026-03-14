int main() {
    int i = 0;
    while(i<2 && fork()){
        printf("%d, %d, %d\n", i, getpid(), getppid()); // Added newline for better readability
        i++; // Corrected increment operator
    }
    sleep(i+1);
    # ова подолу е како execlp, зашто се пребришуваат податоците
    printf("%d, %d, %d\n", i, getpid(), getppid()); // Added newline for better readability
    return 0;
}