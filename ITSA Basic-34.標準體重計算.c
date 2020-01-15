#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int he,gen;
    float st;
    while(scanf("%d%d",&he,&gen)!=EOF)
    {
        if(gen==1)
        {
            st=(he-80)*0.7;
            printf("%.1f\n",st);
        }
        else if(gen==2)
        {
            st=(he-70)*0.6;
            printf("%.1f\n",st);
        }
    }
    return 0;
}
