#include <stdio.h>

int main() {

    //1099
    //taking input
    int n;
    scanf("%d",&n);
    //taking the pair
    int x,y,sum;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        //set x=small
        if(x>y){
            int t=x;
            x=y;
            y=t;
        }
        sum=0;
        //process the sum of all odd
        for(int a=x+1;a<y;a++){
            if(a%2!=0){
                sum=sum+a;
            }
        }
        //print all the sum
        printf("%d\n",sum);
    }

    return 0;
}
