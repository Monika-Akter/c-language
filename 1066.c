#include <stdio.h>

int main() {

   //1066
   int n[5];
   int e,o,p,ne;
   e=0;
   o=0;
   p=0;
   ne=0;
   for(int i=0;i<5;i++)
   {
       scanf("%d",&n[i]);
       if(n[i]%2==0){
           e++;
       }
        if(n[i]%2!=0){
           o++;
       }
        if(n[i]>0){
           p++;
       }
        if(n[i]<0){
           ne++;
       }
   }
   printf("%d valor(es) par(es)\n",e);
   printf("%d valor(es) impar(es)\n",o);
   printf("%d valor(es) positivo(s)\n",p);
   printf("%d valor(es) negativo(s)\n",ne);
    return 0;
}
