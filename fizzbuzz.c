#include <stdio.h>


int main(){

    const int MIN=1,MAX=100;
    int bool_verif;

    for(int i=MIN;i<=MAX;i++){
        bool_verif=0;

        if(i%3==0 || i%10==3){
            printf("Fizz");
            bool_verif=1;
        }
        if(i%7==0 || i%10==7){
            printf("Buzz");
            bool_verif=1;
        }
        if(!bool_verif){
            printf("%d",i);
        }
        printf(" ");
    }

    return 0;
}

