//question 1: sqrt(x**2 + y**2) <= 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){

    const int N=100000;
    int cmpt_pi=0;
    float x,y;

    srand(time(NULL));
    for(int i=0;i<N;i++) {
        x = (float) rand() / RAND_MAX;
        y = (float) rand() / RAND_MAX;
        if(sqrt(pow(x,2) + pow(y,2)) <= 1)
            cmpt_pi++;
    }

    printf("%d/%d\n",cmpt_pi,N);
    printf("pi est environ égal à: %f",4.*cmpt_pi/N);





    return 0;
}

