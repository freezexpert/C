#include<stdio.h>
#include<stdlib.h>
int main(void){
    int i,j=0;
    int r,c=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=-1;
    int M,t=0;
    for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++){
            int temp=abs(a[i][j]);
            if(temp>max){
                max=temp;
                M=i;
                t=j;
                }
        }
    }
    int min=max;
    int m=0,k=0;
    for(int i=0;i<r;i++){ 
        for(int j=0;j<c;j++){
            int temp=abs(a[i][j]);
            if(temp<min){
                min=temp;
                m=i;
                k=j;
            }
        }
    }
    printf("%d %d",abs(M-m)+abs(t-k),max-min);
}