#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if(year%12<=2&&year%12>=0)
        {
            printf("Winter\n");
        }
        else if(year%12<=5&&year%12>=3)
        {
            printf("Spring\n");
        }
        else if(year%12<=8&&year%12>=6)
        {
            printf("Summer\n");
        }
        else if(year%12<=11&&year%12>=9)
        {
            printf("Autumn\n");
        }
    }
    return 0;
}
