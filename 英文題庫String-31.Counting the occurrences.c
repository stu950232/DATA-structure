#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct metrix{
    char le;
    int num;
};
int cmp(const void *p,const void *q)
{
    struct metrix *x=(struct metrix *)p;
    struct metrix *y=(struct metrix *)q;
    return y->num-x->num;
}
int main(){
    char input[100];
    struct metrix me[80]; //letter[26]={0};
    int len,i,j,l,cnt;
    while(scanf("%s",input)!=EOF)
    {
        for(i=0;i<80;i++)
        {
            me[i].num=0;
            me[i].le='\0';
        }
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            for(j=0;j<80;j++)
            {
                if(input[i]==me[j].le)
                {
                    me[j].num++;
                    break;
                }

            }
            if(j==80)
            {
                for(l=0;l<80;l++)
                {
                    if(me[l].num==0)
                    {
                        cnt=l;
                        break;
                    }
                }
                me[cnt].num=1;
                me[cnt].le=input[i];
            }
        }
        qsort(me,80,sizeof(me[0]),cmp);
        if(me[1].num==me[0].num)
        {
            printf("None\n");
        }
        else{
            printf("%c\n",me[0].le);
        }
    }

}
