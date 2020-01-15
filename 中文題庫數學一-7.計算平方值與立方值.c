#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int x,y,z;
    while(scanf("%d",&x)!=EOF)
    {
        y=x*x;
        z=y*x;

        printf("%d %d %d\n",x,y,z);
    }
}
