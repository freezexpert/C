#include<stdio.h>
int main(void){
    int T,n,m,t=0;
    scanf("%d\n",&T);
    while(T--){
        scanf("%d %d %d",&n,&m,&t);
        for(int j=1;j<=n;j++){
            if(t>=j&&t<j+m){
                printf("^");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}