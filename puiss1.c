#include <stdio.h>


int main(){

    float x,res=1;
    unsigned int k;

    printf("x=");
    scanf("%f",&x);
    printf("k=");
    scanf("%d",&k);

    for(int i=0;i<k;i++){
        res*=x;
    }
    printf("%f",res);

    return 0;
}
