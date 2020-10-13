#include <stdio.h>
int main(){
  int n, k ,carry=0;
  int array[11];
  scanf("%d",&n);
  k=n+1;
  int i,j=0;
  for(i=0;k>0;i++){
    array[i]=k%2;
    k/=2;
  }
  for(j=0;j<i;j++){
    printf("%d",array[i-j-1]);
    }
  for (i=0;i<=10;i++) {
    if (n&(1<<i)) {
      carry+=1;
      }
    else {
      break;
      }
    }
  printf(" %d",carry);
}