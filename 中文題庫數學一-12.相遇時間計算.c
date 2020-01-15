#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    float vx,vy,V,tmp;
    int dis,sec;
    vx=1;
    vy=30*2.54/100;
    V=vx-vy;
    while(scanf("%d",&dis)!=EOF)
    {
        tmp=dis/V+0.9;
        sec=(int)tmp;
        printf("%d\n",sec);
    }
}
