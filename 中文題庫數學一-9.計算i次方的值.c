#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int x,sum,i;
    while(scanf("%d",&x)!=EOF)
    {
        sum=1;
        if(x>31)
        {
            printf("Value of more than 31\n");
            continue;
        }
        for(i=1;i<=x;i++)
        {
            sum*=2;
        }

        printf("%d\n",sum);
    }
}
