#include <stdio.h>
char array1[13][13]={0};
int array2[10]={0};
int main()
{
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<13;j++)
        {
            scanf("%c",&array1[i][j]);
        }
    }
    int flag1=1;
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
            if(array1[i][j]=='x'){
                flag1=0;
                break;
            }
        }
    }
    if(flag1)
        printf("solution, ");
    else
        printf("question, ");
    int flag2=1;
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
            array2[array1[i][j]-'1']++;
            for(int k=1;k<=9;k++){
                if(array2[k]>1)
                    flag2=0;
            }
        }
    }
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
            array2[array1[j][i]-'1']++;
            for(int k=1;k<=9;k++)
                if(array2[k]>1)
                    flag2=0;
        }
    }
    if(flag2)
        printf("valid\n");
    else
        printf("invalid\n");
    return 0;
}