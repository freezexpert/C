#include<stdio.h>
int main(void){
    char a[4];
    int k=0;
    scanf("%s %d",a,&k);
    for(int i=0;i<3;i++){
        long long m = a[i];
        m-='A';
        m+=k;
        m%=26;
        if(m<0)
            m+=26;
        printf("%c",m+'A');
    }
    printf("\n");
}