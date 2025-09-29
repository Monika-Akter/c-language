#include <stdio.h>

int main() {

    //1133
    //taking input
    int x,y,t;
    scanf("%d%d",&x,&y);
    //swaping them
    if(x>y){
        t=x;
        x=y;
        y=t;
    }
    //loop for checking all the numbers from to y
    for(int i=x+1; i<y;i++){
        if(i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }

    return 0;
}
