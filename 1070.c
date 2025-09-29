#include <stdio.h>

int main() {

    //1070
    // taking input
   int x;
   scanf("%d",&x);
   //print next 6 odd
    int p=x+12;
    for(int i=x;i<p;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
