#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
int main(){
    int cnt,i,j;
    int numcnt ,kth,*metrix;
    scanf("%d",&cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d%d",&numcnt,&kth);
        metrix=malloc(sizeof(int)*numcnt);
        kth--;
        for(j=0;j<numcnt;j++)
        {
            scanf("%d",&metrix[j]);
        }
       /* for(j=0;j<numcnt;j++)
        {
            printf("%d:%d\n",i,metrix[j]);
        }*/
        qsort(metrix,numcnt,sizeof(int),cmp);
        printf("%d\n",metrix[kth]);
        /*for(j=0;j<numcnt;j++)
        {
            printf("%d:%d\n",i,metrix[j]);
        }*/
    }
}
