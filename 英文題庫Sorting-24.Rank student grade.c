#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct metrix
{
    char le;
    int num;
};
int cmp(const void *p,const void *q)
{
    int *x=(int *)p;
    int *y=(int *)q;
    return *y-*x;
}
int main()
{
    char name[60][20];
    //struct metrix me[80]; //letter[26]={0};
    int i,j,l,cnt2,cnt,index[60],*rank,grade[60];
    for(i=0; i<60; i++)
    {
        index[i]=i;
    }
    i=0;
    cnt=0;
    while(scanf("%d%s%d",&index[i],name[i],&grade[i])!=EOF)
    {
        //rank[i]=grade[i];
        i++;
        cnt++;
    }
    rank=(int *)malloc(sizeof(int)*cnt);
    for(i=0; i<cnt; i++)
    {
        rank[i]=grade[i];
    }
    qsort(rank,cnt,sizeof(rank[0]),cmp);
    /* for(j=0;j<cnt;j++)
         {
             printf("%d \n",rank[j]);

         }*/
    int rank2[cnt];
    for(i=0; i<cnt; i++)
    {
        rank2[i]=0;
    }
    cnt2=1;
    rank2[0]=rank[0];
    l=1;
    for(i=1; i<cnt; i++)
    {
        if(rank[i]!=rank[i-1])
        {
            rank2[l]=rank[i];
            cnt2++;
            l++;
        }
    }
    /*for(j=0;j<cnt2;j++)
        {
            printf("%d \n",rank2[j]);

        }
        printf("========\n");*/
    for(i=0; i<cnt; i++)
    {
        for(j=0; j<cnt2; j++)
        {
            if(rank2[j]==grade[i])
            {
                printf("%d %s %d %d\n",index[i],name[i],grade[i],j+1);
            }
        }

    }
    //printf("!!%d\n",cnt2);
    /*for(j=0;j<cnt2;j++)
        {
            printf("%d \n",grade[j]);

        }*/
}
