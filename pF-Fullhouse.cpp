#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int t=0;
    scanf("%d",&t);
    for(int i=0;i<abs(t);i++){
        int tri=0,bi=0;
        char cards[2];
        int num[15];
        memset(num, 0, sizeof(num));
        for(int j=0;j<5;j++){
            scanf("%s",cards);
            if(cards[0]=='A')
                num[1]+=1;
            else if(cards[0]=='J')
                num[11]+=1;
            else if(cards[0]=='Q')
                num[12]+=1;
            else if(cards[0]=='K')
                num[13]+=1;
            else if(cards[0]=='1')
                num[10]+=1;
            else
                num[cards[0]-'0']+=1;
        }
        for(int k=1;k<=13;k++){
            if(num[k]==3)
                tri=1;
            if(num[k]==2)
                bi=1;
        }
        if(tri&&bi)
            printf("YES\n");
        else
            printf("NO\n");
    }
}