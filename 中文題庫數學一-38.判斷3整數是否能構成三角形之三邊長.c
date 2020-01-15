#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a[3],min,tmp,index,i;
    while(scanf("%d%d%d",&a[0],&a[1],&a[2])!=EOF)
    {
        tmp=0;
        min=a[0];
        index=0;
        for(i=0;i<3;i++)
        {
            if(a[i]>min)
            {
                index=i;
                min=a[i];
            }
        }
        if(index==0)
        {
            tmp=a[1]+a[2];
            if(tmp>min)
                printf("fit\n");
            else
                printf("unfit\n");
        }
        else if(index==1)
        {
            tmp=a[0]+a[2];
            if(tmp>min)
                printf("fit\n");
            else
                printf("unfit\n");
        }
        else if(index==2)
        {
            tmp=a[0]+a[1];
            if(tmp>min)
                printf("fit\n");
            else
                printf("unfit\n");
        }
    }
}
