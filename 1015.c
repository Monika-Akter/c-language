#include <stdio.h>
#include <math.h>

int main() {
    //1015
   double x1,y1;
   scanf("%lf%lf",&x1,&y1);
   double x2,y2;
   scanf("%lf%lf",&x2 ,&y2);
   double d = sqrt(((x2-x1)*(x2-x1))+ ((y2-y1)*(y2-y1)));
   printf("%.4lf\n",d);

    return 0;
}
