#include <stdio.h>

int main() {

    //1073
    //taking input
    int n;
    scanf("%d",&n);
    int p;
    //checking even number
    for(int i=1;i<=n;i++){
        if(i%2==0){
            //processing square of even number
            p=i*i;
            printf("%d^2 = %d\n",i,p);
        }
    }

    return 0;
}
