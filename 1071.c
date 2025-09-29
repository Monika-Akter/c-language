#include <stdio.h>

int main() {

   //1071
   //taking input
   int x,y;
   scanf("%d%d",&x,&y);
   int sum=0;
   //checking which small
   if(x<y){
       for(int i=x+1;i<y;i++){
           if(i%2!=0){
               sum=sum+i;
           }
       }
   }
  else if(x>y){
       for(int i=y+1;i<x;i++){
           if(i%2!=0){
               sum=sum+i;
           }
       }

   }
   //print sum of all odd
   printf("%d\n",sum);

    return 0;
}
