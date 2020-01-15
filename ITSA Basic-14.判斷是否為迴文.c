#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    char line[100],*front,*back,*ptr;
    int i,len,hallen;
    while(scanf("%s",line)!=EOF)
    {
        len=strlen(line);
        hallen=len/2;
        //printf("%s\n",line);
        if(len%2!=0)
        {
            ptr=line+hallen+1;
            /*for(i=0;i<hallen;i++)
            {
                front[i]=line[i];
            }*/
            //strncpy(front,line,hallen-1);
            front=strndup(line,hallen);
            //printf("%s\n",front);
            back=strndup(ptr,hallen);
            //printf("%s\n",back);
            for(i=0;i<hallen;i++)
            {
                if(back[hallen-1-i]!=front[i])
                break;
            }
            if(i==hallen)
            {puts("YES");}
            else puts("NO");
            /*if(strcmp(tmp,front)==0)
            {
                printf("YES\n");
            }
            else printf("NO\n");*/
        }
        else {
            front=strndup(line,hallen);
            //printf("%s\n",front);
            ptr=line+hallen;
            back=strndup(ptr,hallen);
            //printf("%s\n",back);
            for(i=0;i<hallen;i++)
            {
                if(back[hallen-1-i]!=front[i])
                break;
            }
            if(i==hallen)
            {puts("YES");}
            else puts("NO");
        }
    }
}
