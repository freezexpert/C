#include<stdio.h>
int main(){
    int n=0,m=0;
    while(scanf("%d %d",&n,&m)!=EOF){
        char a[1005],b[1005];
        int correct=1;
        scanf("%s %s",a,b);
        int acontent[27]={};
        int bcontent[27]={};
        for(int i=0;a[i]!='\0';i++)
            acontent[a[i]-'a']++;//把每個字母出現的次數記下來 a存到[0],...z存到[25]
        for(int i=0;b[i]!='\0';i++)
            bcontent[b[i]-'a']++;//同acontent
        for(int i=0;i<26;i++){
            if(acontent[i]!=bcontent[i]){
                correct=0;
                break;
            }
        }
        if(correct)
            printf("YES\n");
        else
            printf("NO\n");
    }
}