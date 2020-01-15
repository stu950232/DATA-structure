#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int in;
    float ki;
    while(scanf("%d",&in)!=EOF)
    {
        ki=in*1.6;
        printf("%.1f\n",ki);
    }
    return 0;
}
