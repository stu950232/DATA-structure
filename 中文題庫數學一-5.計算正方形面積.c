#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    double x,y;
    int tmp;
    while(scanf("%lf",&x)!=EOF)
    {
        y=x*x;
        y*=10;
        y+=0.5;
        tmp=(int)y;
        y=(double)tmp;
        y/=10;
        printf("%.1f\n",y);
    }
}
