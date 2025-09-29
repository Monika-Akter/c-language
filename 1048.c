#include <stdio.h>

int main() {

    //1048
    double n;
    scanf("%lf",&n);
    int p;
    if( n<=400.00){

    p=15;

    }
   else if(n<=800.00){
        p=12;
    }
   else if(n<=1200.00){
       p=10;
    }
    else if(n<=2000.00){
        p=7;

    }
    else if(n>2000.00){
        p=4;
    }
    double q= (n*p/100.00);
    double f=n+q;
    printf("Novo salario: %.2lf\n", f);
    printf("Reajuste ganho: %.2lf\n", q);  // ⬅️ একটাও বাড়তি স্পেস নাই
    printf("Em percentual: %d %%\n", p);


    return 0;
}
