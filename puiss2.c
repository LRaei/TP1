#include <stdio.h>


int main(){

    float x,res=1;
    unsigned int k;

    printf("x=");
    scanf("%f",&x);
    printf("k=");
    scanf("%d",&k);

    if(k%2==1) {
        k = (k - 1) / 2;
        res*=x;
    }
    else
        k/=2;

    x*=x;

    for(int i=0;i<k;i++){
        res*=x;
    }
    printf("%f",res);


    return 0;
}


/*Question 3:

 puiss1: 18 itérations
 puiss2: 9 itérations

 puiss1: k itérations
 puiss2: k/2 (arrondi a l'entier inférieur) itérations
 */