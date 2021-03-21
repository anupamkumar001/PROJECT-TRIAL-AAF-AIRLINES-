#include<stdio.h>
int main()
{
    int A[10]={10,0,5,0,0,0,0,1,5,11};
    int b[5];
    for(int i=0; i<11; i++)
    {
        if(A[i]!=0)
        {
            printf("|%d|",A[i]);
            for(int v=0;v<=5;v++)
            {
                b[v]=A[i];
            }
        }
    }
    for(int p=0;p<=5;p++)
    {
        printf("%d",b[p]);
    }
}
