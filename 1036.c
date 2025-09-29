#include <stdio.h>
#include <math.h>

int main() {
    //1036
   double A,B,C;
   scanf("%lf%lf%lf",&A,&B,&C);
   double r = (B*B)-4*A*C;
   if(A==0 || r<0){
       printf("Impossivel calcular\n");
   }
    else {
        double s1 = (-B+sqrt(r))/(2*A);
        double s2 = (-B-sqrt(r))/(2*A);
        printf("R1 = %.5lf\nR2 = %.5lf\n",s1,s2);
    }
    return 0;
}
