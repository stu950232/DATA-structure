#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int x,y,z,n,k;
    scanf("%d",&x);
    y=x/86400;
    z=(x-y*86400)/3600;
    n=(x-y*86400-z*3600)/60;
    k=(x-y*86400-z*3600)%60;

        /*sum=1;

        for(i=1; i<=x; i++)
        {

            sum*=i;
        }*/
        printf("%d days\n",y);
        printf("%d hours\n",z);
        printf("%d minutes\n",n);
        printf("%d seconds\n",k);
}
