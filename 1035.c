#include <stdio.h>

int main() {
    //1035
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    int s = C+D;
    int d = A+B;
    if(B>C && D>A && s>d && C>=0 && D>=0 && A%2==0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    } /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
