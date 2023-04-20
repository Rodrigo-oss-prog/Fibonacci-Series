#include <stdio.h>

int main(){

    int i, n;

    // initialize the first and second terms
    int fb1 = 0, fb2 = 1;

    // initialize the nesxt term (3rd term)
    int fb3 = fb1 + fb2;

    // get number of terms from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // print the first two terms fb1 and fb2
    printf("Fibonacci Series: %d %d ", fb1, fb2);

    // use for loop 
    // print 3rd to nth terms
    for(i = 3; i <= n; ++ i){
        printf("%d ", fb3);
        fb1 = fb2;
        fb2 = fb3;
        fb3 = fb1 + fb2;
    }   
    return 0;
   
}