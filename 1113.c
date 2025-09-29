#include <stdio.h>

int main() {

    //1113
    //taking input
    int a,b;
    //break use er jonno while loop use kora
    while(1){
        scanf("%d%d",&a,&b);
        //break if they equal
        if(a==b){
            break;
        }
        //checking condition
        if(a>b){
            printf("Decrescente\n");
        }
        if(a<b){
            printf("Crescente\n");
        }
    }

    return 0;
}
