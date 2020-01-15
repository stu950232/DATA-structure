#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    float C,F;
    while(scanf("%f",&C)!=EOF)
    {
        F=0;
        F=C*9/5+32;
        printf("%.1f\n",F);
    }
}
