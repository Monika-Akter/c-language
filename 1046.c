#include <stdio.h>

int main() {
    //1046
    int s,e;
    scanf("%d%d",&s,&e);
    if(s<e){
        int h=e-s;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    else if(s>e){
        int h=(24-s)+e;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    if(s==e){
        int h=24;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }


    return 0;
}
