#include <stdio.h>

int main() {
    //1010
    int c,u;
    scanf("%d%d",&c,&u);
    float p;
    scanf("%f",&p);

    int c1,u1;
    scanf("%d%d",&c1,&u1);
    float p1;
    scanf("%f",&p1);

    double bill= (u*p)+(u1*p1);
    printf("VALOR A PAGAR: R$ %.2lf\n",bill);

    return 0;
}
