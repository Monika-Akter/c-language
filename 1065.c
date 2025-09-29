#include <stdio.h>

int main() {

   //1065
   int n[5];
   int count = 0;
   for(int i=0;i<5;i++){
       scanf("%d",&n[i]);
       if(n[i]%2==0){
           count++;
       }
   }
   printf("%d valores pares\n",count);

    return 0;
}
