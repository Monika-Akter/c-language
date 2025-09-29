#include <stdio.h>

int main() {

    //1045
    //taking output
   double a,b,c,t;
   scanf("%lf%lf%lf",&a,&b,&c);
   //sorting them
   if(a<b){
       t=a;a=b;b=t;
   }
   if(a<c){
       t=a;a=c;c=t;
   }
   if(b<c){
       t=b;b=c;c=t;
   }
   //checking output
   if(a>=b+c){
       printf("NAO FORMA TRIANGULO\n");
   }
else{
if(a*a==b*b+c*c){
       printf("TRIANGULO RETANGULO\n");
   }
    if(a*a>b*b+c*c){
        printf("TRIANGULO OBTUSANGULO\n");
    }
     if(a*a<b*b+c*c){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
   else if(a==b || b==c|| c==a){
        printf("TRIANGULO ISOSCELES\n");
    }}
    return 0;
}
