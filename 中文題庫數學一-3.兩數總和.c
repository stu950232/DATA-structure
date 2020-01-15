#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int x,y,sum;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        sum=0;
        sum=x+y;
        printf("%d\n",sum);
    }
}
