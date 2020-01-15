#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int x,i,tmp,cnt,tmp1;
    while(scanf("%d",&x)!=EOF)
    {
        cnt=x/35;
        for(i=1;i<=cnt;i++)
        {
            tmp=35*i;
            tmp1=35*(i+1);
            if(tmp>x)
                break;
            if(tmp1>=x)
            {
                break;
            }
            printf("%d ",tmp);
        }
        printf("%d\n",tmp);
    }
}
