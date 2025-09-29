#include <stdio.h>

int main() {

    //1042
    //taking input
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    //checking value
    if(x<y && x<z){
        if(y<z){
            printf("%d\n%d\n%d\n",x,y,z);
        } else {
            printf("%d\n%d\n%d\n",x,z,y);
        }
    }
  else if(y<x && y<z){
        if(x<z){
            printf("%d\n%d\n%d\n",y,x,z);
        } else {
            printf("%d\n%d\n%d\n",y,z,x);
        }
    }
   else  if(z<y && z<x){
        if(y<x){
            printf("%d\n%d\n%d\n",z,y,x);
        } else {
            printf("%d\n%d\n%d\n",z,x,y);
        }
    }

    //print orginal
    printf("\n%d\n%d\n%d\n",x,y,z);


    return 0;
}
