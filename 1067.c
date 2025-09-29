#include<stdio.h>
int main()
{
    //1067
    //taking input
    int x;
    scanf("%d",&x);
    //printing odd
    for (int i=1;i<=x;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}
