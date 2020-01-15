#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,i,len,tmp;
    char line[121];
    fgets(line,121,stdin);
    scanf("%d",&num);
    //printf("%d",num);
    len=strlen(line);
    line[len-1]='\0';
    for(i=0;i<len;i++)
    {
        if(line[i]>='A'&&line[i]<='Z')
        {line[i]=(line[i]-'A'+num)%26+'A';
        }
        else if(line[i]>='a'&&line[i]<='z')
        {
            line[i]=(line[i]-'a'+num)%26+'a';
        }
        else if(line[i]>='0'&&line[i]<='9')
        {
            line[i]=(line[i]-'0'+num)%10+'0';
        }
    }
    printf("%s\n",line);
    /*while(scanf("%d",&num)!=EOF)
    {   tmp=3;
        sum=0;
        while(tmp!=sum)
        {
            sum+=tmp;
            tmp=tmp*3;
        }
        printf("%d\n",sum);
    }*/
    return 0;
}
