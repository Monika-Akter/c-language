#include <stdio.h>

int main() {

    //1096
    //let i = 1
    int i = 1;
    int j ;
    while(i<=9){
        for(j=7;j>=5;j=j-1){
            printf("I=%d J=%d\n",i,j);
        }
        i=i+2;
    }
    return 0;
}
