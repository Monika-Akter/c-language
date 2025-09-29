#include <stdio.h>

int main() {
   //1060
    //count dhore neu
  int count=0;
  //intput nei
  double n;
  for(int i = 0; i<6 ;i++){
      scanf("%lf",&n);
      //check kori positive ki na
      if(n>0){
          count++;
      }
  }
  printf("%d valores positivos\n",count);


    return 0;
}
