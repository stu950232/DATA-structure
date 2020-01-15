#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int x,y,z,n;
    scanf("%d",&x);
    y=x/10;
    z=(x-y*10)/5;
    n=(x-y*10-z*5)/1;

        /*sum=1;

        for(i=1; i<=x; i++)
        {

            sum*=i;
        }*/
        printf("NT10=%d\nNT5=%d\nNT1=%d\n",y,z,n);


}
