#include <stdio.h>

int main() {
    //1012
    double A,B,C;
   scanf("%lf%lf%lf",&A,&B,&C);
   double t = 0.5*A*C;
   double c = 3.14159*C*C;
   double T = 0.5*(A+B)*C;
   double q = B*B;
   double r = A*B;
   printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",t,c,T,q,r);

    return 0;
}
