#include <stdio.h>

int main() {
    //1017
    int t,v;
    scanf("%d%d",&t,&v);
    int d = v*t;
    double l = d/12.0;
    printf("%.3lf\n",l);
    return 0;
}
