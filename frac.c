#include <stdio.h>


int main(){

    int a,b,i=2;
    int bool_premier=0;
    double tmp;

    fflush(stdin);
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    tmp=(double)a;

    printf("%d/%d= ",a,b);
    do{
        if(tmp>=(double)b/i){
            if(bool_premier)
                printf("+ ");
            printf("1/%d ",i);
            tmp-=(double)b/i;
            bool_premier=1;
        }
        i++;
    }while(tmp>0.0001); //reduire le nombre pour une plus grande précision mais risque d'erreur


    return 0;
}

