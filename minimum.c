#include <stdio.h>

int main(void){
    int num1,num2,num3,num4,smaller;

    printf("Enter the first integer: ");
    scanf("%d",&num1);
    printf("Enter the second integer: ");
    scanf("%d",&num2);
    printf("Enter the third integer: ");
    scanf("%d",&num3);
    printf("Enter the fourth integer: ");
    scanf("%d",&num4);

    if (num1>num2){
        smaller=num2;
    }
    else{
        smaller=num1;
    }
    if (smaller>num3){
        smaller=num3;
    }
    if (smaller>num4){
        smaller=num4;
    }

    printf("%d is the smallest integer", smaller);
    return 0;





}

