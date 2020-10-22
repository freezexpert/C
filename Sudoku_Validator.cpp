#include<stdio.h>
int main(){
    int valid=1,question=0,num[10];
    char sudoku[20];
    int sudoku2[15][15];
    int a=0,b=0;
    for(int i=0;i<13;i++){
        scanf("%s",sudoku);
        if(i%4){ //鉛直方向每四行有不需要存取的字元
            b=0;
            for(int j=0;j<13;j++){ 
                if(j%4){ //水平方向每四行有不需要存取的字元
                    sudoku2[a][b]=sudoku[j];
                    b++;
                    if(sudoku[j]=='x')
                        question=1;
                }
            }
            a++; 
        }
    }
    for(int i=0;i<9;i++){ //row
        for(int k=1;k<10;k++)//num是存每一行或每一列或9宮格內1~9的出現次數
                num[k]=0;
        for(int j=0;j<9;j++){
            if(sudoku2[i][j]!='x')
                num[sudoku2[i][j]-'0']++;
        }
        for(int k=1;k<10;k++){
            if(num[k]>1)
                valid=0;
            }
        }
    for(int i=0;i<9;i++){ //column
        for(int k=1;k<10;k++)
                num[k]=0;
        for(int j=0;j<9;j++){
            if(sudoku2[j][i]!='x')
                num[sudoku2[j][i]-'0']++;
        }
        for(int k=1;k<10;k++){
            if(num[k]>1)
                valid=0;
            }
        }
    for(int i=0;i<9;i+=3){ //block 共81小格,先把它分成9*9
        for(int j=0;j<9;j+=3){
            for(int k=1;k<10;k++)
                num[k]=0;
            for(int i2=0;i2<3;i2++){ //每個9再分成3*3
                for(int j2=0;j2<3;j2++){
                    if(sudoku2[i+i2][j+j2]!='x')
                        num[sudoku2[i+i2][j+j2]-'0']++;
                }
            }
            for(int k=1;k<10;k++){
                if(num[k]>1)
                    valid=0;
            }       
        }
    } 
    printf("%s",question ? "question, ":"solution, ");
    printf("%s\n",valid ? "valid":"invalid");     
}