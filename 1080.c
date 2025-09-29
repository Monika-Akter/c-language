#include <stdio.h>

int main() {

   //1080
   //taking input
   int num;
   int i = 1;
   //let max and position 0
   int max = 0;
   int pos = 0;
  while(i<=100){
      scanf("%d",&num);
      //checking max number
      if(num>max){
          max = num;
          pos = i;
      }
       i++;
  }
  printf("%d\n%d\n",max,pos);
    return 0;
}
