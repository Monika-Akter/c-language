#include <stdio.h>

int main() {

    //1115
    //taking input
    int x,y;
    while(1){
        scanf("%d%d",&x,&y);
        //condition for null
        if(x==0 || y==0){
            break;
        }
        //condition for quadrant
        else if(x>0 && y>0){
            printf("primeiro\n");
        }
         else if(x>0 && y<0){
            printf("quarto\n");
        }
         else if(x<0 && y<0){
            printf("terceiro\n");
        }
         else if(x<0 && y>0){
            printf("segundo\n");
        }
    }

    return 0;
}
