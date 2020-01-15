#include<stdio.h>
int root (int x){
  int i;
  for (i=0;i*i<=x;i++)
  {}
  i=i-1;
  return i;
}
int main (){
  int x,i,N,j=1;
  while (scanf("%d",&x)!=EOF){
    N=root (x);
    if(x==2||x==3){
     printf("YES\n");
     continue;
    }
    for(i=2;i<=N;i++){
      if (x%i==0){
        printf("NO\n");
        break;
      }
      j++;
    }
    if (j>=N){
      printf("YES\n");
      }
  }
  return 0;
}

