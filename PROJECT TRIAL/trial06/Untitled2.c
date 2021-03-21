#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
struct a
{
    int a;
    int b;
    int c;

} ss;
reade();
writ(int A[])
{
    FILE*m;
    m=fopen("prro.txt","w");
    if(m==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.");
    }
    else
    {
        for(int i=0 ; i<=9; i++)
        {
            if(A[i]!=0)
            {
                fwrite(&A[i],sizeof(A[i]),1,m);
            }
        }
    }
    fclose(m);
    reade();
}
reade()
{
    FILE*mb;
    mb=fopen("prro.txt","r");
    fread(&ss,sizeof(ss),1,mb);
    ss.a;
    ss.b;
    ss.c;
    fclose(mb);
    printf("%d\n",ss.a);
    printf("%d\n",ss.b);
    printf("%d\n",ss.c);
}
