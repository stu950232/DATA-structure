#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main(){
    int num[7],i;
    num[0]=1;
    num[1]=6;
    num[2]=9;
    num[3]=23;
    num[4]=56;
    num[5]=95;
    scanf("%d",&num[6]);
    qsort(num,7,sizeof(int),cmp);
    for(i=0;i<6;i++)
    {
        printf("%d,",num[i]);
    }
    printf("%d\n",num[6]);
}
