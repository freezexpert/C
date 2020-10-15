#include<stdio.h>
int main(){
    int array[25][25];
    int size=0;

    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<size;i++){//印上半部(含對角線)
        for(int j=0;j<i+1;j++){
            printf("%d",array[i-j][j]);
            if(j!=i)
                printf(" ");
        }
            printf("\n");
    }
     for(int i=size-2;i>=0;i--){//因為對角線印過了,所以i=size-2
        for(int j=0;j<i+1;j++){
            printf("%d",array[size-1-j][size-1-i+j]);
            if(j!=i)
                printf(" ");
        }
        printf("\n");
    }
}