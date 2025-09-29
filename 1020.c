#include <stdio.h>

int main() {
    //1020
    int age;
    scanf("%d",&age);
    int y = age/365;
    int m = (age-(y*365))/30;
    int d = age-((y*365)+(m*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}
