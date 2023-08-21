#include <stdio.h>

int main() {
     
    //To convert Celsius to Fahrenheit
    int step, lower, upper;
    float fahr, celsi;

    //Static values for the code
    lower = 0;
    upper = 300;
    step = 20;


    fahr = lower;
    while(fahr <= upper){
        celsi = (5.0/9.0) * (fahr-32.0);

        //Display the while loop
        printf("%4.0f %6.1f\n", fahr, celsi);
        fahr = fahr + step;
    }
    return 0;
}
