#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpar(char *cmp,char *inp)
{
    int i,len=strlen(inp);
    for(i=0;i<len;i++)
    {
        if(inp[i]!=cmp[i])
        {break;}
    }
    if(i==len)
    return 1;
    else return 0;
}
int main(){
    char inp[130],cmp[520];
    int sum,len,len2,Switch,i;
    while(scanf("%s%s",inp,cmp)!=EOF)
    {
        sum=0;
        len=strlen(cmp);
        len2=strlen(inp);
        for(i=0;i<=len-len2;i++)
        {
            Switch=0;
            Switch=cmpar(cmp+i,inp);
            if(Switch==1)
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
}
