#include<stdio.h>
int main(){
    int r=0,c=0,t=0;
    int classroom[105][105];
    int mirror[105][105];
    scanf("%d %d %d",&r,&c,&t);
    for(int i=0;i<r;i++){
        getchar();
        for(int j=0;j<c;j++){
            scanf("%c",&classroom[i][j]);
            mirror[i][j]=classroom[i][j];
        }
    }
    
    while(t--){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(classroom[i][j]=='F'&&classroom[i-1][j]!='#')
                    mirror[i-1][j]='F';
                if(classroom[i][j]=='F'&&classroom[i][j-1]!='#')
                    mirror[i][j-1]='F';
                if(classroom[i][j]=='F'&&classroom[i+1][j]!='#')
                    mirror[i+1][j]='F';
                if(classroom[i][j]=='F'&&classroom[i][j+1]!='#')
                    mirror[i][j+1]='F';
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                classroom[i][j]=mirror[i][j];
            }
        }
    }
    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
                printf("%c",classroom[i][j]);
            printf("\n");
        }
}
