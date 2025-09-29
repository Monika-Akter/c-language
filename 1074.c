#include <stdio.h>

int main() {

    //1074
    //taking input
    int n;
    scanf("%d",&n);
    int arr;
    //CHECKING CONDITION
    for(int i=0;i<n;i++){
        scanf("%d",&arr);
        if(arr==0){
            printf("NULL\n");
        }
        else if(arr>0 && arr%2!=0){
            printf("ODD POSITIVE\n");
        }
         else if(arr<0 && arr%2!=0){
            printf("ODD NEGATIVE\n");
        }
         else if(arr>0 && arr%2==0){
            printf("EVEN POSITIVE\n");
        }
         else if(arr<0 && arr%2==0){
            printf("EVEN NEGATIVE\n");
        }
    }

    return 0;
}
