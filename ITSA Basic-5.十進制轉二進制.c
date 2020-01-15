#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[8],in,i;

    while(scanf("%d",&in)!=EOF)
    {
        if(in<0)
            in+=256;
        for(i=7;i>=0;i--)
        {
            num[i]=in%2;
            in=in/2;
        }
        for(i=0;i<7;i++)
        {
            printf("%d",num[i]);
        }
        printf("%d\n",num[i]);
    }
    return 0;
}
