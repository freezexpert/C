#include<stdio.h>
#include<math.h>

int main(void)
{
    int m,n,K;
    scanf("%d %d %d",&m,&n,&K);
    int vec[m][n],cal[n],ope[K][3],temp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                scanf("%d",&vec[i][j]);
            }
    }
    for(int k=0;k<K;k++)
    {
        for(int l=0;l<3;l++)
        {
            scanf("%d",&ope[k][l]);
        }
    }
    for(int i=0;i<K;i++)
    {
        if(ope[i][0]==0)
        {
            for(int j=0;j<n;j++)
            {
               temp[0][j]=vec[ope[i][1]][j];
               vec[ope[i][1]][j]=vec[ope[i][2]][j];
               vec[ope[i][2]][j]=temp[0][j];
            }
        }
        else if(ope[i][0]==1)
        {
            for(int k=0;k<n;k++)
            {
                vec[ope[i][1]][k]=vec[ope[i][1]][k]+vec[ope[i][2]][k];
            }
        }
    }
    int length[1000]={0},maxline=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            length[i]=vec[i][j]*vec[i][j]+length[i];
        }
    }
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(length[i]>length[j])
           {
               maxline=i;
               length[j]=0;
           }
           else if(length[i]<length[j])
           {
               maxline=j;
               length[i]=0;
           }
       }
   }
    for(int i=0;i<(n-1);i++)
    {
        printf("%d ",vec[maxline][i]);
    }
    printf("%d\n",vec[maxline][n-1]);
    return 0;
}


