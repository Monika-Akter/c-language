#include <stdio.h>

int main() {
    //1019
   int N;
   scanf("%d",&N);
   int h = N/3600;
   int m = (N-(h*3600))/60;
   int s = N-((h*3600)+(m*60));
   printf("%d:%d:%d\n",h,m,s);
    return 0;
}
