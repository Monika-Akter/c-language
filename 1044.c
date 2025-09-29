#include <stdio.h>

int main() {
    //1044
    //taking input
    int a,b;
    scanf("%d%d",&a,&b);
    //checking instruction
    if(b%a==0 || a%b==0){
        //giving output
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }


    return 0;
}
