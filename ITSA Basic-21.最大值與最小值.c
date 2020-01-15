#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    double *c=(double *)a;
    double *d=(double *)b;
    return *c-*d;
}
int main(){
    int cnt,i,j,cnt2;
    double num[10]={0},max,min;
    cnt=0;
    for(i=0;i<10;i++)
    {
        scanf("%lf",&num[cnt]);
        //printf("%.2f\n",num[cnt]);
        cnt++;

    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    /*qsort(num,10,sizeof(double),cmp); */
    printf("maximum:%.2lf\n",max);
    printf("minimum:%.2lf\n",min);
    return 0;
}
