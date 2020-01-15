#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int x,sum,i;
    scanf("%d",&x);
    sum=0;
    printf("1 ");
    for(i=1;i<=x;i++)
    {
        sum+=i;
    }
    for(i=2;i<=x;i++)
    {
        printf("+ %d ",i);
    }
    printf("= %d\n",sum);


}
