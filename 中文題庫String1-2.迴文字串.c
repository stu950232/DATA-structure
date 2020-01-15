#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    int num,i,len,j;
    char strin[128];
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%s",strin);
        len=strlen(strin);
        for(j=len-1;j>=0;j--)
            printf("%c",strin[j]);
        printf("\n");
    }
}
