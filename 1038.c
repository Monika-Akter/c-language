#include <stdio.h>

int main() {

    //1038
    int x,y;
    scanf("%d%d",&x,&y);
    float p[6] = {0,4.00,4.50,5.00,2.00,1.50};
    float t = p[x]*y;
    printf("Total: R$ %.2f\n",t);
    return 0;
}
