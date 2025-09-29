#include<stdio.h>
int main(){
    //1040
    double N1,N2,N3,N4;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    double avg = (N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
     else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
     else{
        printf("Aluno em exame.\n");
        double i;

        scanf("%lf",&i);
        printf("Nota do exame: %.1lf\n",i);
        double fm =(avg+i)/2;
         if(fm>=5.0){
             printf("Aluno aprovado.\n");
         } else {
             printf("Aluno reprovado.\n");
         }
         printf("Media final: %.1lf\n", fm);
    }

    return 0;
}
