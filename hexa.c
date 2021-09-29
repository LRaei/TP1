#include <stdio.h>


int main(){

    int res=0,bool_verif;
    char c;

    do {
        bool_verif=1;
        fflush(stdin);
        scanf("%c",&c);
        switch(c){
            case '0':res*=16;break;
            case '1':res=res*16+1;break;
            case '2':res=res*16+2;break;
            case '3':res=res*16+3;break;
            case '4':res=res*16+4;break;
            case '5':res=res*16+5;break;
            case '6':res=res*16+6;break;
            case '7':res=res*16+7;break;
            case '8':res=res*16+8;break;
            case '9':res=res*16+9;break;
            case 'a':
            case 'A':res=res*16+10;break;
            case 'b':
            case 'B':res=res*16+11;break;
            case 'c':
            case 'C':res=res*16+12;break;
            case 'd':
            case 'D':res=res*16+13;break;
            case 'e':
            case 'E':res=res*16+14;break;
            case 'f':
            case 'F':res=res*16+15;break;
            default: bool_verif=0; break;
        }

    }while(bool_verif==1);

    printf("\n%d",res);
    return 0;
}

