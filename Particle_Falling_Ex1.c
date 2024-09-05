/*u is initial velocity*/
#include <stdio.h>
#define ACCEL 9.81

int main(void){
    double time=0, max_time, interval, distance, u;

    printf("Time Elapsed  Distance Travelled\n" );
    printf("--------------------------------\n" );
    printf("Please enter initial velocity: ");
    scanf("%lf",&u);
    printf("Please enter maximum time: ");
    scanf("%lf",&max_time);
    printf("Please enter interval: ");
    scanf("%lf",&interval);


    while(time<max_time){

        distance=u*time+0.5*ACCEL*time*time;
        printf("%8.2f %8.2f\n", time, distance);
        time= time + interval;
    }
return 0;
}
