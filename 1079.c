#include <stdio.h>

int main() {

    //1079
    //taking input
    int n;
    scanf("%d",&n);
    //taking floating point
    for(int i =0;i<n;i++){
    double a,b,c;
     scanf("%lf%lf%lf",&a,&b,&c);
     //processing average
     double avg = (a*2+b*3+c*5)/10;
     printf("%.1lf\n",avg);
    }

    return 0;
}
