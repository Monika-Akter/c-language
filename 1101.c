#include <stdio.h>

int main() {

    //1101
    //input niyechi
    int a ,b,sum;
    //break use er jonno while loop enechi
    while(1){
    scanf("%d%d",&a,&b);
    //intruction onujayi shorto diyechi
    if(a<=0||b<=0){
        break;
    }
    sum=0;
    //sorting the values
    if(a>b){
        int t=a;
        a=b;
        b=t;
    }
    //sequence er jonno loop niechi
    for(int i=a;i<=b;i++){
        //sequence value print
        printf("%d ",i);
        sum=sum+i;
    }
    //sum print
    printf("Sum=%d\n",sum);
    }
    return 0;
}
