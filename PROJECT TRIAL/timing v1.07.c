#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

struct var
{
    char user[50];
    char pass[20];
} s;
void login();
void registr();
void forgot();
FILE *f;
struct vara
{
    char num[20];
    char pass[10];
    int tk;
} z;
int bkash(int t);
int nagad(int t);
int rocket(int t);
pay(int t);
FILE *payment;

viewfile(); // for view
savingfile(char TI[],char DT[],char com[],int A[],int j,int tk,int k);
B737_8(char TI[],char DT[],char com[],int n,int tk);
B777_3(char TI[],char DT[],char com[],int n,int tk);
B787_8(char TI[],char DT[],char com[],int n,int tk);
B787_9(char TI[],char DT[],char com[],int n,int tk);
BD8Q_4(char TI[],char DT[],char com[],int n,int tk);
bb(char TI[],char DT[],int n,int tk);
na(char TI[],char DT[],int n,int tk);
ra(char TI[],char DT[],int n,int tk);
ub(char TI[],char DT[],int n,int tk);
passenger();
logre(int f);
adminp();
admin();
home();
cargo();
charter();
vplane();
int main ()
{
    home();

}

savingfile(char TI[],char DT[],char com[],int A[],int j,int tk,int k) //for save
{
    char fname[10];
    char lname[10];
    char mail[30];
    char pass[13];
    int v;
    int t;
    FILE*file;
    file=fopen("aaf.txt","w");
    if(file==NULL)
    {
        printf("File dose not exist.") ;
    }

    else
    {
        printf("\nEnter passenger 1st Name>>");
        scanf("%s",&fname);

        printf("\nEnter passenger last Name>>");
        scanf("%s",&lname);

        printf("\nEnter passenger mail address>>");
        scanf("%s",&mail);

        printf("\nEnter passenger passport no>>");
        scanf("%s",&pass);

    }
    fprintf(file,"\t\t   AAF AIRLINES\nTHE TRUSTED AIRLINES BOKKING SERIVES \n");
    fprintf(file,"Name:%s %s\n\nMail Address : %s\n\nPassport no :%s\n\n",fname,lname,mail,pass);
    t=tk*j;
    fprintf(file,"PRICE = %d\n\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(file,"PAYMENT STATUS : PAID\n ");
    }
    else
    {
        fprintf(file,"PAYMENT STATUS : UNPAID\n ");
    }


    fprintf(file,"flight time : %s \n\nDistination : %s \n\No of Passenger : %d\n\nCompany : %s \n\nsit no : ",TI,DT,k,com);
    for(int i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            fprintf(file,"|%d|",A[i]);
        }
    }
    printf("\nData is Save");
    fclose(file);
    viewfile();
}
B737_8(char TI[],char DT[],char com[],int n,int tk) //plane 01
{
    printf("Welcome to %s BOEING 737-800,\nFLIGHT NO %d\n",com,n);
    printf("\n\nTIME : %s,\nDISTINATIOM:%s\n\n",TI,DT);
    int i,j,A[22];
    int  B[38]= {0};
    int k;
    printf(" How many sit you want to book = ");
    scanf("%d",&j);
    for (i=0; i<j; i++)
    {
        printf("\t          ^ \n");
        printf("\t         ___  \n");
        printf("\t        ~   ~  \n");
        printf("\t       [P] [P]  \n");
        printf("\t    _____} {_____\n");
        printf("\t           |      \n");
        printf("\t    [DOOR] |       \n");
        printf("\t  _______} {_______  \n");
        printf("\t%s\n",com);
        printf("\t| 01  02   B  03  04 | \n");
        printf("\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[1],B[2],B[3],B[4]);
        printf("\t| 05  06   3  07  08 | \n");
        printf("\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[5],B[6],B[7],B[8]);
        printf("\t| 09  10   -  11  12 | \n");
        printf("\t|[0%d][0%d]  8 [0%d][0%d]| \n",B[9],B[10],B[11],B[12]);
        printf("\t| 13  14   0  15  16 | \n");
        printf("\t|[0%d][0%d]  0 [0%d][0%d]| \n",B[13],B[14],B[15],B[16]);
        printf("\t| 17  18      19  20 | \n");
        printf("\t|[0%d][0%d]    [0%d][0%d]| \n",B[17],B[18],B[19],B[20]);
        printf("\t             |         \n");
        printf("\t  [DOOR]    [TOILET]   \n");
        printf("\t          [TOILET]  \n");
        printf("\t                   \n");
        printf("\t   --------------- \n");

        printf("Enter your favourite sit no>>");
        scanf("%d",&k);

        if(1<=k&&k<=20)
        {
            if(B[k]==0)
            {
                printf("\nyou booked %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\nsorry this sit is already booked\n");
                A[i]=0;
            }

        }
        else
        {
            j++;
            printf("\nINVALID SIT \n");
            A[i]=0;
        }






    };
    printf("your booked sit no is = ");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    savingfile(TI,DT,com,A,j,tk,k);

}
B777_3(char TI[],char DT[],char com[],int n,int tk) //plane 02
{
    printf("Welcome to %s BOEING 777-300ER,\nFLIGHT NO %d\n",com,n);
    printf("\n\nTIME : %s,\nDISTINATIOM:%s\n\n",TI,DT);
    int i,j,A[40];
    int  B[38]= {0};
    int k;
    printf("\nHow many sit you want to book = ");
    scanf("%d",&j);
    for (i=0; i<j; i++)
    {
        printf("\t              ^ \n");
        printf("\t             ___  \n");
        printf("\t            ~    ~  \n");
        printf("\t           [P]  [P]  \n");
        printf("\t        _____}  {_____\n");
        printf("\t             |        \n");
        printf("\t        [DOOR]  |         \n");
        printf("\t      _______}  {_______  \n");
        printf("\t    [H][H]          [H][H]   \n");
        printf("\t          B777_300ER     \n");
        printf("\t    %s\n",com);
        printf("\t| 01  02  03      04  05  06 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t| 07  08  09      10  11  12 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t| 13  14  15      16  17  18 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t| 19  20  21      22  23  24 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t| 25  26  27      28  29  30 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t| 31  32  33      34  35  36 | \n");
        printf("\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t                   |         \n");
        printf("\t        [DOOR]     [TOILET]   \n");
        printf("\t                 [TOILET]  \n");
        printf("\t                        \n");
        printf("\t       --------------- \n");



        printf("Enter your favourite sit no>>");
        scanf("%d",&k);

        if(1<=k&&k<=36)
        {
            if(B[k]==0)
            {
                printf("\nyou booked %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\nsorry this sit is already booked\n");
                A[i]=0;
            }

        }
        else
        {
            j++;
            printf("\nINVALID SIT \n");
            A[i]=0;
        }





    };
    printf("your booked sit no is = ");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    savingfile(TI,DT,com,A,j,tk,k);

}
B787_8(char TI[],char DT[],char com[],int n,int tk) //plane 03
{
    printf("Welcome to %s BOEING 787-800,\nFLIGHT NO %d\n",com,n);
    printf("\n\nTIME : %s,\nDISTINATIOM:%s\n\n",TI,DT);
    int i,j,A[10];
    int  B[10]= {0};
    int k;
    printf("How many sit you want to book = ");
    scanf("%d",&j);
    for (i=0; i<j; i++)
    {
        printf("\t          ^ \n");
        printf("\t         ___  \n");
        printf("\t        ~   ~  \n");
        printf("\t       [P] [P]  \n");
        printf("\t    _____} {_____\n");
        printf("\t           |      \n");
        printf("\t    [DOOR] |       \n");
        printf("\t  _______} {_______  \n");
        printf("\t %s\n",com);
        printf("\t 01[%d]        05[%d]\n\n",B[1],B[5]);
        printf("\t 02[%d]        06[%d]\n\n",B[2],B[6]);
        printf("\t 03[%d]        07[%d]\n\n",B[3],B[7]);
        printf("\t 04[%d]        08[%d]\n\n",B[4],B[8]);
        printf("\t             |         \n");
        printf("\t  [DOOR]   [TOILET]   \n");
        printf("\t          [TOILET]  \n");
        printf("\t                   \n");
        printf("\t  --------------- \n");



        printf("Enter your favourite sit no ");
        scanf("%d",&k);

        if(1<=k&&k<=8)
        {
            if(B[k]==0)
            {
                printf("\nyou booked %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\nsorry this sit is already booked\n");
                A[i]=0;
            }

        }
        else
        {
            j++;
            printf("\nINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("your booked sit no is = ");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    savingfile(TI,DT,com,A,j,tk,k);

}
B787_9(char TI[],char DT[],char com[],int n,int tk) //plane 04
{
    printf("Welcome to %s BOEING 787-900,\nFLIGHT NO %d\n",com,n);
    printf("\n\nTIME : %s,\nDISTINATIOM:%s\n\n",TI,DT);
    int i,j,A[50];
    int  B[50]= {0};
    int k;
    printf(" How many sit you want to book >> ");
    scanf("%d",&j);
    for (i=0; i<j; i++)
    {
        printf("\t               ^ \n");
        printf("\t            ______\n");
        printf("\t            ~    ~  \n");
        printf("\t           [P]  [P]  \n");
        printf("\t        _____}  {_____\n");
        printf("\t      %s        \n",com);
        printf("\t     [DOOR]B787 900[DOOR]   \n");
        printf("\t     ________}  {________ \n");
        printf("\t   [AH][AH]        [AH][AH]\n\n");
        printf("\t  01  02    03  04    05  06\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t  07  08    09  10    11  12 \n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t  13  14    15  16    17  18\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t  19  20    21  22    23  24\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t  25  26    27  28    29  30\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t  31  32    33  34    35  36\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t  37  38    39  40    41  42\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[37],B[38],B[39],B[40],B[41],B[42]);
        printf("\t  43  44    45  46    47  48\n");
        printf("\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[43],B[44],B[45],B[46],B[47],B[48]);
        printf("\t --------|          |--------\n");
        printf("\t         |          |         \n");
        printf("\t --------|          |-------- \n");
        printf("\t [DOOR]                [DOOR] \n");
        printf("\t  [TOILET]          [TOILET]  \n");
        printf("\t    [TOILET]      [TOILET] \n");
        printf("\t     --------------------\n");



        printf("Enter your favourite sit no ");
        scanf("%d",&k);

        if(1<=k&&k<=48)
        {
            if(B[k]==0)
            {
                printf("\nyou booked %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\nsorry this sit is already booked\n");
                A[i]=0;
            }

        }
        else
        {
            j++;
            printf("\nINVALID SIT \n");
            A[i]=0;
        }

    };
    printf("your booked sit no is = ");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    savingfile(TI,DT,com,A,j,tk,k);

}
BD8Q_4(char TI[],char DT[],char com[],int n,int tk) //plane 05
{
    printf("Welcome to %s BOMBARDIER DASH 8Q-400,\nFLIGHT NO %d\n",com,n);
    printf("\n\nTIME : %s,\nDISTINATIOM:%s\n\n",TI,DT);
    int i,j,A[30];
    int B[25]= {0};
    int k;
    printf("How many sit you want to book = ");
    scanf("%d",&j);
    for (i=0; i<j; i++)
    {
        printf("\t          ^ \n");
        printf("\t         ___  \n");
        printf("\t        ~   ~  \n");
        printf("\t       [P] [P]  \n");
        printf("\t    _____} {_____\n");
        printf("\t           |      \n");
        printf("\t    [DOOR] |       \n");
        printf("\t  _______} {_______  \n");
        printf("\t %s\n",com);
        printf("\t   01     02    03\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[1],B[2],B[3]);
        printf("\t   04     05    06\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[4],B[5],B[6]);
        printf("\t   07     08    09\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[7],B[8],B[9]);
        printf("\t   10     11    12\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[10],B[11],B[12]);
        printf("\t   13     14    15\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[13],B[14],B[15]);
        printf("\t   16     17    18\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[16],B[17],B[18]);
        printf("\t   19      20   21\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[19],B[20],B[21]);
        printf("\t   22     23    24\n");
        printf("\t  [0%d]   [0%d]  [0%d]\n",B[22],B[23],B[24]);
        printf("\t       COVID-19  \n");
        printf("\t  [DOOR]   [TOILET]   \n");
        printf("\t          [TOILET]  \n");
        printf("\t                   \n");
        printf("\t  --------------- \n");


        printf("Enter your favourite sit no ");
        scanf("%d",&k);

        if(1<=k&&k<=24)
        {
            if(B[k]==0)
            {
                printf("\nyou booked %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\nsorry this sit is already booked\n");
                A[i]=0;
            }

        }
        else
        {
            j++;
            printf("\nINVALID SIT \n");
            A[i]=0;
        }



    };
    printf("your booked sit no is = ");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    savingfile(TI,DT,com,A,j,tk,k);

}
bb(char TI[],char DT[],int n,int tk) //BANGLADESH BIMAN
{
    char bba[25]=" BANGLADESH BIMAN ";
    if(n==1)
    {
        B737_8(TI,DT,bba,n,tk);
    }
    else if(n==2)
    {
        B777_3(TI,DT,bba,n,tk);
    }
    else if(n==3)
    {
        B787_8(TI,DT,bba,n,tk);
    }
    else if(n==4)
    {
        B787_9(TI,DT,bba,n,tk);
    }
    else if(n==5)
    {
        BD8Q_4(TI,DT,bba,n,tk);
    }
}
na(char TI[],char DT[],int n,int tk) //NOVOAIR
{
    char nva[20]="       NOVOAIR";
    if(n==1)
    {
        B737_8(TI,DT,nva,n,tk);
    }
    else if(n==2)
    {
        B777_3(TI,DT,nva,n,tk);
    }
    else if(n==3)
    {
        B787_8(TI,DT,nva,n,tk);
    }
    else if(n==4)
    {
        B787_9(TI,DT,nva,n,tk);
    }
    else if(n==5)
    {
        BD8Q_4(TI,DT,nva,n,tk);
    }
}
ra(char TI[],char DT[],int n,int tk) //REGENT AIRWAYS
{
    char rga[20]="  REGENT AIRWAYS";
    if(n==1)
    {
        B737_8(TI,DT,rga,n,tk);
    }
    else if(n==2)
    {
        B777_3(TI,DT,rga,n,tk);
    }
    else if(n==3)
    {
        B787_8(TI,DT,rga,n,tk);
    }
    else if(n==4)
    {
        B787_9(TI,DT,rga,n,tk);
    }
    else if(n==5)
    {
        BD8Q_4(TI,DT,rga,n,tk);
    }
}
ub(char TI[],char DT[],int n,int tk) //US BANGLA AIRLINES
{
    char uba[20]="US BANGLA AIRLINES";
    if(n==1)
    {
        B737_8(TI,DT,uba,n,tk);
    }
    else if(n==2)
    {
        B777_3(TI,DT,uba,n,tk);
    }
    else if(n==3)
    {
        B787_8(TI,DT,uba,n,tk);
    }
    else if(n==4)
    {
        B787_9(TI,DT,uba,n,tk);
    }
    else if(n==5)
    {
        BD8Q_4(TI,DT,uba,n,tk);
    }
}

passenger()
{
    char t12[8]="12 am";
    char t1[8]="1 am";
    char t3[8]="3 am";
    char t4[8]="4 am";
    char t6[8]="6 am";
    char t7[8]="7 am";
    char t9[8]="9 am";
    char t10[8]="10 am";

    char DTC[20]="DHAKA TO CHOTTOGRAM";
    char DTS[20]="DHAKA TO SYLHET";
    char CTS[22]="CHOTTOGRAM TO SYLHET";
    char CTD[20]="CHOTTOGRAM TO DHAKA";
    char STD[20]="SYLHET TO DHAKA";
    char STC[22]="SYLHET TO CHOTTOGRAM";


    printf("\t1.DHAKA TO CHOTTOGRAM\n");
    printf("\t2.DHAKA TO SYLHET\n");
    printf("\t3.CHOTTOGRAM TO SYLHET\n");
    printf("\t4.CHOTTOGRAM TO DHAKA\n");
    printf("\t5.SYLHET TO DHAKA\n");
    printf("\t6.SYLHET TO CHOTTOGRAM\n");


    int ij,ji=1;
    for (ij=0; ij<ji; ij++)
    {
        printf("\n\n\tEnter your distination code>>");
        int n;
        scanf("%d",&n);


        if (n==1)
        {
            printf("\t\tDHAKA TO CHOTTOGRAM\n\n");
            printf("\t1.>>12.00 AM \n\t BANGLADESH BIMAN \n\t PRICE : 7000 TK \n");
            printf("\t2.>>03.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 6800 TK \n");
            printf("\t3.>>06.00 AM \n\t US BANGLA AIRLINES \n\t PRICE : 6700 TK \n");
            printf("\t4.>>09.00 AM \n\t NOVOAIR\n\t PRICE : 6900 TK \n\n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    bb(t12,DTC,1,7000);
                }
                else if(o==2)
                {
                    ra(t3,DTC,3,6800);
                }
                else if(o==3)
                {
                    ub(t6,DTC,4,6700);
                }
                else if(o==4)
                {
                    na(t9,DTC,5,6900);
                }
                else
                {
                    printf("INVALID CHOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }

        }
        else if(n==2)
        {
            printf("\tDHAKA TO SYLHET\n\n");
            printf("\t1.>>01.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 6000 TK \n");
            printf("\t2.>>04.00 AM \n\t US BANGLA AIRLINES\n\t PRICE : 6100 TK \n");
            printf("\t3.>>07.00 AM \n\t BANGLADESH BIMAN \n\t PRICE : 5900 TK \n");
            printf("\t4.>>10.00 AM \n\t NOVOAIR\n\t PRICE : 6200 TK \n\n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    ra(t1,DTS,2,6000);

                }
                else if(o==2)
                {
                    ub(t4,DTS,5,6100);
                }
                else if(o==3)
                {
                    bb(t7,DTS,3,5900);
                }
                else if(o==4)
                {
                    na(t10,DTS,2,6200);
                }
                else
                {
                    printf("INVALID CHOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }

        }
        else if(n==3)
        {
            printf("\tCHOTTOGRAM TO SYLHET\n\n");
            printf("\t1.>>01.00 AM \n\t NOVOAIR \n\t PRICE : 9000 TK \n");
            printf("\t2.>>04.00 AM \n\t BANGLADESH BIMAN \n\t PRICE : 9400 TK \n");
            printf("\t3.>>07.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 9200 TK \n");
            printf("\t4.>>10.00 AM \n\t US BANGLA AIRLINES\n\t PRICE : 9300 TK \n\n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    na(t1,CTS,5,9000);

                }
                else if(o==2)
                {
                    bb(t4,CTS,1,9400);
                }
                else if(o==3)
                {
                    ra(t7,CTS,3,9200);
                }
                else if(o==4)
                {
                    ub(t10,CTS,4,9300);
                }
                else
                {
                    printf("INVALID CHOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }

        }
        else if (n==4)
        {
            printf("\t\tCHOTTOGRAM TO DHAKA \n\n");
            printf("\t1.>>12.00 AM \n\t BANGLADESH BIMAN \n\t PRICE : 7000 TK \n");
            printf("\t2.>>03.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 7100 TK \n");
            printf("\t3.>>06.00 AM \n\t US BANGLA AIRLINES \n\t PRICE : 6800 TK \n");
            printf("\t4.>>09.00 AM \n\t NOVOAIR\n\n\t PRICE : 6900 TK \n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    ub(t12,CTD,5,7000);
                }
                else if(o==2)
                {
                    bb(t3,CTD,3,7100);
                }
                else if(o==3)
                {
                    na(t6,CTD,2,6800);
                }
                else if(o==4)
                {
                    ra(t9,CTD,2,6900);
                }
                else
                {
                    printf("INVALID CHOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }

        }
        else if (n==5)
        {
            printf("\t\tSYLHET TO DHAKA \n\n");
            printf("\t1.>>12.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 6100 TK \n");
            printf("\t2.>>03.00 AM \n\t US BANGLA AIRLINES  \n\t PRICE : 6700 TK \n");
            printf("\t3.>>06.00 AM \n\t NOVOAIR \n\t PRICE : 6600 TK \n");
            printf("\t4.>>09.00 AM \n\t BANGLADESH BIMAN\n\t PRICE : 5900 TK \n\n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    ra(t12,STD,3,6100);
                }
                else if(o==2)
                {
                    ub(t3,STD,4,6700);
                }
                else if(o==3)
                {
                    na(t6,STD,5,6600);
                }
                else if(o==4)
                {
                    bb(t9,STD,1,5900);
                }
                else
                {
                    printf("INVALID CHOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }

        }
        else if(n==6)
        {
            printf("\tSYLHET TO CHOTTOGRAM\n\n");
            printf("\t1.>>01.00 AM \n\t BANGLADESH BIMAN \n\t PRICE : 8900 TK \n");
            printf("\t2.>>04.00 AM \n\t REGENT AIRWAYS \n\t PRICE : 9000 TK \n");
            printf("\t3.>>07.00 AM \n\t NOVOAIR \n\t PRICE : 9200 TK \n");
            printf("\t4.>>10.00 AM \n\t US BANGLA AIRLINES\n\t PRICE : 9500 TK \n\n");
            int ii,jj=1;
            for (ii=0; ii<jj; ii++)
            {
                int o;
                printf("\n\nEnter your favourite airlines >> ");
                scanf("%d",&o);
                if (o==1)
                {
                    bb(t1,STC,3,8900);
                }
                else if(o==2)
                {
                    ra(t4,STC,2,9000);
                }
                else if(o==3)
                {
                    na(t7,STC,2,9200);
                }
                else if(o==4)
                {
                    ub(t10,STC,5,9500);
                }
                else
                {
                    printf("INVALID CHOOSSE\n \tTRY AGAIN");
                    jj+=1;
                }
            }
        }
        else
        {
            printf("INVALID CHOOSSE\n \tTRY AGAIN");
            ji+=1;
        }
    }
}
charter()
{
    printf("UNDER CONSTRASTION\n");

}
cargo()
{
    printf("UNDER CONSTRASTION\n");
}

adminp()
{
    printf("\t\t 1.ADD ROOT \t\t 2.ADD COMPANY ");
    printf("under constraction");


}
admin()
{
    int i,j,l,m;

    for(i=0; i<j; i++)
    {

        printf("admin\n\n");

        l=rand()%1000;
        printf("\t\t\t\t\t\t\t\t\tcode>>>%d",l);
        printf("\nWE SEND YOU A VARIFICATION CODE IN YOUR NUMBER\n");
        printf("\nENTER YOUR VARIFICATION CODE>>");
        scanf("%d",&m);
        if(l==m)
        {
            printf("\n WELCOME TO ADMIN PANNEL \n");
            j=1;
            adminp();
        }
        else
        {
            printf("\nINVALID CODE , TRY AGAIN\n ");
            j++;
        }

    }

}
home()
{
    system("COLOR B");
    int choice;

    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                  Airline Ticket Management                          \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\t\t\t\t\t 1.Login\n");
    printf("\t\t\t\t\t 2.Signup\n");
    printf("\t\t\t\t\t 3.Forget passward/username\n");
    printf("\t\t\t\t\t 4.Exit\n\n");
    printf("\t\t\t\t\t 5.Admin pannel\n\n");
    printf("\t\t\t\t\t Enter your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        login();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        registr();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        forgot();
        break;
    case 4:
        break;

    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        admin();
        break;
    default:
        system("CLS");
        printf("\t\t\t\t\t Wrong choice!!\nTry again...\n");
        home();
    }
}
viewfile() // for view
{
    system("CLS");
    system("COLOR E");
    FILE*file;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                         Your Ticket                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    file=fopen("aaf.txt","r");
    if(file==NULL)
    {
        printf("\n\t\t\t\t\tFile does not Exist.");
        getch();
    }

    else
    {
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }

    }
    fclose(file);
}

registr()
{
    system("COLOR A");
    system("CLS");
    char fname[50];
    char lname[20];
    char gender[10];
    char mail[50];
    int day,month,year;
    f=fopen("info.txt","w");
    printf("\t\t\t\t\t\tSignup Panel\n");
    printf("\n\n\t\t\t\t\tFirst name:");
    scanf("%s", fname);
    printf("\n\t\t\t\t\tLast name:");
    scanf("%s", lname);
    printf("\n\t\t\t\t\tGender:");
    scanf("%s", gender);
    printf("\n\t\t\t\t\tBirth Day-Month-Year:");
    scanf("%d%d%d", &day,&month,&year);
    printf("\n\t\t\t\t\tEmail:");
    scanf("%s", mail);
    printf("\n\t\t\t\t\tUsername:");
    scanf("%s", s.user);
    printf("\n\t\t\t\t\tPassward:");
    scanf("%s", s.pass);
    fwrite(&s,sizeof(s),1,f);
    fclose(f);
    printf("\n\t\t\t\t\tRegistration Successful...\n");
    getch();
    login();
}
login()
{
    system("CLS");
    system("COLOR E");
    char c;
    char username[50];
    char passward[20];
    f=fopen("info.txt","r");
    printf("\t\t\t\t\t\tLogin Panel\n");
    printf("\n\n\t\t\t\t\tusername:");
    scanf("%s", username);
    printf("\n\t\t\t\t\tpassward:");
    scanf("%s", passward);
    fread(&s,sizeof(s),1,f);

    if((strcmp(username,s.user)==0)&&(strcmp(passward,s.pass)==0))
    {
        printf("\t\t\t\t\tHello %s.\n\t\t\t\t\tWelcome to ASF Airlines..\n", username);
        getch();
        system("CLS");
        vplane();
    }
    else if((strcmp(username,s.user)!=0)&&(strcmp(passward,s.pass)==0))
    {
        printf("\t\t\t\t\tInvalid username!!!");
        getch();
        system("CLS");
        home();
    }
    else if((strcmp(username,s.user)==0)&&(strcmp(passward,s.pass)!=0))
    {
        printf("\t\t\t\t\tInvalid passward!!!");
        getch();
        system("CLS");
        home();
    }
    else
    {
        printf("\n\t\t\t\t\tInvalid username and passward!!\n\n\t\t\t\t\tPlease signup first\n");
        getch();
        system("CLS");
        home();
    }
    fclose(f);
}
forgot()
{
    system("COLOR C");
    system("CLS");
    int ch;
    char name[50];
    char pas[20];
    f=fopen("info.txt","r");
    printf("\t\t\t\t\t\tReset Panel\n");
    printf("\n\n\t\t\t\t\t 1.Search account by username\n");
    printf("\n\t\t\t\t\t 2.Search account by passward\n");
    printf("\n\t\t\t\t\t 3.Main Menu\n\n");
    printf("\t\t\t\t\t Enter your choice:");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(20);
        }
        system("CLS");
        printf("\t\t\t\t\t\tReset Panel\n");
        printf("\n\n\t\t\t\tEnter your remembered username:");
        scanf("%s", name);
        printf("\t\t\t\tWait a moment........\n");
        sleep(1);
        fread(&s,sizeof(s),1,f);
        if((strcmp(name,s.user)==0))
        {
            printf("\t\t\t\tFound your account\n");
            sleep(1);
            printf("\t\t\t\tYour passward is:%s",s.pass);
            getch();
            login();
        }
        else
        {
            printf("\t\t\t\tInvalid username..\n\t\t\t\tTry again");
            getch();
            forgot();
        }
        fclose(f);
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(20);
        }
        system("CLS");
        printf("\t\t\t\t\t\tReset Panel\n");
        printf("\n\n\t\t\t\t Enter your remembered passward:");
        scanf("%s", pas);
        printf("\t\t\t\tWait a moment.......\n");
        sleep(1);
        fread(&s,sizeof(s),1,f);
        if((strcmp(pas,s.pass)==0))
        {
            printf("\t\t\t\tFound your account\n");
            sleep(1);
            printf("\t\t\t\tYour username is:%s", s.user);
            getch();
            login();
        }
        else
        {
            printf("\t\t\t\tInvalid passward..\nTry again");
            getch();
            forgot();
        }
        fclose(f);
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        main();
        break;
    default:
        printf("\t\t\t\tWrong choice...");
        getch();
        system("CLS");
        forgot();
    }
}

vplane()
{
    system("CLS");
    system("COLOR E");
    int k,m=1,p;
    printf("\t\t\t\t\t               passenger Panel\n\n\n\n");
    printf("\t\t\t\t\t  ___________      _________      _______\n");
    printf("\t\t\t\t\t |1.PASSENGER|    |2.CHARTER|    |3.CARGO|\n");
    printf("\t\t\t\t\n\n\n");
    for(k=0;k<m;k++)
    {
        printf("\t\t\t\tEnter your chose>>");
        scanf("%d",&p);

        if(p==1)
        {
           passenger();
        }
        else if(p==2)
        {
            cargo();
        }
        else if(p==3)
        {
            charter();
        }
        else
        {
            printf("\t\t\t\t\tINVALID CODE\n\n");
            m++;
        }
    }

}
int pay(int t)
{
    int v;
    system("COLOR B");
    int chose;
    printf("                                 *************************************                                   \n");
    printf("                                           Payment Method                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\t\t\t\t\t1. Bkash\n\n");
    printf("\t\t\t\t\t2. Nagad\n\n");
    printf("\t\t\t\t\t3. Rocket\n\n");
    printf("\t\t\t\t\tHow do you want to payment:");
    scanf("%d", &chose);
    switch(chose)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(100000);
        }
        v=bkash(t);
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        v=nagad(t);
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        v=rocket(t);
        break;
    default:
        printf("\t\t\t\t\tWrong Choice!!!!\n\n");
        getch();
        break;
    }
}

int bkash(int t)
{
    int v;
    system("COLOR E");
    system("CLS");
    char p[10];
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                          Welcome To Bkash                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\n\t\t\t\t\tEnter Your Bkash Number:");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tEnter Your Bkash Pin:");
    scanf("%s", z.pass);
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                            Bkash Paybill                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\t\t\t\t\tYou are able to make payment.\n\n");
    printf("\t\t\t\t\tPLEASE PAY>>: %d TK\n\t\t\t\t\t>>",t);
    scanf("%d", &z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tEnter Bkash pin For Confirm:");
        scanf("%s", p);
        fread(&z,sizeof(z),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(p,z.pass)==0)
        {
            printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWrong Passward!!\n");
            getch();
            v=bkash(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMMOUNT!!\n");
        getch();
        v=bkash(t);
    }
    return v;
    fclose(payment);
}

int nagad(int t)
{
    int v;
    system("COLOR C");
    system("CLS");
    char ps[10];
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                           Welcome To NAGAD                                               \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tEnter Your NAGAD Number:");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tEnter Your NAGAD Pin:");
    scanf("%s", z.pass);
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                            NAGAD Paybill                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tYou are able to make payment.\n\n");
    printf("\t\t\t\t\tPLEASE PAY>>: %d TK\n\t\t\t\t\t>>",t);
    scanf("%d", &z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tEnter NAGAD pin For Confirm:");
        scanf("%s", ps);
        fread(&z,sizeof(z),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(ps,z.pass)==0)
        {
            printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWrong Passward!!\n");
            getch();
            v=nagad(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMMOUNT!!\n");
        getch();
        v=nagad(t);
    }
    return v;
    fclose(payment);
}

int rocket(int t)
{
    int v;
    system("COLOR D");
    system("CLS");
    char pas[10];
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                          Welcome To Rocket                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tEnter Your Rocket Number:");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tEnter Your Rocket Pin:");
    scanf("%s", z.pass);
    fwrite(&z,sizeof(z),1,payment);
    fclose(payment);
    system("CLS");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    system("CLS");
    printf("                                 *************************************                                   \n");
    printf("                                            Rocket Paybill                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tYou are able to make payment.\n\n");
    printf("\t\t\t\t\tPLEASE PAY>>: %d TK\n\t\t\t\t\t>>",t);
    scanf("%d", &z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tEnter Rocket pin For Confirm:");
        scanf("%s", pas);
        fread(&z,sizeof(z),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(pas,z.pass)==0)
        {
            printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWrong Passward!!\n");
            getch();
            v=rocket(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMMOUNT!!\n");
        getch();
        v=rocket(t);
    }

    return v;
    fclose(payment);
}
