#include <stdio.h>

int main() {

   //1114
   //set fixed password
   int pass = 2002;
   //taking users password
   int password;
   while(1){
   scanf("%d",&password);
   //right password condition
    if(password == pass){
        printf("Acesso Permitido\n");
        break;
    }
    printf("Senha Invalida\n");
   }
    return 0;
}
