#include <stdio.h>

int main() {
    //1009
    char name[100];
    scanf("%s",&name);
    double s;
    scanf("%lf",&s);
    double sell;
    scanf("%lf",&sell);
    double t = s+(sell*0.15);
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}
