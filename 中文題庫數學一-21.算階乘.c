#include<stdio.h>
#include<string.h>
#include<stdlib.h>
long long f(long long x)
{
    if(x<=1)return 1;
    return x*f(x-1);
}
int main()
{

    long long x,sum,i;
    while(scanf("%lld",&x)!=EOF)
    {
        /*sum=1;

        for(i=1; i<=x; i++)
        {

            sum*=i;
        }*/
        printf("%lld\n",f(x));
    }


}
