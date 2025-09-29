#include <stdio.h>

int main() {

   //1078
   int n;
   scanf("%d",&n);
   int i=1;
   while(i<=10){
       int N = i*n;
       printf("%d x %d = %d\n",i,n,N);
       i++;
   }

    return 0;
}
