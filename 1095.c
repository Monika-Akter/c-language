#include <stdio.h>

int main() {

   //1095
   //let i = 1 and j = 60
   int i=1;
   int j=60;
   while(j>=0){
       printf("I=%d J=%d\n",i,j);
       //j is decreasing by 5 and i is increasing by 3
       j=j-5;
       i=i+3;
   }

    return 0;
}
