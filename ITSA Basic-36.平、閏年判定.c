#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if(year%4==0&&year%100!=0)
        {
            printf("Bissextile Year\n");
        }
        else if(year%100==0&&year%400==0)
        {
            printf("Bissextile Year\n");
        }
        else printf("Common Year\n");
    }
    return 0;
}
