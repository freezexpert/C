#include<stdio.h>
int main(void){
    int n=0;
    float f=1;
    float p=1,e=1;
    scanf("%d",&n);
    if(n==0){
        printf("%f",e);
    }
    else{
        for(int i=1;i<=34;i++){
            f*=i;
            p*=n;
            e+=p/f;
        printf("%f\n",e);
        }
        printf("%f",e);
    }
}