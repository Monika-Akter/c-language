#include <stdio.h>

int main() {
    //1018
    int n;
    scanf("%d",&n);
    int h = n/100;
    int f = (n-(h*100))/50;
    int tw = (n-((h*100)+(f*50)))/20;
    int t = (n-((h*100)+(f*50)+(tw*20)))/10;
    int p = (n-((h*100)+(f*50)+(tw*20)+(t*10)))/5;
    int d = (n-((h*100)+(f*50)+(tw*20)+(t*10)+(p*5)))/2;
    int e = (n-((h*100)+(f*50)+(tw*20)+(t*10)+(p*5)+(d*2)))/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,h,f,tw,t,p,d,e);
    return 0;
}
