#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,root1,root2;
    printf("Input the first coefficient: ");
    scanf("%lf",&a);
    printf("Input the second coefficient: ");
    scanf("%lf",&b);
    printf("Input the third coefficient: ");
    scanf("%lf",&c);

    if(a==0){
        root1=-c/b;
        printf("a is 0, thus the only root is: root=%lf \n", root1);
    }
    else if (b*b-4*a*c>=0){
        root1=(-b+sqrt(b*b-4*a*c)/2*a);
        root2=(-b-sqrt(b*b-4*a*c)/2*a);
        printf("Solutions are: \n root1= %lf \n root2= %lf \n", root1, root2);
    }
    else{
        printf("Complex roots \n");
    }
     return 0;





}
