#include <stdio.h>

int main() {

   //1132
   //taking input
   int x,y,sum=0;
   scanf("%d%d",&x,&y);
   //sorting them
   if(x>y){
       int t = x;
       x=y;
       y=t;
   }
   //loop for taking input from x to y
   for(int i = x; i<=y ; i++){
       // condition for 13 dividible
   if(i%13==0){
       continue;
   }
   sum=sum+i;
   }
   printf("%d\n",sum);

    return 0;
}
