#include <stdio.h>

int main() {

   //1116
   //taking input
   int n,x,y;
   scanf("%d",&n);
   //loop for taking n pair
   for(int i=0;i<n;i++){
       scanf("%d%d",&x,&y);
       //making x as double
       double a = x;
       //y=0 er condition
       if(y==0){
           printf("divisao impossivel\n");
       } else{
       double d = a/y;
       printf("%.1lf\n",d);
       }
   }

    return 0;
}
