#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char *getword(char *line,char *word)
{
    char *ptr,*qtr;
    ptr=line;
    while(isspace(*ptr)&&*ptr!='\0')ptr++;
    qtr=word;
    while(!(isspace(*ptr))&&*ptr!='\0')
    {
        *qtr++=*ptr++;
    }
    *qtr='\0';
    if(strlen(word)==0)
        return NULL;
    else
        return ptr;
}
int main(){
    char word[128][128],tmp[128],line[1024],*ptr;
    int len=0,i,cnt,j;
    while(fgets(line,1024,stdin)!=NULL)
    {
        cnt=0;
        len=strlen(line);
        line[len-1]='\0';
        for(i=0;i<len;i++){
            if(line[i]<=90&&line[i]>=65)
                line[i]=line[i]-65+97;
        }
        ptr=line;
        while(ptr=getword(ptr,tmp))
        {
            if(cnt==0)
            {
                strcpy(word[cnt],tmp);
                cnt++;
            }
            else {
                for(j=0;j<cnt;j++)
                {
                    if(strcmp(word[j],tmp)==0)
                        break;
                }
                if(j==cnt)
                {
                    strcpy(word[cnt],tmp);
                    cnt++;
                }
            }
        }
        for(i=0;i<cnt-1;i++)
        {
            printf("%s ",word[i]);
        }
        printf("%s\n",word[i]);
        //printf("%s",line);
    }
    return 0;
}
