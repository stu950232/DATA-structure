#include<stdio.h>
int main(void){
  int x,i,y,N;
  scanf("%d",&x);
  scanf("%d",&y);
  if (x<y){
    N=x;
  }
  if(y<x){
    N=y;
  }
  while(x%N!=0||y%N!=0){
    N--;
  }
  printf("%d\n",N);
  return 0;
}
