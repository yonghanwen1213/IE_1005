#include <stdio.h>

int main(void){
    float R1,R2,R3,I,V;

    printf("Enter the voltage: ");
    scanf("%f",&V);
    printf("Enter the resistance: ");
    scanf("%f",&R1);
    printf("Enter the resistance: ");
    scanf("%f",&R2);
    printf("Enter the resistance: ");
    scanf("%f",&R3);

    if (R1+R2+R3==0){
        printf("Total resistance is 0, thus current can't be calculated\n");
    }
    else{
        I=V/(R1+R2+R3);
        printf("Current, I = %f \n",I);
    }

    return 0;
}
