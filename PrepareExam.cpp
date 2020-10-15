#include<stdio.h>
int main(void){
    int n;
    int x[(int)1e5];
    int y[(int)1e5];
    int c[105][105];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",x+i);
    }
    for(int i=0;i<n;i++){
        scanf("%d",y+i);
    }
    for(int i=1;i<=100;i++){
        c[0][i]=0;
        c[i][0]=1;
    }
    c[0][0]=1;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            c[i][j]=(c[i-1][j]+c[i-1][j-1])%10007;
        }
    }
    int z=1;
    for(int i=0;i<n;i++){
            z=(z*c[x[i]][y[i]])%10007;
    }
    printf("%d\n",z);
}