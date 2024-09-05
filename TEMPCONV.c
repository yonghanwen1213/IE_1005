#include <stdio.h>

int main(void){
    float C, F;

    printf("Enter temperature in Celcius: ");
    scanf("%f", &C);

    F = (9/5)*C + 32;
    printf("Temperature in Celcius is %f and temperature in Fahrenheit is %f",C,F);

    return 0;





}
