#include <stdio.h>

int main() {

    //1043
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        double p = a+b+c;
        printf("Perimetro = %.1lf\n",p);
    }
    else{
        double ar = ((a+b)*c)/2.0;
        printf("Area = %.1lf\n",ar);
    }
    return 0;
}
