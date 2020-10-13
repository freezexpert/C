#include<stdio.h>
int main(){
    int T,n,m,t=0;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d %d",&n,&m,&t);
        for(int j=1;j<=n;j++){
            if(t>=j&&t<j+m)
                printf("^");
            else
                printf("-");
        }
        printf("\n");
    }
}
