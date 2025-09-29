#include <stdio.h>

int main() {
    //1013
    //taking input
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
    //checking the greatest value
    if(a>=b && a>=c){
        printf("%d eh o maior\n",a);
    }
   else if(b>=a && b>=c){
        printf("%d eh o maior\n",b);
    }
    else{
        printf("%d eh o maior\n",c);
    }
    return 0;
}
