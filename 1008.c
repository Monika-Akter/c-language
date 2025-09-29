#include <stdio.h>

int main() {

    //1008
    int en,wh;
    scanf("%d",&en);
    scanf("%d",&wh);
    double ar;
    scanf("%lf",&ar);
    double s = wh*ar;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",en,s);
    return 0;
}
