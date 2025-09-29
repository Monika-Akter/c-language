#include <stdio.h>

int main() {

   //1064
   double num[6];
   int count=0;
   double sum=0;
   for(int i = 0;i<6;i++)
   {
       scanf("%lf",&num[i]);
       if(num[i]>0){
          count++;
          sum =(sum + num[i]);
       }

   }
   double avg = sum/count;
   printf("%d valores positivos\n",count);
   printf("%.1lf\n",avg);
    return 0;
}
