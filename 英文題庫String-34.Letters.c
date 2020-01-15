#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char input[120];
    int letter[26]={0};
    int len,i;
    //while(scanf("%s",input)!=EOF)
    //{
    scanf("%s",input);
        len=strlen(input);
        for(i=0;i<len;i++)
        {
            if(input[i]>=65&&input[i]<=90)
            {
                letter[input[i]-65]++;
            }
            else if(input[i]>=97&&input[i]<=122)
            {
                letter[input[i]-97]++;
            }
        }
        for(i=0;i<26;i++)
        {
            printf("%d\n",letter[i]);
        }

}
