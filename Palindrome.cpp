#include<stdio.h>
int main(){
    char a[100005];
    
    while(scanf("%s",a)!=EOF)
    {
        int n=0;
        int flag=1;
        for(int i=0;a[i]!='\0';i++)//存字串長度
            n++;
        for(int i=0;i<n-1;i++,n--){
            if(a[i]!=a[n-1]){
                flag=0;
                break;
            }
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
}