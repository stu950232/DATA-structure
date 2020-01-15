#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int x,sum,i;
    while(scanf("%d",&x)!=EOF)
    {
        sum=0;
        for(i=1;i<=x;i++)
        {
            if((i%2==0)&&(i%3==0)&&(i%12!=0))
                sum+=i;
        }

        printf("%d\n",sum);
    }
}
