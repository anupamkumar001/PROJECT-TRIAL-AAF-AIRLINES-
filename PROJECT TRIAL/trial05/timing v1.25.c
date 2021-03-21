#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100
#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

FILE*fileMC;
FILE*tv;
FILE*tp;
FILE*fileM;
FILE*fileMd;
FILE*PP;
FILE*MM;
FILE*tc;
int tt;

struct ttr
{
    char fn1[10];
    char ln1[10];
    char pass1[13];
    char gen1[10];

    char fn2[10];
    char ln2[10];
    char pass2[13];
    char gen2[10];

    char fn3[10];
    char ln3[10];
    char pass3[13];
    char gen3[10];

    char mail[30];

    int HMT;
} tx[MAX];
struct passenger
{
    char fn[10];
    char ln[10];
    char pass[13];
    char gen[10];
} a[MAX];
struct loginsystem
{
    char userr[50];
    char passr[20];
    char cor[20];

} sr[MAX];
struct admloginsystem
{
    char aduser[50];
    char adpass[20];
} v;
struct default1
{
    int company;
    int patime;
    int pafood;
    int pafaci;
    int padestin;
    int paroot;
    int pplane;
    int chpna;
    int chfaci;
    int crcmc;
    int ccde;
} def;
struct add
{
    char plane[45];
    char comn[30];
    char time[10];
    char food[100];
    char faci[100];
    char destin[40];
    char cname[30];
    char cfaci[50];
    char crcm[30];
    char crde[15];
} b[MAX];
struct root
{
    int planep;
    char pname[30];
    char comnp[30];
    char timep[10];
    int pricep;
    char foodp[100];
    char facip[100];
    char destinp[40];
} c[MAX];
struct charter
{
    char chname[30];
    char chfaci[50];
    int chprice;
    char ccp[40];

} d[MAX];
struct paymentbnr
{
    char num[20];
    char pass[10];
    int tk;
} z;
struct cargooo
{
    char ccrcm[30];
    char crdec[20];
    int ccrcprice;
} e[MAX];


void login();
void registr();
void forgot();
void user();
FILE *f;

void adlogin();
void adregistr();
void adforgot();

void adsetting();
void adgeneral();
void adchng_user();
void adchng_pass();
FILE *adf;

int pay(int t);
int bkash(int t);
int nagad(int t);
int rocket(int t);
FILE *payment;

savingfile(char TI[],char DT[],char com[],char PA[],int A[],int j,int tk,int k,char FD[],char FC[]);
savingcharter(char NM[],char FC[],char CM[],int P,int H,char DI[],int FT);
savecargo(char CC[],int p,int DE,char F[],char TO[]);

viewfile();
viweing();
viewfilech();
viewfilecc();

B737_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B777_3(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B787_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
B787_9(char TI[],char DT[],char com[],char FD[],char FC[],int tk);
BD8Q_4(char TI[],char DT[],char com[],char FD[],char FC[],int tk);

home();
intro();
aboutus();

adminp();
admin();

vplane();
cplane(char TI[],char DT[],char com[],char FD[],char FC[],int n,int tk);

basic();
roots();
charterf();
cargof();

passenger();
charter();
cargo();

adding();
addcom();
addtime();
addfood();
addroot();
addfaci();

editing();
editcompany();
edittime();
editfood();
editfaci();
editcfaci();
editcargocompany();
ori();
pro();
mro();
viewfile22();
mac();
viewfile2();
tupgr();
tdel();
savetic();
ddd();
viewtic();
int main ()
{
    system("COLOR A");
    intro();
    printf("\n\n\n\n\n\n\n\n\n\n\t                     LOADING...                           \n\t\t\t\t");
    for(int i=0; i<55; i++)
    {
        if(i==10||i==18||i==35)
        {
            printf(">");
            usleep(900000);
        }
        else
        {
            printf(">");
            usleep(40000);
        }
    }
    viewfile22();
    home();
}


void registr()
{
    system("COLOR A");
    system("CLS");
    char fn[50];
    char ln[20];
    char gender[10];
    char mail[50];
    char cp[20];
    int day,month,year;
    f=fopen("info.txt","a");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PUBLIC SIGNUP                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tFIRST NAME:");
    scanf("%s",&fn);
    printf("\n\t\t\t\t\tLAST NAME:");
    scanf("%s",&ln);
    printf("\n\t\t\t\t\tGENDER:");
    scanf("%s",&gender);
    printf("\n\t\t\t\t\tBirth Day-Month-Year:");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n\t\t\t\t\tEMAIL:");
    scanf("%s",&mail);
    for(int i=0; i<1; i++)
    {
        printf("\n\t\t\t\t\tENTER USERNAME : ");
        scanf("%s",&sr[i].userr);
        printf("\n\t\t\t\t\tENTER PASSWORD : ");
        scanf("%s",&sr[i].passr);
        printf("\n\t\t\t\t\tRE-TYPE PASSWORD : ");
        scanf("%s",&cp);
        printf("\n\t\t\t\t\tENTER SECRET CODE : ");
        scanf("%s",&sr[i].cor);

        if(strcmp(sr[i].passr,cp)==0)
        {
            printf("\n\t\t\t\t\tREGISTRATION SUCCESSFUL...\n");
            fwrite(&sr[i],sizeof(sr[i]),1,f);
            fclose(f);
            getch();
            login();
        }
        else
        {
            printf("\n\t\t\t\t\tPASSWORD DOESN'T MATCH ..\n\n\t\t\t\t\t TRY AGAIN ......\n");
            getch();
            registr();
        }
    }
}
void login()
{
    system("CLS");
    system("COLOR E");
    char ch;
    char username[50];
    char passward[20];
    char code[20];
    int k=0;
    f=fopen("info.txt","r");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PUBLIC LOGIN                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME : ");
    scanf("%s",&username);
    printf("\n\t\t\t\t\tPASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            passward[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            passward[k]=ch;
            k++;
            printf("*");
        }
    }
    printf("\n\n\t\t\t\t\tCODE : ");
    scanf("%s",&code);
    for(int i=0; i<100; i++)
    {
        fread(&sr[i],sizeof(sr[i]),1,f);
        sr[i].userr;
        sr[i].passr;
        sr[i].cor;
    }
    for(int i=0; i<100; i++)
    {
        while(strcmp(sr[i].cor,code)==0)
        {
            while((strcmp(passward,sr[i].passr)==0)&&(strcmp(username,sr[i].userr)==0))
            {
                system("CLS");
                printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
                for(int i=0; i<40; i++)
                {
                    printf("_");
                    usleep(40);
                }
                tt=i;
                user();
            }
            printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
            getch();
            system("CLS");
            home();
        }
    }
    printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
    getch();
    system("CLS");
    home();
    fclose(f);
}
void forgot()
{

    system("CLS");
    system("COLOR C");
    int ch;
    char name[50];
    char pas[20];
    char code[20];
    f=fopen("info.txt","r");

    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                         RESET PANEL                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\t 1.SEARCH ACCOUNT BY USERNAME\n");
    printf("\n\t\t\t\t\t 2.SEARCH ACCOUNT BY PASSWORD\n");
    printf("\n\t\t\t\t\t 3.MAIN MENU\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");


        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                         RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tENTER YOUR USERNAME:");
        scanf("%s",&name);
        printf("\n\n\t\t\t\tENTER YOUR SECRET CODE:");
        scanf("%s",&code);
        int ii,jj,ll,mm;

        for(ii=0; ii<jj; ii++)
        {
            ll=rand()%1000;
            printf("\n\n\t\t\t\tPROVE THAT YOU NOT A ROBOT ....\n\n\t\t\t\tENTER THE VIEWING CODE\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d \n\n\t\t\t\t\t >>",ll);
            sleep(1);
            scanf("%d",&mm);
            if(ll==mm)
            {
                printf("\n\t\t\t\t WAIT A MOMENT........\n\n");
                sleep(1);

                for(int i=1; i<100; i++)
                {
                    fread(&sr[i],sizeof(sr[i]),2,f);
                    sr[i].userr;
                    sr[i].passr;
                    sr[i].cor;

                }

                for(int i=1; i<100; i++)
                {
                    while(strcmp(sr[i].cor,code)==0)
                    {
                        while(strcmp(name,sr[i].userr)==0)
                        {
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
                            sleep(1);
                            printf("\t\t\t\tYOUR PASSWORD IS: %s", sr[i].passr);
                            getch();
                            login();
                        }
                        printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                        getch();
                        system("CLS");
                        forgot();
                    }

                }
                printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                getch();
                system("CLS");
                forgot();
                fclose(f);
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                jj++;
            }

        }

        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(20);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                         RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t ENTER YOUR PASSWORD:");
        scanf("%s",&pas);
        printf("\n\n\t\t\t\tENTER YOUR SECRET CODE:");
        scanf("%s",&code);
        int iii,jjj,lll,mmm;

        for(iii=0; iii<jjj; iii++)
        {
            lll=rand()%1000;
            printf("\n\n\t\t\t\tPROVE THAT YOU NOT A ROBOT ....\n\n\t\t\t\tENTER THE VIEWING CODE\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d \n\n\t\t\t\t\t >>",lll);
            scanf("%d",&mmm);
            if(lll==mmm)
            {
                printf("\n\t\t\t\t WAIT A MOMENT.......\n\n");
                sleep(1);
                for(int i=1; i<100; i++)
                {
                    fread(&sr[i],sizeof(sr[i]),2,f);
                    sr[i].userr;
                    sr[i].passr;
                    sr[i].cor;
                }
                for(int i=1; i<100; i++)
                {
                    while(strcmp(sr[i].cor,code)==0)
                    {
                        while(strcmp(pas,sr[i].passr)==0)
                        {
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
                            sleep(1);
                            printf("\t\t\t\tYOUR USERNAME IS:%s", sr[i].userr);
                            getch();
                            login();
                        }
                        printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                        getch();
                        system("CLS");
                        forgot();
                    }

                }
                printf("\n\t\t\t\t\tINVALID INFORMATION!!\n\n\t\t\t\t\tPLEASE SIGNUP FIRST\n");
                getch();
                system("CLS");
                forgot();
                fclose(f);
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                jjj++;
            }
        }
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        home();
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!!");
        getch();
        system("CLS");
        forgot();
        break;
    }
}
void user()
{
    system("CLS");
    int c;
    printf("                                        '''''''''''''''''''''''''''''''                       \n");
    printf("                                                 AAF AIRLINES                                 \n");
    printf("                                        '''''''''''''''''''''''''''''''                       \n\n");
    printf(" \n\t\t\t\t\t 1.PURCHASE TICKET\n");
    printf("\t\t\t\t\t 2.LOGOUT\n");
    printf("\t\t\t\t\t 3.USER MANUAL\n");
    printf("\t\t\t\t\t 4.ABOUT US\n");
    printf("\t\t\t\t\t 5.EXIT\n");
    printf("\t\t\t\t\t 6.TICKET UPGRADE\n");
    printf("\t\t\t\t\t 7.TICKET DELETE\n");
    printf("\t\t\t\t\t 8.TICKET VIEW\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE: ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(tx[tt].HMT==3)
    {
        printf("you cant buy more ticket from this acc");
        user();
    }
    else
    {
        vplane();
    }

        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        home();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        printf("\n\n\n\n\n\t\t\t\t\t UNDER CONSTRASTION \n");
        getch();
        user();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        aboutus();
        getch();
        user();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\t\t\t\t\tTHANKS FOR USING OUR SERVICE....");
        getch();
        exit(0);
        break;
    case 6:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        tupgr();
        break;
    case 7:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        tdel();
        break;
    case 8:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        switch(tx[tt].HMT)
        {
        case 1:
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
            break;
        case 2:
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
            break;
        case 3:
            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);

            printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
            printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
            printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
            printf("\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mail);
            break;
        }
        getch();
        user();
        break;
    default:
        printf("\n\n\t\t\t\t\tWRONG CHOICE!!\n\n\t\t\t\t\tENTER CORRECT OPTION..\n");
        getch();
        user();
        break;
    }
}

void adregistr()
{
    system("COLOR A");
    system("CLS");
    char fn[50];
    char ln[20];
    char gender[10];
    char mail[50];
    char rp[20];
    int day,month,year,i,j,m,l;
    adf=fopen("adinfo.txt","w");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        ADMIN SIGNUP                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tFIRST NAME : ");
    scanf("%s",&fn);
    printf("\n\t\t\t\t\tLAST NAME : ");
    scanf("%s",&ln);
    printf("\n\t\t\t\t\tGENDER : ");
    scanf("%s",&gender);
    printf("\n\t\t\t\t\tBIRTH DAY-MONTH-YEAR :");
    scanf("%d%d%d",&day,&month,&year);
    printf("\n\t\t\t\t\tEMAIL : ");
    scanf("%s",&mail);
    printf("\n\t\t\t\t\tUSERNAME : ");
    scanf("%s",&v.aduser);
    printf("\n\t\t\t\t\tPASSWORD : ");
    scanf("%s",&v.adpass);
    printf("\n\t\t\t\t\tRE-TYPE PASSWORD : ");
    scanf("%s",&rp);
    fwrite(&v,sizeof(v),1,adf);
    fclose(adf);
    if(strcmp(rp,v.adpass)==0)
    {

        for(i=0; i<j; i++)
        {
            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                              HUMAN VERIFICATION                               \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            l=rand()%100;
            printf("\n\t\t\t\tPROVE THAT YOU ARE NOT A ROBOT\n\n\t\t\t\t ENTER THE VIEWING CODE ....\n\n");
            sleep(1);
            printf("\t\t\t\t\t CODE IS : %d",l);
            printf("\n\n\t\t\t\tENTER THE VIEWING  CODE : ");
            scanf("%d",&m);
            if(l==m)
            {
                printf("\n\n\t\t\t\t\tREGISTRATION SUCCESSFUL...\n");
                j=1;
                getch();
                adlogin();
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                j++;
            }
        }
    }
    else
    {
        printf("\n\t\t\t\tPASSWORD DOES'T MATCH .\n\n\t\t\t\t\tTRY AGAIN...");
        getch();
        adregistr();
    }
}
void adlogin()
{
    system("CLS");
    system("COLOR E");
    char ch;
    int i,j,l,m,k=0;
    char username[50];
    char passward[20];
    adf=fopen("adinfo.txt","r");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN LOGIN                                \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME : ");
    scanf("%s", username);
    printf("\n\t\t\t\t\tPASSWORD : ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            passward[k]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(k>0)
            {
                k--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            passward[k]=ch;
            k++;
            printf("*");
        }
    }
    fread(&v,sizeof(v),1,adf);
    if((strcmp(username,v.aduser)==0)&&(strcmp(passward,v.adpass)==0))
    {
        for(i=0; i<j; i++)
        {
            system("CLS");
            printf("                                        '''''''''''''''''''''''''''''                       \n");
            printf("                                             HUMAN VERIFICATION                               \n");
            printf("                                        '''''''''''''''''''''''''''''                       \n\n");
            l=rand()%1000;
            printf("\n\t\t\t\tPROVE THAT YOU ARE NOT A ROBOT\n\n\t\t\t\t ENTER THE VIEWING CODE....\n\n");
            sleep(1);
            printf("\t\t\t\t\t Code is: %d",l);
            printf("\n\n\t\t\t\tENTER CODE: ");
            scanf("%d",&m);
            if(l==m)
            {
                system("CLS");
                printf("\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                        '''''''''''''''''''''''''''''''                       \n");
                printf("                                            WELCOME TO ADMIN PANEL                                \n");
                printf("                                        '''''''''''''''''''''''''''''''                       \n\n");
                j=1;
                getch();
                adminp();
            }
            else
            {
                printf("\n\t\t\t\tINVALID CODE , TRY AGAIN\n ");
                j++;
            }
        }
        getch();
        system("CLS");
        adminp();
    }
    else if((strcmp(username,v.aduser)!=0)&&(strcmp(passward,v.adpass)==0))
    {
        printf("\t\t\t\t\tINVALID USERNAME!!!");
        getch();
        system("CLS");
        admin();
    }
    else if((strcmp(username,v.aduser)==0)&&(strcmp(passward,v.adpass)!=0))
    {
        printf("\t\t\t\t\tINVALID PASSWORD!!!");
        getch();
        system("CLS");
        admin();
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID USERNAME AND PASSWORD!!\n\n\t\t\t\t\tPLEASE SIGNUP\n");
        getch();
        system("CLS");
        admin();
    }
    fclose(adf);
}
void adforgot()
{
    system("COLOR C");
    system("CLS");
    int ch;
    char name[50];
    char pas[20];
    adf=fopen("adinfo.txt","r");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                      ADMIN RESET PANEL                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\t 1.SEARCH ACCOUNT BY USERNAME\n");
    printf("\n\t\t\t\t\t 2.SEARCH ACCOUNT BY PASSWORD\n");
    printf("\n\t\t\t\t\t 3.PREVIOUS PAGE \n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE : ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tENTER YOUR USERNAME :");
        scanf("%s",&name);
        printf("\n\t\t\t\t WAIT A MOMENT........\n\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(name,v.aduser)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT \n\n");
            sleep(1);
            printf("\t\t\t\tYOUR PASSWORD IS:%s",v.adpass);
            getch();
            adlogin();
        }
        else
        {
            printf("\t\t\t\tINVALID USERNAME..\n\t\t\t\tTRY AGAIN");
            getch();
            adforgot();
        }
        fclose(adf);
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t ENTER YOUR PASSWORD :");
        scanf("%s",&pas);
        printf("\n\t\t\t\t WAIT A MOMENT.......\n\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(pas,v.adpass)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT\n\n");
            sleep(1);
            printf("\t\t\t\tYOUR USERNAME IS :%s",v.aduser);
            getch();
            adlogin();
        }
        else
        {
            printf("\t\t\t\tINVALID PASSWORD ..\n\t\t\t\tTRY AGAIN");
            getch();
            adforgot();
        }
        fclose(adf);
        break;
    case 3:
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
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!!");
        getch();
        system("CLS");
        adforgot();
        break;
    }
}

void adsetting()
{
    system("CLS");
    int ch;
    printf("                               '''''''''''''''''''''''''''                       \n");
    printf("                                         SETTING                                 \n");
    printf("                               '''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t 1. General Setting\n");
    printf("\t\t\t\t 2. Previous Page\n");
    printf("\t\t\t\t 3. Exit\n\n");
    printf("\t\t\t\t Enter Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adgeneral();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int j=0; j<40; j++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        admin();
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("\n\t\t\t\t Wrong Choice!! Try Again..");
        getch();
        adsetting();
        break;
    }
}
void adgeneral()
{
    system("CLS");
    int c;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       GENERAL SETTING                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t 1. Change Username\n");
    printf("\t\t\t\t 2. Change Password\n");
    printf("\t\t\t\t 3. Forgot Password/Username\n");
    printf("\t\t\t\t 4. Previous Page\n");
    printf("\t\t\t\t 5. Main Menu\n");
    printf("\t\t\t\t 6. Exit\n\n");
    printf("\t\t\t\t Enter Choice: ");
    scanf("%d", &c);
    switch(c)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int m=0; m<40; m++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adchng_user();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int l=0; l<40; l++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adchng_pass();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int k=0; k<40; k++)
        {
            printf("_");
            usleep(35);
        }
        system("CLS");
        adforgot();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        adsetting();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t");
        for(int j=0; j<40; j++)
        {
            printf("_");
            usleep(40);
        }
        system("CLS");
        admin();
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("\n\t\t\t\t Wrong Choice!! Try Again...");
        getch();
        system("CLS");
        adgeneral();
        break;
    }
}
void adchng_user()
{
    system("CLS");
    char u[20], p[10], ch;
    int i=0;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       VERIFICATION                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tOld Username:");
    scanf("%s", u);
    printf("\n\t\t\t\t\tOld Passward:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            p[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            p[i]=ch;
            i++;
            printf("*");
        }
    }
    adf=fopen("adinfo.txt","r");
    fread(&v, sizeof(v), 1, adf);
    if(strcmp(u,v.aduser)==0 && strcmp(p,v.adpass)==0)
    {
        system("CLS");
        fclose(adf);
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE USERNAME                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tSet New Username:");
        scanf("%s", v.aduser);
        fwrite(&v, sizeof(v),1,adf);
        printf("\n\n\n\t\t\t\t____Username Changed Successfully____");
        fclose(adf);
        getch();
        system("CLS");
        adgeneral();
    }
    else
    {
        printf("\n\n\t\t\t\t\tSomething went Wrong...\n\n\t\t\t\t\tTry Again");
        getch();
        system("CLS");
        adchng_user();
    }
}
void adchng_pass()
{
    system("CLS");
    char u[20], p[10], ch;
    int i=0;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       VERIFICATION                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tOld Username:");
    scanf("%s", u);
    printf("\n\t\t\t\t\tOld Passward:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            p[i]='\0';
            break;
        }
        else if(ch==BKSP)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==TAB||ch==SPACE)
        {
            continue;
        }
        else
        {
            p[i]=ch;
            i++;
            printf("*");
        }
    }
    adf=fopen("adinfo.txt","r");
    fread(&v, sizeof(v), 1, adf);
    if(strcmp(u,v.aduser)==0 && strcmp(p,v.adpass)==0)
    {
        system("CLS");
        fclose(adf);
        adf=fopen("adinfo.txt","w");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                       CHANGE PASSWORD                               \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\n\n");
        printf("\t\t\t\t\tNew Password:");
        scanf("%s", v.adpass);
        fwrite(&v, sizeof(v),1,adf);
        printf("\n\n\n\t\t\t\t____Password Changed Successfully____");
        fclose(adf);
        getch();
        system("CLS");
        adgeneral();
    }
    else
    {
        printf("\n\n\t\t\t\t\tSomething went Wrong...\n\n\t\t\t\t\tTry Again");
        getch();
        system("CLS");
        adchng_pass();
    }
}

int pay(int t)
{
    system("CLS");
    int v;
    system("COLOR B");
    int chose;
    printf("                                 *************************************                                   \n");
    printf("                                                 PAYMENT                                                 \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\t\t\t\t\t1. BKASH\n\n");
    printf("\t\t\t\t\t2. NAGAD\n\n");
    printf("\t\t\t\t\t3. ROCKET\n\n");
    printf("\t\t\t\t\tENTER YOUR CHOICE : ");
    scanf("%d", &chose);
    switch(chose)
    {
    case 1:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
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
        printf("\t\t\t\t\tWRONG CHOICE!!!!\n\n");
        pay(t);
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
    printf("                                          WELCOME TO BKASH                                                \n");
    printf("                                 *************************************                                   \n\n\n");
    printf("\n\n\t\t\t\t\tENTER YOUR BKASH NUMBER : ");
    scanf("%s",&z.num);
    printf("\n\t\t\t\t\tENTER YOUR BKASH PIN      : ");
    scanf("%s",&z.pass);
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
    printf("                                            BKASH PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER BKASH PIN FOR CONFORM :");
        scanf("%s",&p);
        fread(&z,sizeof(z),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(p,z.pass)==0)
        {
            printf("\n\t\t\t\t\tYOUR  %d TK SENT SUCCESSFUL..\n", z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
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
    printf("                                           WELCOME TO NAGAD                                               \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tENTER YOUR NAGAD NUMBER : ");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tENTER YOUR NAGAD PIN    : ");
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
    printf("                                            NAGAD PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER NAGAD PIN FOR CONFORM :");
        scanf("%s",&ps);
        fread(&z,sizeof(z),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(ps,z.pass)==0)
        {
            printf("\n\t\t\t\t   YOUR  %d TK SENT SUCCESSFUL..\n", z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
            getch();
            v=nagad(t);
        }
    }
    else
    {
        printf("\n\t\t\t\t\tINVALID AMOUNT!!\n");
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
    printf("                                          WELCOME TO ROKET                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tENTER YOUR ROKET NUMBER : ");
    scanf("%s",&z.num);
    printf("\n\t\t\t\t\tENTER YOUR ROKET PIN    : ");
    scanf("%s",&z.pass);
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
    printf("                                            ROCKET PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL    : %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER ROKET PIN FOR CONFORM : ");
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
            printf("\n\n\t\t\t\t\t    YOUR  %d TK SENT SUCCESSFUL..\n",z.tk);
            getch();
            v=1;
        }
        else
        {
            printf("\n\t\t\t\t\tWRONG PASSWORD!!\n");
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

savingfile(char TI[],char DT[],char com[],char PA[],int A[],int j,int tk,int k,char FD[],char FC[])
{
    system("CLS");
    char ep[10]="EMPTY";
    char mail[30];
    int v;
    int t;
    int ia;
    int b[5]= {0};
    ia=tx[tt].HMT;
    FILE*file;
    file=fopen("aaf.txt","a");
    if(file==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }
    else
    {
        switch(ia)
        {
        case 1:
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            strcpy(tx[tt].fn2,ep);
            strcpy(tx[tt].ln2,ep);
            strcpy(tx[tt].pass2,ep);
            strcpy(tx[tt].gen2,ep);

            strcpy(tx[tt].fn3,ep);
            strcpy(tx[tt].ln3,ep);
            strcpy(tx[tt].pass3,ep);
            strcpy(tx[tt].gen3,ep);

            break;
        case 2:
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn2);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln2);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass2);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen2);

            strcpy(tx[tt].fn3,ep);
            strcpy(tx[tt].ln3,ep);
            strcpy(tx[tt].pass3,ep);
            strcpy(tx[tt].gen3,ep);

            break;
        case 3:
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn1);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln1);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass1);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen1);

            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn2);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln2);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass2);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen2);

            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&tx[tt].fn3);
            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&tx[tt].ln3);
            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&tx[tt].pass3);
            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&tx[tt].gen3);
            break;
        }
        printf("\n\t\t\t\tENTER MAIL ADDRESS :");
        scanf("%s",&tx[tt].mail);
    }

    fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
    fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
    fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen1);

    fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
    fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
    fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen2);

    fprintf(file,"\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
    fprintf(file,"\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
    fprintf(file,"\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
    t=tk*j;
    fprintf(file,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(file,"\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        fprintf(file,"\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    fprintf(file,"\t\t\t\tFLIGHT TIME    : %s \n\t\t\t\tDESTINATION    : %s \n\t\t\t\tCOMPANY        : %s \n",TI,DT,com);
    fprintf(file,"\t\t\t\tFLIGHT NAME    : %s\n",PA);
    fprintf(file,"\t\t\t\tNO OF PASSENGER: %d\n",ia);
    fprintf(file,"\t\t\t\tSIT NO         : ");
    for(int i=0; i<ia; i++)
    {
        if(A[i]!=0)
        {
            fprintf(file,"|%d|",A[i]);
        }
    }
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    fclose(file);
    getch();
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    switch(ia)
    {
    case 1:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);
        break;
    case 2:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);
        break;
    case 3:
        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn1,tx[tt].ln1);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass1);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen1);


        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn2,tx[tt].ln2);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass2);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen2);

        printf("\t\t\t\tPASSENGER NAME    : %s %s\n",tx[tt].fn3,tx[tt].ln3);
        printf("\t\t\t\t(PASSPORT/NID) NO : %s \n",tx[tt].pass3);
        printf("\t\t\t\tGENDER            : %s \n",tx[tt].gen3);
        printf("\n\t\t\t\tMAIL ADDRESS   : %s\n",tx[tt].mail);
        break;
    }
    printf("\t\t\t\tPRICE          : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    printf("\t\t\t\tFLIGHT TIME    : %s \n\t\t\t\tDESTINATION    : %s \n\t\t\t\tCOMPANY        : %s \n",TI,DT,com);
    printf("\t\t\t\tFLIGHT NAME    : %s\n",PA);
    printf("\t\t\t\tNO OF PASSENGER: %d\n",ia);
    printf("\t\t\t\tSIT NO         : ");
    for(int i=0; i<ia; i++)
    {
        if(A[i]!=0)
        {
            printf("|%d|",A[i]);
        }
    }
    savetic();
    getch();
    user();
}
savingcharter(char NM[],char FC[],char CM[],int P,int H,char DI[],int FT)
{
    system("CLS");
    char fn[30];
    char ln[30];
    char pass[30];
    char gen[30];
    char mail[30];
    int v;
    int t;
    int ia;
    FILE*fileC;
    fileC=fopen("aafC.txt","a");
    if(fileC==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }
    else
    {
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT PASSENGER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER FIRST NAME:");
        scanf("%s",&fn);
        printf("\n\t\t\t\tENTER LAST NAME:");
        scanf("%s",&ln);
        printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
        scanf("%s",&pass);
        printf("\n\t\t\t\tENTER GENDER:");
        scanf("%s",&gen);
        printf("\n\t\t\t\tENTER MAIL ADDRESS:");
        scanf("%s",&mail);
    }
    fprintf(fileC,"\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    fprintf(fileC,"\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",fn,ln,pass,gen);
    fprintf(fileC,"\n\t\t\t\tMAIL ADDRESS   : %s\n",mail);
    t=H*P;
    fprintf(fileC,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(fileC,"\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        fprintf(fileC,"\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    fprintf(fileC,"\t\t\t\tHOUR           : %d\n",H);
    fprintf(fileC,"\t\t\t\tSTARTING TIME  : %d \n\t\t\t\tFROM           : %s \n\t\t\t\tCOMPANY        : %s \n",FT,DI,CM);
    fprintf(fileC,"\t\t\t\tCHARTER NAME   : %s\n",NM);
    fprintf(fileC,"\t\t\t\tFACILITIES     : %s\n",FC);
    fclose(fileC);
    getch();
    system("CLS");
    printf("\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",fn,ln,pass,gen);
    printf("\n\t\t\t\tMAIL ADDRESS   : %s\n",mail);
    printf("\t\t\t\tPRICE          : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS : UNPAID\n ");
    }
    printf("\t\t\t\tHOUR           : %d\n",H);
    printf("\t\t\t\tSTARTING TIME  : %d \n\t\t\t\tFROM           : %s \n\t\t\t\tCOMPANY        : %s \n",FT,DI,CM);
    printf("\t\t\t\tCHARTER NAME   : %s\n",NM);
    printf("\t\t\t\tFACILITIES     : %s\n",FC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    getch();
    user();
}
savecargo(char CC[],int p,int DE,char F[],char TO[])
{
    system("CLS");
    char fn[30];
    char ln[30];
    char gen[30];
    char mail[30];
    char rfn[30];
    char rln[30];
    char rgen[30];
    char rmail[30];
    char ty[30];
    int v,w,c;
    int t;
    int ia;
    FILE*fileCR;
    fileCR=fopen("aafCR.txt","a");
    if(fileCR==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }
    else
    {
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT SENDER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER  SENDER FIRST NAME:");
        scanf("%s",&fn);
        printf("\n\t\t\t\tENTER SENDER LAST NAME:");
        scanf("%s",&ln);
        printf("\n\t\t\t\tENTER SENDER GENDER:");
        scanf("%s",&gen);
        printf("\n\t\t\t\tENTER SENDER MAIL ADDRESS:");
        scanf("%s",&mail);
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT RECEIVER DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\n\t\t\t\tENTER RECEIVER FIRST NAME:");
        scanf("%s",&rfn);
        printf("\n\t\t\t\tENTER RECEIVER LAST NAME:");
        scanf("%s",&rln);
        printf("\n\t\t\t\tENTER RECEIVER GENDER:");
        scanf("%s",&rgen);
        printf("\n\t\t\t\tENTER RECEIVER MAIL ADDRESS:");
        scanf("%s",&rmail);
        system("CLS");
        printf("                                 *************************************                                   \n");
        printf("                                         INPUT PRODUCT DATA                                                \n");
        printf("                                 *************************************                                   \n\n\n");
        printf("\t\t\t\t\tPRODUCT TYPE : ");
        scanf("%s",&ty);
        printf("\n\t\t\t\t\tINPUT WET  : ");
        scanf("%d",&w);
    }
    fprintf(fileCR,"\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    fprintf(fileCR,"\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",fn,ln,gen);
    fprintf(fileCR,"\t\t\t\tMAIL ADDRESS   : %s\n\n",mail);
    fprintf(fileCR,"\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",rfn,rln,rgen);
    fprintf(fileCR,"\t\t\t\tMAIL ADDRESS   : %s\n\n",rmail);
    t=DE*w*p;
    fprintf(fileCR,"\t\t\t\tPRICE          : %d TK\n",t);
    v=pay(t);
    if(v==1)
    {
        fprintf(fileCR,"\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        fprintf(fileCR,"\t\t\t\tPAYMENT STATUS : UNPAID\n");
    }
    fprintf(fileCR,"\t\t\t\tWET            : %d\n",w);
    fprintf(fileCR,"\t\t\t\tDESTENCE       : %d\n",DE);
    fprintf(fileCR,"\t\t\t\tTYPE           : %s\n",ty);
    fprintf(fileCR,"\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",F,TO,CC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    fclose(fileCR);
    getch();
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    printf("\n\t\t\t\t\tSENDER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",fn,ln,gen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",mail);
    printf("\n\t\t\t\t\tRECEIVER\n\n\t\t\t\tNAME           : %s %s\n\t\t\t\tGENDER         : %s\n",rfn,rln,rgen);
    printf("\t\t\t\tMAIL ADDRESS   : %s\n\n",rmail);
    printf("\t\t\t\tPRICE          : %d TK\n",t);
    if(v==1)
    {
        printf("\t\t\t\tPAYMENT STATUS : PAID\n\n");
    }
    else
    {
        printf("\t\t\t\tPAYMENT STATUS : UNPAID\n");
    }
    printf("\t\t\t\tWET            : %d\n",w);
    printf("\t\t\t\tDESTENCE       : %d\n",DE);
    printf("\t\t\t\tTYPE           : %s\n",ty);
    printf("\t\t\t\tFROM           : %s \n\t\t\t\tTO             : %s \n\t\t\t\tCOMPANY        : %s \n",F,TO,CC);
    printf("\n\t\t\t\t\t\t  DATA SAVED ..");
    getch();
    user();
}

viewfile()
{
    system("CLS");
    system("COLOR E");
    FILE*file;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PASSENGER TICKET                               \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    file=fopen("aaf.txt","r");
    if(file==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY\n");
        getch();
        adminp();
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
    getch();
    adminp();
}
viewing()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                VIEWING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t 1.VIEW TIME\n");
    printf("\t\t\t\t 2.VIEW COMPANY\n");
    printf("\t\t\t\t 3.VIEW FOOD\n");
    printf("\t\t\t\t 4.VIEW FACILITIES\n");
    printf("\t\t\t\t 5.VIEW ROOT\n");
    printf("\t\t\t\t 6.VIEW PASSENGER RECORDS \n\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE:");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING TIMES                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.patime; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].time);
        }
        getch();
        adminp();
    }
    else if(n==2)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               VIEWING COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.company; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].comn);
        }
        getch();
        adminp();
    }
    else if(n==3)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING FOOD                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.pafood; i++)
        {
            printf("\n\t\t\t\t%d. >> %s ",i,b[i].food);
        }
        getch();
        adminp();
    }
    else if(n==4)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                             VIEWING FACILITIES                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int i=1; i<=def.pafaci; i++)
        {
            printf("\n\t\t\t\t%d. >> %s",i,b[i].faci);
        }
        getch();
        adminp();
    }
    else if(n==5)
    {
        roots();
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                VIEWING ROOTS                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        roots();
        for(int i=1; i<=def.paroot; i++)
        {
            printf("\n\n\t\t\t\tCODE       >> %d",i);
            printf("\n\t\t\t\tDESTINATION >> %s",c[i].destinp);
            printf("\n\t\t\t\tTIME        >> %s",c[i].timep);
            printf("\n\t\t\t\tCOMPANY     >> %s",c[i].comnp);
            printf("\n\t\t\t\tFLIGHT NAME >> %s",c[i].pname);
            printf("\n\t\t\t\tPRICE       >> %d",c[i].pricep);
            printf("\n\t\t\t\tFOOD        >> %s",c[i].foodp);
            printf("\n\t\t\t\tFACILITIES  >> %s\n",c[i].facip);
        }
        getch();
        adminp();
    }
    else if(n==6)
    {
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                           VIEWING TICKET RECORDS                             \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t\t 1.VIEW PASSENGER TICKET\n");
        printf("\t\t\t\t\t 2.VIEW CHARTER TICKET\n");
        printf("\t\t\t\t\t 3.VIEW CARGO FORM\n");
        printf("\n\t\t\t\t\t ENTER YOUR CHOICE:");
        int nn;
        scanf("%d",&nn);
        if(nn==1)
        {
            viewfile();
        }
        else if(nn==2)
        {
            viewfilech();
        }
        else if(nn==3)
        {
            viewfilecc();
        }
        else
        {
            printf("\n\t\t\t\tINVALID KEY \n\n\t\t\t\tTRY AGAIN\n");
            getch();
            viewing();
        }
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        viewing();
    }
}
viewfilech()
{
    system("CLS");
    system("COLOR E");
    FILE*fileC;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                       CHARTER TICKET                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    fileC=fopen("aafC.txt","r");
    if(fileC==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY\n");
        getch();
        adminp();
    }
    else
    {
        while(!feof(fileC))
        {
            ch=fgetc(fileC);
            printf("%c",ch);
        }
    }
    fclose(fileC);
    getch();
    adminp();
}
viewfilecc()
{
    system("CLS");
    system("COLOR E");
    FILE*fileCR;
    char ch;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                         CARGO FORM                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    fileCR=fopen("aafCR.txt","r");
    if(fileCR==NULL)
    {
        printf("\n\n\t\t\t\t\tEMPTY \n");
        getch();
        adminp();
    }
    else
    {
        while(!feof(fileCR))
        {
            ch=fgetc(fileCR);
            printf("%c",ch);
        }
    }
    fclose(fileCR);
    getch();
    adminp();
}

B737_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 01 20
{

    int i,A[22],k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("%d\n",tx[tt].HMT);
        printf("%d\n",tt);
        printf("\t\t\t\t          ^ \n");
        printf("\t\t\t\t         ___  \n");
        printf("\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t           |      \n");
        printf("\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t%s\n",com);
        printf("\t\t\t\t| 01  02   B  03  04 | \n");
        printf("\t\t\t\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[1],B[2],B[3],B[4]);
        printf("\t\t\t\t| 05  06   3  07  08 | \n");
        printf("\t\t\t\t|[0%d][0%d]  7 [0%d][0%d]| \n",B[5],B[6],B[7],B[8]);
        printf("\t\t\t\t| 09  10   -  11  12 | \n");
        printf("\t\t\t\t|[0%d][0%d]  8 [0%d][0%d]| \n",B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t| 13  14   0  15  16 | \n");
        printf("\t\t\t\t|[0%d][0%d]  0 [0%d][0%d]| \n",B[13],B[14],B[15],B[16]);
        printf("\t\t\t\t| 17  18      19  20 | \n");
        printf("\t\t\t\t|[0%d][0%d]    [0%d][0%d]| \n",B[17],B[18],B[19],B[20]);
        printf("\t\t\t\t             |         \n");
        printf("\t\t\t\t  [DOOR]    [TOILET]   \n");
        printf("\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t                   \n");
        printf("\t\t\t\t   --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=20)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[1].plane,A,j,tk,k,FD,FC);
}

B777_3(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 02 36
{
    int i,A[22],k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t              ^ \n");
        printf("\t\t\t\t\t             ___  \n");
        printf("\t\t\t\t\t            ~    ~  \n");
        printf("\t\t\t\t\t          [P]  [P]  \n");
        printf("\t\t\t\t\t        _____}  {_____\n");
        printf("\t\t\t\t\t             |        \n");
        printf("\t\t\t\t\t        [DOOR]  |         \n");
        printf("\t\t\t\t\t      _______}  {_______  \n");
        printf("\t\t\t\t\t    [H][H]          [H][H]   \n");
        printf("\t\t\t\t\t          B777_300ER     \n");
        printf("\t\t\t\t\t    %s\n",com);
        printf("\t\t\t\t\t| 01  02  03      04  05  06 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t\t\t\t\t| 07  08  09      10  11  12 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t\t| 13  14  15      16  17  18 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t\t\t\t\t| 19  20  21      22  23  24 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t\t\t\t\t| 25  26  27      28  29  30 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t\t\t\t\t| 31  32  33      34  35  36 | \n");
        printf("\t\t\t\t\t|[0%d][0%d][0%d]    [0%d][0%d][0%d]| \n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t\t\t\t\t                   |         \n");
        printf("\t\t\t\t\t        [DOOR]     [TOILET]   \n");
        printf("\t\t\t\t\t                 [TOILET]  \n");
        printf("\t\t\t\t\t                        \n");
        printf("\t\t\t\t\t       --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=36)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYour booked sit no is:");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[2].plane,A,j,tk,k,FD,FC);
}

B787_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 03 8
{
    int i,A[22],k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t          ^ \n");
        printf("\t\t\t\t\t         ___  \n");
        printf("\t\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t\t           |      \n");
        printf("\t\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t\t %s\n",com);
        printf("\t\t\t\t\t 01[%d]        05[%d]\n\n",B[1],B[5]);
        printf("\t\t\t\t\t 02[%d]        06[%d]\n\n",B[2],B[6]);
        printf("\t\t\t\t\t 03[%d]        07[%d]\n\n",B[3],B[7]);
        printf("\t\t\t\t\t 04[%d]        08[%d]\n\n",B[4],B[8]);
        printf("\t\t\t\t\t             |         \n");
        printf("\t\t\t\t\t  [DOOR]   [TOILET]   \n");
        printf("\t\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t\t                   \n");
        printf("\t\t\t\t\t  --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=8)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED  %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED \n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[3].plane,A,j,tk,k,FD,FC);
}

B787_9(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 04 48
{
    int i,A[22],k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t               ^ \n");
        printf("\t\t\t\t\t            ______\n");
        printf("\t\t\t\t\t            ~    ~  \n");
        printf("\t\t\t\t\t           [P]  [P]  \n");
        printf("\t\t\t\t\t        _____}  {_____\n");
        printf("\t\t\t\t\t      %s        \n",com);
        printf("\t\t\t\t\t     [DOOR]B787 900[DOOR]   \n");
        printf("\t\t\t\t\t     ________}  {________ \n");
        printf("\t\t\t\t\t   [AH][AH]        [AH][AH]\n\n");
        printf("\t\t\t\t\t  01  02    03  04    05  06\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[1],B[2],B[3],B[4],B[5],B[6]);
        printf("\t\t\t\t\t  07  08    09  10    11  12 \n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[7],B[8],B[9],B[10],B[11],B[12]);
        printf("\t\t\t\t\t  13  14    15  16    17  18\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[13],B[14],B[15],B[16],B[17],B[18]);
        printf("\t\t\t\t\t  19  20    21  22    23  24\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[19],B[20],B[21],B[21],B[23],B[24]);
        printf("\t\t\t\t\t  25  26    27  28    29  30\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[25],B[26],B[27],B[28],B[29],B[30]);
        printf("\t\t\t\t\t  31  32    33  34    35  36\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[31],B[32],B[33],B[34],B[35],B[36]);
        printf("\t\t\t\t\t  37  38    39  40    41  42\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[37],B[38],B[39],B[40],B[41],B[42]);
        printf("\t\t\t\t\t  43  44    45  46    47  48\n");
        printf("\t\t\t\t\t [0%d][0%d]  [0%d][0%d]  [0%d][0%d]\n\n",B[43],B[44],B[45],B[46],B[47],B[48]);
        printf("\t\t\t\t\t --------|          |--------\n");
        printf("\t\t\t\t\t         |          |         \n");
        printf("\t\t\t\t\t --------|          |-------- \n");
        printf("\t\t\t\t\t [DOOR]                [DOOR] \n");
        printf("\t\t\t\t\t  [TOILET]          [TOILET]  \n");
        printf("\t\t\t\t\t    [TOILET]      [TOILET] \n");
        printf("\t\t\t\t\t     --------------------\n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO :");
        scanf("%d",&k);
        if(1<=k&&k<=48)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED\n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[4].plane,A,j,tk,k,FD,FC);

}
BD8Q_4(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 05 24
{
    int i,A[22],k,j;
    j=tx[tt].HMT;
    int  B[38]= {0};
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
        printf("\t\t\t\t\t          ^ \n");
        printf("\t\t\t\t\t         ___  \n");
        printf("\t\t\t\t\t        ~   ~  \n");
        printf("\t\t\t\t\t       [P] [P]  \n");
        printf("\t\t\t\t\t    _____} {_____\n");
        printf("\t\t\t\t\t           |      \n");
        printf("\t\t\t\t\t    [DOOR] |       \n");
        printf("\t\t\t\t\t  _______} {_______  \n");
        printf("\t\t\t\t\t %s\n",com);
        printf("\t\t\t\t\t   01     02    03\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[1],B[2],B[3]);
        printf("\t\t\t\t\t   04     05    06\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[4],B[5],B[6]);
        printf("\t\t\t\t\t   07     08    09\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[7],B[8],B[9]);
        printf("\t\t\t\t\t   10     11    12\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[10],B[11],B[12]);
        printf("\t\t\t\t\t   13     14    15\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[13],B[14],B[15]);
        printf("\t\t\t\t\t   16     17    18\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[16],B[17],B[18]);
        printf("\t\t\t\t\t   19      20   21\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[19],B[20],B[21]);
        printf("\t\t\t\t\t   22     23    24\n");
        printf("\t\t\t\t\t  [0%d]   [0%d]  [0%d]\n",B[22],B[23],B[24]);
        printf("\t\t\t\t\t       COVID-19  \n");
        printf("\t\t\t\t\t  [DOOR]   [TOILET]   \n");
        printf("\t\t\t\t\t          [TOILET]  \n");
        printf("\t\t\t\t\t                   \n");
        printf("\t\t\t\t\t  --------------- \n");
        printf("\n\t\t\t\tENTER YOUR FAVORITE SIT NO ");
        scanf("%d",&k);
        if(1<=k&&k<=24)
        {
            if(B[k]==0)
            {
                printf("\n\t\t\t\tYOU BOOKED %d",k);
                A[i]=k;
                B[k]+=1;
            }
            else
            {
                j++;
                printf("\n\t\t\t\tSORRY THIS SIT IS ALREADY BOOKED\n");
                A[i]=0;
            }
        }
        else
        {
            j++;
            printf("\n\t\t\t\tINVALID SIT \n");
            A[i]=0;
        }
    };
    printf("\n\t\t\t\tYOUR BOOKED SIT NO IS :");
    for(i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("%d ",A[i]);
        }
    }
    getch();
    savingfile(TI,DT,com,b[5].plane,A,j,tk,k,FD,FC);
}

home()
{
    system("CLS");
    system("COLOR B");
    int choice;
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                          AAF AIRLINES                           \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\t 1.LOGIN\n");
    printf("\t\t\t\t\t 2.SIGNUP\n");
    printf("\t\t\t\t\t 3.ADMIN PANEL\n");
    printf("\t\t\t\t\t 4.FORGET (USERNAME/PASSWORD)\n");
    printf("\t\t\t\t\t 5.RESET DATA\n");
    printf("\t\t\t\t\t 6.EXIT\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE:");
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
        admin();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        forgot();
        break;
    case 5:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        basic();
        home();
        break;
    case 6:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\tTHANKS FOR USING OUR SERVICE....\n\n\n\n\n\n\n\n");
        exit(0);
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE!!\n\t\t\t\t\tTRY AGAIN...\n");
        getch();
        home();
        break;
    }
}
intro()
{
    printf("\n\n\n\n\n");
    for(int i=0; i<60; i++)
    {
        if(i==9||i==10||i==11||i==12||i==34||i==31||i==32||i==33||i==46||i==47||i==48||i==49||i==50||i==51||i==52||i==53||i==54)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==8||i==9||i==12||i==13||i==14||i==29||i==30||i==31||i==34||i==35||i==36||i==53||i==54||i==48||i==49||i==50||i==51||i==52)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==55)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==8||i==6||i==15||i==13||i==14||i==29||i==30||i==28||i==37||i==35||i==36)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==7||i==5||i==6||i==15||i==16||i==14||i==29||i==27||i==28||i==37||i==38||i==36||i==48||i==49||i==50||i==51||i==52||i==53)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==4||i==5||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==17||i==26||i==27||i==28||i==29||i==30||i==31||i==32||i==33||i==34||i==35||i==36||i==
                37||i==38||i==39||i==48||i==49||i==50||i==51||i==52||i==53)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==54)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==3||i==4||i==5||i==6||i==7||i==8||i==9||i==10||i==11||i==12||i==13||i==14||i==15||i==16||i==17||i==18||i==25||i==26||i==27||i==28||i==29||i==30||i==31||i==32||i==33||i==34||i==35||i==36||i==
                37||i==38||i==39||i==40)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==2||i==3||i==4||i==17||i==18||i==19||i==24||i==25||i==26||i==39||i==40||i==41)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n");
    for(int i=0; i<60; i++)
    {
        if(i==2||i==3||i==4||i==17||i==18||i==19||i==24||i==25||i==26||i==39||i==40||i==41||i==46)
        {
            printf("_");
            usleep(9000);
        }
        else if(i==45||i==47)
        {
            printf("|");
            usleep(4000);
        }
        else if(i==1)
        {
            printf("\t\t\t\t");
        }
        else if(i==48)
        {
            printf(" AIRLINES ");
        }
        else
        {
            printf(" ");
            usleep(4000);
        }
    }
    printf("\n\n\n\t\t\t\t");
    char s1[60]= {"  THE    TRUSTED     AIRLINES     BOOKING     SERVICE"};
    for(int i=0; i<60; i++)
    {
        printf("%c",s1[i]);
        usleep(40000);
    }
}

adminp()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN PANEL                                \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1.ADDING\n");
    printf("\t\t\t\t\t 2.EDITING\n");
    printf("\t\t\t\t\t 3.VIEW\n");
    printf("\t\t\t\t\t 4.LOGOUT\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE : ");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adding();
    }
    else if(n==2)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        editing();
    }
    else if(n==3)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        viewing();
    }
    else if(n==4)
    {
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        admin();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE !!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        adminp();
    }
}
admin()
{
    system("CLS");
    system("COLOR B");
    int choice;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADMIN VERIFICATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\t 1.LOGIN\n");
    printf("\t\t\t\t\t 2.SIGNUP\n");
    printf("\t\t\t\t\t 3.SETTING\n");
    printf("\t\t\t\t\t 4.HOME PAGE\n");
    printf("\t\t\t\t\t 5.EXIT\n\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE :");
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
        adlogin();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adregistr();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        adsetting();
        break;
    case 4:
        home();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\n\n\t\t\t\t\t WRONG CHOICE !!\n\t\t\t\t\tTRY AGAIN...\n");
        getch();
        admin();
        break;
    }
}

vplane()
{
    system("CLS");
    system("COLOR E");
    int k,m=1,p;
    printf("                                 *************************************                                   \n");
    printf("                                           PURCHASE TICKET                                                \n");
    printf("                                 *************************************                                   \n\n");

    printf("\t\t\t\t 1.|PASSENGER|         2.|CHARTER|               3.|CARGO|\n");
    printf("\t\t\t\t\n\n\n");
    for(k=0; k<m; k++)
    {
        printf("\t\t\t\tENTER YOUR CHOICE :");
        scanf("%d",&p);

        if(p==1)
        {
            passenger(1);
        }
        else if(p==2)
        {
            charter();
        }
        else if(p==3)
        {
            cargo();
        }
        else
        {
            printf("\t\t\t\t\tINVALID CODE\n\n");
            m++;
        }
    }
}
cplane(char TI[],char DT[],char com[],char FD[],char FC[],int n,int tk)
{
    system("CLS");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        AAF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tTIME        : %s\n",TI);
    printf("\t\t\t\t\tCOMPANY     : %s\n",com);
    printf("\t\t\t\t\tFOOD        : %s\n",FD);
    printf("\t\t\t\t\tFACILITIES  : %s\n",FC);
    printf("\t\t\t\t\tPRICE       : %d TK\n\n",tk);
    int hh=2,j,l=0;


    for(int vv=1; vv<hh; vv++)
    {
        printf("\n\t\t\t\tHOW MANY SIT YOU WANT TO BOOK(MAX 3):");
        scanf("%d",&j);
        if(0<j&&j<4)
        {
            tx[tt].HMT=j;
        }
        else
        {
            hh++;
        }
    }
    switch(n)
    {
    case 1:
        B737_8(TI,DT,com,FD,FC,tk);
        break;
    case 2:
        B777_3(TI,DT,com,FD,FC,tk);
        break;
    case 3:
        B787_8(TI,DT,com,FD,FC,tk);
        break;
    case 4:
        B787_9(TI,DT,com,FD,FC,tk);
        break;
    case 5:
        BD8Q_4(TI,DT,com,FD,FC,tk);
        break;
    }
}

basic()
{
    char NNN[20]="none";
    //PLANE NAME
    char p1[45]="BOEING 737-800";
    char p2[45]="BOEING 777-300 ER";
    char p3[45]="BOEING 787-800";
    char p4[45]="BOEING 787-900";
    char p5[45]="BOMBARDIER DASH 8 Q400";

    //COMPANY NAME
    char c1[20]="BANGLADESH BIMAN";
    char c2[20]="NOVOAIR";
    char c3[20]="REGENT AIRWAYS";
    char c4[30]="US BANGLA AIRLINES";
    char c5[20]="BASHUNDHARA AIRWAYS";

    //TIME TABLE
    char t12[8]="12 AM";
    char t01[8]="01 AM";
    char t03[8]="03 AM";
    char t04[8]="04 AM";
    char t06[8]="06 AM";
    char t07[8]="07 AM";
    char t09[8]="09 AM";
    char t10[8]="10 AM";

    //FOOD
    char f1[100]="PIZA AND WATER";
    char f2[100]="BERGER AND WATER";
    char f3[100]="SAMOSA AND WATER";
    char f4[100]="CAKE AND WATER";
    char f5[100]="NOTHING";


    //CARGODES
    char cd1[15]="DHAKA";
    char cd2[15]="CHOTTOGRAM";
    char cd3[15]="SYLHET";

    //CARGODES WORK
    strcpy(b[0].crde,NNN);
    strcpy(b[1].crde,cd1);
    strcpy(b[2].crde,cd2);
    strcpy(b[3].crde,cd3);


    //FACILITIES
    char fc1[100]="PAPER,WIFI,FOOD,OXYGEN MUSK";
    char fc2[100]="WIFI,MEGAZINE,OXYGEN MUSK";
    char fc3[100]="OXYGEN MUSK";

    //DESTINATION
    char DTC[20]="DHAKA TO CHOTTOGRAM";
    char DTS[20]="DHAKA TO SYLHET";
    char CTS[22]="CHOTTOGRAM TO SYLHET";
    char CTD[20]="CHOTTOGRAM TO DHAKA";
    char STD[20]="SYLHET TO DHAKA";
    char STC[22]="SYLHET TO CHOTTOGRAM";

    //CHARTER NAME
    char cn1[40]="BELL 222";
    char cn2[40]="BELL 206B JET RANGER";
    char cn3[40]="BELL 206B JET RANGER BLUE";
    char cn4[40]="AUGUSTA WESTLAND 139";
    char cn5[40]="EUROCOPTER 120 COLIBRI";
    char cn6[40]="LEARJET 75";

    //CHARTER NAME WORK
    strcpy(b[0].cname,NNN);
    strcpy(b[1].cname,cn1);
    strcpy(b[2].cname,cn2);
    strcpy(b[3].cname,cn3);
    strcpy(b[4].cname,cn4);
    strcpy(b[5].cname,cn5);
    strcpy(b[6].cname,cn6);

    //CHARTER FACILITIES
    char cp1[40]="WIFI,AC AND SIT 4";
    char cp2[40]="AC AND SIT 6";
    char cp3[40]="WIFI,AC,FOOD AND SIT 12";

    //CHARTER FACILITIES
    strcpy(b[0].cfaci,NNN);
    strcpy(b[1].cfaci,cp1);
    strcpy(b[2].cfaci,cp2);
    strcpy(b[3].cfaci,cp3);


    //COMPANY WORK
    strcpy(b[0].comn,NNN);
    strcpy(b[1].comn,c1);
    strcpy(b[2].comn,c2);
    strcpy(b[3].comn,c3);
    strcpy(b[4].comn,c4);
    strcpy(b[5].comn,c5);

    //TIME TABLE WORK
    strcpy(b[0].time,NNN);
    strcpy(b[1].time,t12);
    strcpy(b[2].time,t01);
    strcpy(b[3].time,t03);
    strcpy(b[4].time,t04);
    strcpy(b[5].time,t06);
    strcpy(b[6].time,t07);
    strcpy(b[7].time,t09);
    strcpy(b[8].time,t10);

    //PLANE NAME WORK
    strcpy(b[0].plane,NNN);
    strcpy(b[1].plane,p1);
    strcpy(b[2].plane,p2);
    strcpy(b[3].plane,p3);
    strcpy(b[4].plane,p4);
    strcpy(b[5].plane,p5);

    //FOOD WORK
    strcpy(b[0].food,NNN);
    strcpy(b[1].food,f1);
    strcpy(b[2].food,f2);
    strcpy(b[3].food,f3);
    strcpy(b[4].food,f4);
    strcpy(b[5].food,f5);

    //FACILITIES WORK
    strcpy(b[0].faci,NNN);
    strcpy(b[1].faci,fc1);
    strcpy(b[2].faci,fc2);
    strcpy(b[3].faci,fc3);

    //DESTINATION WORK
    strcpy(b[0].destin,NNN);
    strcpy(b[1].destin,DTC);
    strcpy(b[2].destin,DTS);
    strcpy(b[3].destin,CTS);
    strcpy(b[4].destin,CTD);
    strcpy(b[5].destin,STD);
    strcpy(b[6].destin,STC);

    //CARGO COMPANY
    char csc1[40]="DHL";
    char csc2[40]="GOLBAL AIR COURIER";
    char csc3[40]="S&F COURIER ";

    //CARGO COMPANY WORK
    strcpy(b[0].crcm,NNN);
    strcpy(b[1].crcm,csc1);
    strcpy(b[2].crcm,csc2);
    strcpy(b[3].crcm,csc3);

    def.company=5;
    def.patime=8;
    def.pafood=5;
    def.pafaci=3;
    def.padestin=6;
    def.paroot=24;
    def.chpna=6;
    def.chfaci=3;
    def.crcmc=3;
    def.pplane=5;
    def.ccde=3;

}
roots()
{
    //roots>>1
    strcpy(c[1].destinp,b[1].destin);
    strcpy(c[1].timep,b[1].time);
    strcpy(c[1].comnp,b[1].comn);
    strcpy(c[1].pname,b[1].plane);
    c[1].pricep=7000;
    strcpy(c[1].foodp,b[1].food);
    strcpy(c[1].facip,b[3].faci);
    c[1].planep=1;

    //roots>>2
    strcpy(c[2].destinp,b[1].destin);
    strcpy(c[2].timep,b[3].time);
    strcpy(c[2].comnp,b[3].comn);
    strcpy(c[2].pname,b[3].plane);
    c[2].pricep=6800;
    strcpy(c[2].foodp,b[1].food);
    strcpy(c[2].facip,b[1].faci);
    c[2].planep=3;

    //roots>>3
    strcpy(c[3].destinp,b[1].destin);
    strcpy(c[3].timep,b[5].time);
    strcpy(c[3].comnp,b[4].comn);
    strcpy(c[3].pname,b[4].plane);
    c[3].pricep=6700;
    strcpy(c[3].foodp,b[3].food);
    strcpy(c[3].facip,b[3].faci);
    c[3].planep=4;

    //roots>>4
    strcpy(c[4].destinp,b[1].destin);
    strcpy(c[4].timep,b[7].time);
    strcpy(c[4].comnp,b[2].comn);
    strcpy(c[4].pname,b[5].plane);
    c[4].pricep=6900;
    strcpy(c[4].foodp,b[1].food);
    strcpy(c[4].facip,b[3].faci);
    c[4].planep=5;

    //roots>>5
    strcpy(c[5].destinp,b[2].destin);
    strcpy(c[5].timep,b[2].time);
    strcpy(c[5].comnp,b[3].comn);
    strcpy(c[5].pname,b[2].plane);
    c[5].pricep=6000;
    strcpy(c[5].foodp,b[4].food);
    strcpy(c[5].facip,b[3].faci);
    c[5].planep=2;

    //roots>>6
    strcpy(c[6].destinp,b[2].destin);
    strcpy(c[6].timep,b[4].time);
    strcpy(c[6].comnp,b[4].comn);
    strcpy(c[6].pname,b[5].plane);
    c[6].pricep=6100;
    strcpy(c[6].foodp,b[5].food);
    strcpy(c[6].facip,b[3].faci);
    c[6].planep=5;

    //roots>>7
    strcpy(c[7].destinp,b[2].destin);
    strcpy(c[7].timep,b[6].time);
    strcpy(c[7].comnp,b[1].comn);
    strcpy(c[7].pname,b[3].plane);
    c[7].pricep=5900;
    strcpy(c[7].foodp,b[2].food);
    strcpy(c[7].facip,b[3].faci);
    c[7].planep=3;

    //roots>>8
    strcpy(c[8].destinp,b[2].destin);
    strcpy(c[8].timep,b[8].time);
    strcpy(c[8].comnp,b[2].comn);
    strcpy(c[8].pname,b[2].plane);
    c[8].pricep=6200;
    strcpy(c[8].foodp,b[1].food);
    strcpy(c[8].facip,b[1].faci);
    c[8].planep=2;

    //roots>>9
    strcpy(c[9].destinp,b[3].destin);
    strcpy(c[9].timep,b[2].time);
    strcpy(c[9].comnp,b[2].comn);
    strcpy(c[9].pname,b[5].plane);
    c[9].pricep=9000;
    strcpy(c[9].foodp,b[1].food);
    strcpy(c[9].facip,b[3].faci);
    c[9].planep=5;

    //roots>>10
    strcpy(c[10].destinp,b[3].destin);
    strcpy(c[10].timep,b[4].time);
    strcpy(c[10].comnp,b[1].comn);
    strcpy(c[10].pname,b[1].plane);
    c[10].pricep=9400;
    strcpy(c[10].foodp,b[1].food);
    strcpy(c[10].facip,b[1].faci);
    c[10].planep=1;

    //roots>>11
    strcpy(c[11].destinp,b[3].destin);
    strcpy(c[11].timep,b[6].time);
    strcpy(c[11].comnp,b[3].comn);
    strcpy(c[11].pname,b[3].plane);
    c[11].pricep=9200;
    strcpy(c[11].foodp,b[4].food);
    strcpy(c[11].facip,b[3].faci);
    c[11].planep=3;

    //roots>>12
    strcpy(c[12].destinp,b[3].destin);
    strcpy(c[12].timep,b[6].time);
    strcpy(c[12].comnp,b[4].comn);
    strcpy(c[12].pname,b[4].plane);
    c[12].pricep=9300;
    strcpy(c[12].foodp,b[2].food);
    strcpy(c[12].facip,b[3].faci);
    c[12].planep=4;

    //roots>>13
    strcpy(c[13].destinp,b[4].destin);
    strcpy(c[13].timep,b[1].time);
    strcpy(c[13].comnp,b[4].comn);
    strcpy(c[13].pname,b[5].plane);
    c[13].pricep=7000;
    strcpy(c[13].foodp,b[5].food);
    strcpy(c[13].facip,b[3].faci);
    c[13].planep=5;

    //roots>>14
    strcpy(c[14].destinp,b[4].destin);
    strcpy(c[14].timep,b[3].time);
    strcpy(c[14].comnp,b[1].comn);
    strcpy(c[14].pname,b[3].plane);
    c[14].pricep=7100;
    strcpy(c[14].foodp,b[1].food);
    strcpy(c[14].facip,b[3].faci);
    c[14].planep=3;

    //roots>>15
    strcpy(c[15].destinp,b[4].destin);
    strcpy(c[15].timep,b[5].time);
    strcpy(c[15].comnp,b[2].comn);
    strcpy(c[15].pname,b[2].plane);
    c[15].pricep=6800;
    strcpy(c[15].foodp,b[1].food);
    strcpy(c[15].facip,b[3].faci);
    c[15].planep=2;

    //roots>>16
    strcpy(c[16].destinp,b[4].destin);
    strcpy(c[16].timep,b[7].time);
    strcpy(c[16].comnp,b[3].comn);
    strcpy(c[16].pname,b[2].plane);
    c[16].pricep=6900;
    strcpy(c[16].foodp,b[2].food);
    strcpy(c[16].facip,b[3].faci);
    c[16].planep=2;

    //roots>>17
    strcpy(c[17].destinp,b[5].destin);
    strcpy(c[17].timep,b[1].time);
    strcpy(c[17].comnp,b[3].comn);
    strcpy(c[17].pname,b[3].plane);
    c[17].pricep=6100;
    strcpy(c[17].foodp,b[5].food);
    strcpy(c[17].facip,b[3].faci);
    c[17].planep=3;

    //roots>>18
    strcpy(c[18].destinp,b[5].destin);
    strcpy(c[18].timep,b[3].time);
    strcpy(c[18].comnp,b[4].comn);
    strcpy(c[18].pname,b[4].plane);
    c[18].pricep=6700;
    strcpy(c[18].foodp,b[1].food);
    strcpy(c[18].facip,b[3].faci);
    c[18].planep=4;

    //roots>>19
    strcpy(c[19].destinp,b[5].destin);
    strcpy(c[19].timep,b[5].time);
    strcpy(c[19].comnp,b[2].comn);
    strcpy(c[19].pname,b[5].plane);
    c[19].pricep=6600;
    strcpy(c[19].foodp,b[3].food);
    strcpy(c[19].facip,b[3].faci);
    c[19].planep=5;

    //roots>>20
    strcpy(c[20].destinp,b[5].destin);
    strcpy(c[20].timep,b[7].time);
    strcpy(c[20].comnp,b[1].comn);
    strcpy(c[20].pname,b[1].plane);
    c[20].pricep=5900;
    strcpy(c[20].foodp,b[5].food);
    strcpy(c[20].facip,b[3].faci);
    c[20].planep=1;

    //roots>>21
    strcpy(c[21].destinp,b[6].destin);
    strcpy(c[21].timep,b[2].time);
    strcpy(c[21].comnp,b[1].comn);
    strcpy(c[21].pname,b[3].plane);
    c[21].pricep=8900;
    strcpy(c[21].foodp,b[5].food);
    strcpy(c[21].facip,b[2].faci);
    c[21].planep=3;

    //roots>>22
    strcpy(c[22].destinp,b[6].destin);
    strcpy(c[22].timep,b[4].time);
    strcpy(c[22].comnp,b[3].comn);
    strcpy(c[22].pname,b[2].plane);
    c[22].pricep=9000;
    strcpy(c[22].foodp,b[4].food);
    strcpy(c[22].facip,b[2].faci);
    c[22].planep=3;

    //roots>>23
    strcpy(c[23].destinp,b[6].destin);
    strcpy(c[23].timep,b[6].time);
    strcpy(c[23].comnp,b[2].comn);
    strcpy(c[23].pname,b[2].plane);
    c[23].pricep=9200;
    strcpy(c[23].foodp,b[2].food);
    strcpy(c[23].facip,b[2].faci);
    c[22].planep=2;

    //roots>>24
    strcpy(c[24].destinp,b[6].destin);
    strcpy(c[24].timep,b[8].time);
    strcpy(c[24].comnp,b[4].comn);
    strcpy(c[24].pname,b[5].plane);
    c[24].pricep=9500;
    strcpy(c[24].foodp,b[1].food);
    strcpy(c[24].facip,b[1].faci);
    c[24].planep=5;



}
charterf()
{
    //CHARTER 01
    strcpy(d[1].chname,b[1].cname);
    strcpy(d[1].chfaci,b[2].cfaci);
    d[1].chprice=8000;
    strcpy(d[1].ccp,b[5].comn);

    //CHARTER 02
    strcpy(d[2].chname,b[2].cname);
    strcpy(d[2].chfaci,b[1].cfaci);
    d[2].chprice=9000;
    strcpy(d[2].ccp,b[5].comn);

    //CHARTER 03
    strcpy(d[3].chname,b[3].cname);
    strcpy(d[3].chfaci,b[2].cfaci);
    d[3].chprice=9500;
    strcpy(d[3].ccp,b[1].comn);

    //CHARTER 04
    strcpy(d[4].chname,b[4].cname);
    strcpy(d[4].chfaci,b[2].cfaci);
    d[4].chprice=7500;
    strcpy(d[4].ccp,b[3].comn);

    //CHARTER 05
    strcpy(d[5].chname,b[5].cname);
    strcpy(d[5].chfaci,b[2].cfaci);
    d[5].chprice=7900;
    strcpy(d[5].ccp,b[5].comn);

    //CHARTER 06
    strcpy(d[6].chname,b[6].cname);
    strcpy(d[6].chfaci,b[3].cfaci);
    d[6].chprice=20000;
    strcpy(d[6].ccp,b[1].comn);

}
cargof()
{
    strcpy(e[1].ccrcm,b[1].crcm);
    strcpy(e[2].ccrcm,b[2].crcm);
    strcpy(e[3].ccrcm,b[3].crcm);

    strcpy(e[1].crdec,b[1].crde);
    strcpy(e[2].crdec,b[2].crde);
    strcpy(e[3].crdec,b[3].crde);

    e[1].ccrcprice=12;
    e[2].ccrcprice=10;
    e[3].ccrcprice=15;

}

passenger()
{
    system("CLS");
    system("COLOR C");
    roots();
    int ab,ac,ad[30],aa,bb[26];
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                DESTINATION                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    for(int i=1; i<=def.padestin; i++)
    {
        printf("\n\t\t\t\t\t%d >> %s\n",i,b[i].destin);
    }
    printf("\n\t\t\t\t\tENTER YOUR DESTINATION CODE :  ");
    scanf("%d",&ab);
    system("CLS");
    system("COLOR C");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              FLIGHTS INFORMATION                              \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tDESTINATION CODE : %d \n",ab);
    printf("\t\t\t\t\tDESTINATION      : %s \n\n",b[ab].destin);
    for(aa=1; aa<=def.paroot; aa++)
    {
        ad[aa]=strcmp(c[aa].destinp,b[ab].destin);
        if(ad[aa]==0)
        {
            bb[aa]=1;
            printf("\t\t\t\t\tCODE        : %d\n",aa);
            printf("\t\t\t\t\tTIME        : %s\n",c[aa].timep);
            printf("\t\t\t\t\tCOMPANY     : %s\n",c[aa].comnp);
            printf("\t\t\t\t\tFOOD        : %s\n",c[aa].foodp);
            printf("\t\t\t\t\tFACILITIES  : %s\n",c[aa].facip);
            printf("\t\t\t\t\tPRICE       : %d TK\n\n",c[aa].pricep);
        }
    }
    printf("\n\t\t\t\t\tENTER YOURT FAVORITE FLIGHTS CODE : ");
    scanf("%d",&ac);
    for(int i=1; i<=def.paroot; i++)
    {
        if(bb[ac]==1)
        {
            cplane(c[ac].timep,c[ac].destinp,c[ac].comnp,c[ac].foodp,c[ac].facip,c[ac].planep,c[ac].pricep);
        }
        else
        {
            printf("\n TRY AGAIN \n");
            passenger();
        }
    }
}
charter()
{
    system("CLS");
    charterf();
    int aa,bb,cc;
    char ab[40];
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              CHARTER AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    for(int i=1; i<=def.chpna; i++)
    {
        printf("\t\t\t\t\tCODE         : %d\n",i);
        printf("\t\t\t\t\tCHARTER NAME : %s\n",d[i].chname);
        printf("\t\t\t\t\tFACILITIES   : %s\n",d[i].chfaci);
        printf("\t\t\t\t\tPRICE        : %d TK(PER HOUR)\n",d[i].chprice);
        printf("\t\t\t\t\tCOMPANY      : %s\n\n",d[i].ccp);
    }
    printf("\n\n\t\t\t\tENTER YOUR CHOICE >> ");
    scanf("%d",&aa);
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              CHARTER AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\t\t\t\t\tCHARTER NAME: %s\n",d[aa].chname);
    printf("\t\t\t\t\tFACILITIES  : %s\n",d[aa].chfaci);
    printf("\t\t\t\t\tPRICE       : %d TK(PER HOUR)\n",d[aa].chprice);
    printf("\t\t\t\t\tCOMPANY     : %s\n\n",d[aa].ccp);
    printf("\n\n\t\t\t\t\tENTER STARTING TIME(AM) :  ");
    scanf("%d",&cc);
    printf("\n\n\t\t\t\t\tENTER HOW MANY HOUR  :  ");
    scanf("%d",&bb);
    printf("\n\n\t\t\t\t\tENTER PICKUP AREA :  ");
    scanf("%s",&ab);
    savingcharter(d[aa].chname,d[aa].chfaci,d[aa].ccp,d[aa].chprice,bb,ab,cc);
}
cargo()
{
    cargof();
    char f[20];
    char to[20];
    system("CLS");
    system("COLOR E");
    int a,b,d,g,h;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                               CARGO AIRLINES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t\tCHOOSE COMPANY ");
    for(int i=1; i<=def.crcmc; i++)
    {
        printf("\n\n\t\t\t\tCODE      : %d\n",i);
        printf("\t\t\t\tCOMPANY   : %s\n",e[i].ccrcm);
        printf("\t\t\t\tPRICE     : (DISTENCE X WET X %d)\n",e[i].ccrcprice);
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&h);
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 FROM  /  TO                              \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\tCOMPANY      : %s\n",e[h].ccrcm);
    printf("\t\t\t\tPRICE        : (DISTENCE X WET X %d)\n\n",e[h].ccrcprice);
    printf("\n\t\t\t\tFROM : \n");
    for(int i=1; i<=def.ccde; i++)
    {
        printf("\t\t\t\t%d : %s \n",i,e[i].crdec);
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&a);
    printf("\n\t\t\t\tFROM : %s\n",e[a].crdec);
    printf("\n\t\t\t\tTO  : \n");
    for(int i=1; i<=def.ccde; i++)
    {
        if(i!=a)
        {
            printf("\t\t\t\t%d : %s\n",i,e[i].crdec);
        }
    }
    printf("\n\t\t\t\tENTER YOUR CHOICE :");
    scanf("%d",&b);
    printf("\n\t\t\t\tTO : %s \n",e[b].crdec);
    strcpy(f,e[a].crdec);
    strcpy(to,e[b].crdec);
    if((a==1)&&(b==2))
    {
        d=244;
    }
    else if((a==1)&&(b==3))
    {
        d=240;
    }
    else if((a==2)&&(b==3))
    {
        d=244;
    }
    else if((a==2)&&(b==1))
    {
        d=377;
    }
    else if((a==3)&&(b==1))
    {
        d=240;
    }
    else if((a==3)&&(b==2))
    {
        d=370;
    }
    getch();
    savecargo(e[h].ccrcm,e[h].ccrcprice,d,f,to);
}
adding()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t 1.ADD ROOT\n");
    printf("\t\t\t\t 2.ADD TIME\n");
    printf("\t\t\t\t 3.ADD COMPANY\n");
    printf("\t\t\t\t 4.ADD FOOD\n");
    printf("\t\t\t\t 5.ADD FACILITIES\n");
    printf("\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        addroot();
    }
    else if(n==2)
    {
        system("CLS");
        addtime();
    }
    else if(n==3)
    {
        system("CLS");
        addcom();
    }
    else if(n==4)
    {
        system("CLS");
        addfood();
    }
    else if(n==5)
    {
        system("CLS");
        addfaci();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!!\n\t\t\t\tTRY AGAIN ....\n");
        getch();
        adding();
    }
}
addcom()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.company,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY COMPANY DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER COMPANY NAME :  ");
        scanf("%s",b[ib].comn);
    }
    pro();
    mro();
    getch();
    adminp();
}
addtime()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                ADDING TIME                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.patime,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY TIME DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER TIME :  ");
        scanf("%s",&b[ib].time);
        def.patime++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addfood()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADDING FOOD LIST                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.pafood,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY FOOD LIST YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER FOOD LIST :  ");
        scanf("%s",&b[ib].food);
        def.pafood++;
    }
    pro();
    mro();
    getch();
    adminp();
}
addfaci()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              ADDING FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int ibb=def.pafaci,ib,j,k;
    printf("\n\n\t\t\t\tHOW MANY FACILITIES YOU WANT TO ADD: ");
    scanf("%d",&j);
    ib=ibb;
    k=j+ib;
    for(ib=ibb+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER FACILITIES :  ");
        scanf("%s",&b[ib].faci);
        def.pafaci++;
    }
    getch();
    adminp();
}
addroot()
{
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADDING ROOT                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int v,u,w,x;
    int xx=def.paroot,y,z,k;
    printf("\n\n\t\t\t\tHOW MANY ROOT YOU WANT TO ADD: ");
    scanf("%d",&k);
    y=xx;
    z=k+y;
    for(y=xx+1; y<=z; y++)
    {
        system("CLS");
        def.paroot++;
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                             CHOOSE DESTINATION                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.padestin; ib++)
        {
            printf("\n\t\t\t\t%d. DESTINATION : %s\n",ib,b[ib].destin);
        }
        printf("\n\t\t\t\tENTER DESTINATION CODE :  ");
        scanf("%d",&w);
        strcpy(c[y].destinp,b[w].destin);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE TIME                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.patime; ib++)
        {
            printf("\n\t\t\t\t%d. TIME : %s\n",ib,b[ib].time);
        }
        printf("\n\t\t\t\tENTER TIME CODE :  ");
        scanf("%d",&u);
        strcpy(c[y].timep,b[u].time);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                               CHOOSE COMPANY                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.company; ib++)
        {
            printf("\n\t\t\t\t%d. COMPANY : %s\n",ib,b[ib].comn);
        }
        printf("\n\t\t\t\tENTER COMPANY CODE :  ");
        scanf("%d",&v);
        strcpy(c[y].comnp,b[v].comn);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                 CHOOSE PLANE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pplane; ib++)
        {
            printf("\n\t\t\t\t%d. PLANE : %s\n",ib,b[ib].plane);
        }
        printf("\n\t\t\t\tENTER PLANE CODE :  ");
        scanf("%d",&c[y].planep);
        strcpy(c[y].pname,b[c[y].planep].plane);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                    PRICE                                \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        printf("\n\t\t\t\tENTER PRICE :  ");
        scanf("%d",&c[y].pricep);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                                  CHOOSE FOOD                               \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafood; ib++)
        {
            printf("\n\t\t\t\t%d. FOOD : %s\n",ib,b[ib].food);
        }
        printf("\n\t\t\t\tENTER FOOD CODE :  ");
        scanf("%d",&x);
        strcpy(c[y].foodp,b[x].food);
        system("CLS");
        printf("                                        '''''''''''''''''''''''''''''                       \n");
        printf("                                              CHOOSE FACILITIES                              \n");
        printf("                                        '''''''''''''''''''''''''''''                       \n\n");
        for(int ib=1; ib<=def.pafaci; ib++)
        {
            printf("\n\t\t\t\t%d. FACILITIES : %s\n",ib,b[ib].faci);
        }
        printf("\n\t\t\t\tENTER FACILITIES CODE :  ");
        scanf("%d",&x);
        strcpy(c[y].facip,b[x].faci);
    }
    pro();
    mro();
    getch();
    adminp();
}

editing()
{
    system("CLS");
    int n;
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING PANEL                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\t\t\t\t 1.EDIT TIME\n");
    printf("\t\t\t\t 2.EDIT COMPANY\n");
    printf("\t\t\t\t 3.EDIT FOOD\n");
    printf("\t\t\t\t 4.EDIT FACILITIES\n");
    printf("\t\t\t\t 5.EDIT CHARTER FACILITIES\n");
    printf("\t\t\t\t 5.EDIT CARGO COMPANY\n");
    printf("\t\t\t\t 6.PREVIOUS PAGE\n");
    printf("\t\t\t\t\t ENTER YOUR CHOICE :");
    scanf("%d",&n);
    if(n==1)
    {
        system("CLS");
        edittime();
    }
    else if(n==2)
    {
        system("CLS");
        editcompany();
    }
    else if(n==3)
    {
        system("CLS");
        editfood();
    }
    else if(n==4)
    {
        system("CLS");
        editfaci();
    }
    else if(n==5)
    {
        system("CLS");
        editcargocompany();
    }
    else if(n==6)
    {
        system("CLS");
        adminp();
    }
    else
    {
        printf("\n\t\t\t\tWRONG CHOICE!!!\n\t\t\t\tTRY AGAIN....\n");
        getch();
        editing();
    }
}
editcompany()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.company; ib++)
    {
        printf("\n\t\t\t\t %d.COMPANY  >>%s\n",ib,b[ib].comn);

    }
    printf("\n\t\t\t\tWHICH COMPANY DO YOU WANT TO EDIT ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW NAME >>");
    scanf("%s",&b[j].comn);
    pro();
    mro();
    getch();
    adminp();

}
edittime()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING TIME                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.patime; ib++)
    {
        printf("\n\t\t\t\t>%d TIME >>%s\n",ib,b[ib].time);
    }
    printf("\n\t\t\t\tWHICH TIME DO YOU WANT TO EDIT :  ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW TIME>>");
    scanf("%s",&b[j].time);
    pro();
    mro();
    getch();
    adminp();
}
editfood()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                EDITING FOOD                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.pafood; ib++)
    {
        printf("\n\t\t\t\t>%d FOOD LIST >>%s\n",ib,b[ib].food);
    }
    printf("\n\t\t\t\tWHICH FOOD LIST DO YOU WANT TO EDIT : ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW FOOD LIST >>");
    scanf("%s",&b[j].food);
    pro();
    mro();
    getch();
    adminp();
}
editfaci()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                              EDITING FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.pafaci; ib++)
    {
        printf("\n\t\t\t\t>%d FACILITIES >>%s\n",ib,b[ib].faci);
    }
    printf("\n\t\t\t\tWHICH FACILITIES YOU WANTS TO EDIT: ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW FACILITIES >>");
    scanf("%s",&b[j].faci);
    pro();
    mro();
    getch();
    adminp();
}
editcfaci()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                          EDITING CHARTER FACILITIES                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.chfaci; ib++)
    {
        printf("\n\t\t\t\t>%d CHARTER FACILITIES >>%s\n",ib,b[ib].cfaci);
    }
    printf("\n\t\t\t\tWHICH CHARTER FACILITIES YOU WANTS TO EDIT: ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW CHARTER FACILITIES >>");
    scanf("%s",&b[j].cfaci);
    pro();
    mro();
    getch();
    adminp();
}
editcargocompany()
{
    system("CLS");
    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                            EDITING CARGO COMPANY                               \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    int j,ib;
    for(ib=1; ib<=def.crcmc; ib++)
    {
        printf("\n\t\t\t\t>%d CARGO COMPANY  >>%s\n",ib,b[ib].crcm);
    }
    printf("\n\t\t\t\tWHICH CARGO COMPANY DO YOU WANT TO EDIT : ");
    scanf("%d",&j);
    printf("\n\t\t\t\tNEW CARGO COMPANY NAME >>");
    scanf("%s", b[j].crcm);
    pro();
    mro();
    getch();
    adminp();
}
aboutus()
{
    char ch1[80]="  BANGLADESH UNIVERCITY OF BUSINESS AND TECHNOLOGY (BUBT)\n";
    char ch2[50]="                   PROJECT : BLACK PANDA \n";
    char ch3[80]="         PROJECT TOPIC : AIRLINES TICKETS MANAGEMENT";
    char ch4[50]="             COURSE TEACHER : MEER MUTTAKIN ALAM ";
    char ch5[50]=" \t\t\t TEAM : 01 ";
    char ch6[80]=" \n\n\t LEADER\t\t\t\t\t         MEMBER 01 \t\t\t\t     MEMBER 02 ";
    char ch7[80]=" \n   NAME  : ANUPAM KUMAR\t\t\t\t    NAME  : MD. AL EMAM\t\t\t\tNAME  : FARHAN ISRAQ ";
    char ch8[80]=" \n   ID    : 19202103261 \t\t\t\t    ID    : 19202103242\t\t\t\tID    : 19202103272 ";
    char cha[80]=" \n   MOBILE: 01736181068 \t\t\t\t    MOBILE: 01776607982\t\t\t\tMOBILE: 01744227109 ";
    char chb[125]=" \n   EMAIL : anupomkumar60607@gmail.com               EMAIL : aryansuvo017@gmail.com\t\tEMAIL : farhaneshraksamin@gmail.com";
    char ch9[80]=" Plot # 77-78, Road # 9, Rupnagar R/A Mirpur-2 Dhaka, 1216";
    system("CLS");
    printf("\n\n\n\t\t\t\t");
    for(int i=1; i<=65; i++)
    {
        printf("%c",ch1[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=1; i<=60; i++)
    {
        printf("%c",ch9[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=0; i<58; i++)
    {
        printf("_");
        usleep(40);
    }
    printf("\n\n\t\t\t\t");
    for(int i=1; i<=50; i++)
    {
        printf("%c",ch2[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t");
    for(int i=1; i<=70; i++)
    {
        printf("%c",ch3[i]);
        usleep(4000);
    }
    printf("\n\n\n\t\t\t\t");
    for(int i=1; i<=50; i++)
    {
        printf("%c",ch4[i]);
        usleep(4000);
    }
    printf("\n\n\t\t\t\t");
    for(int i=1; i<=40; i++)
    {
        printf("%c",ch5[i]);
        usleep(4000);
    }
    printf("\n\t\t\t\t\t\t\t");
    for(int i=0; i<=10; i++)
    {
        printf("_");
        usleep(40);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch6[i]);
        usleep(4000);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch7[i]);
        usleep(4000);
    }

    for(int i=1; i<=80; i++)
    {
        printf("%c",ch8[i]);
        usleep(4000);
    }
    for(int i=1; i<=80; i++)
    {
        printf("%c",cha[i]);
        usleep(4000);
    }
    for(int i=1; i<=125; i++)
    {
        printf("%c",chb[i]);
        usleep(4000);
    }
}

ori()
{
    fileM=fopen("information.txt","w");
    for (int i=0; i<=10; i++)
    {
        b[i].plane;
        b[i].comn;
        b[i].time;
        b[i].food;
        b[i].faci;
        b[i].destin;
        b[i].cname;
        b[i].cfaci;
        b[i].crcm;
        b[i].crde;
        fwrite(&b[i],sizeof(b[i]),1,fileM);
    }
    fclose(fileM);
    viewfile22();

}
viewfile22()
{
    system("CLS");
    system("COLOR E");
    fileM=fopen("information.txt","r");
    if(fileM==NULL)
    {
        printf("\n\n\t\t\t\t\t******************************************\n");
        printf("\t\t\t\t\t*              >>WELCOME<<               *\n");
        printf("\t\t\t\t\t*      YOU ARE THE FIRST TIME USER       *\n");
        printf("\t\t\t\t\t*     WE HAVE SOMETHING GOOD FOR YOU     *\n");
        printf("\t\t\t\t\t******************************************\n");
        basic();
        viewfile2();
        ori();
        viewtic();
    }
    else
    {
        while(!feof(fileM))
        {
            for(int i=0; i<=10; i++)
            {
                fread(&b[i],sizeof(b[i]),1,fileM);
                b[i].comn;
                b[i].time;
                b[i].food;
                b[i].faci;
                b[i].destin;
                b[i].cname;
                b[i].cfaci;
                b[i].crcm;
                b[i].crde;
            }
        }
    }
    fclose(fileM);
    viewfile2();
    viewtic();
}

mac()
{
    fileMC=fopen("informationmac.txt","wb");
    def.company;
    def.patime;
    def.pafood;
    def.pafaci;
    def.padestin;
    def.paroot;
    def.pplane;
    def.chpna;
    def.chfaci;
    def.crcmc;
    def.ccde;
    fwrite(&def,sizeof(def),1,fileMC);
    fclose(fileMC);
}
viewfile2()
{
    fileMC=fopen("informationmac.txt","r");
    if(fileMC==NULL)
    {
        printf("\n\n\t\t\t\tPLEASE WAIT, YOUR SOFTWARE IS CONNECTING TO OUR SERVER\n\n\n");
        sleep(1);
        printf("\t\t\t\t   ");
        for(int i=0; i<7; i++)
        {
            printf(">");
            usleep(50000);
        }
        for(int j=0; j<17; j++)
        {
            printf(">");
            usleep(40);
        }
        for(int k=0; k<10; k++);
        {
            printf(">");
            usleep(50000);
        }
        for(int m=0; m<20; m++)
        {
            printf(">");
            usleep(40);
        }
        basic();
        mac();
    }
    else
    {
        while(!feof(fileMC))
        {
            fread(&def,sizeof(def),1,fileMC);
            def.company;
            def.patime;
            def.pafood;
            def.pafaci;
            def.padestin;
            def.paroot;
            def.pplane;
            def.chpna;
            def.chfaci;
            def.crcmc;
            def.ccde;
        }
    }
    fclose(fileMC);
}

pro()
{
    PP=fopen("information.txt","w");
    for (int i=0; i<=10; i++)
    {
        b[i].plane;
        b[i].comn;
        b[i].time;
        b[i].food;
        b[i].faci;
        b[i].destin;
        b[i].cname;
        b[i].cfaci;
        b[i].crcm;
        b[i].crde;
        fwrite(&b[i],sizeof(b[i]),1,PP);
    }
    fclose(PP);
}
mro()
{
    MM=fopen("informationmac.txt","w");
    def.company;
    def.patime;
    def.pafood;
    def.pafaci;
    def.padestin;
    def.paroot;
    def.pplane;
    def.chpna;
    def.chfaci;
    def.crcmc;
    def.ccde;
    fwrite(&def,sizeof(def),1,MM);
    printf("\n\n\t\t\t\t\t DONE ");
    fclose(MM);
}
tupgr()
{
    if(tx[tt].HMT==3)
    {
        printf("you cant buy more ticket from this acc");
        user();
    }
    else
    {
        passenger();
    }
}
tdel()
{
    char ep[10]="EMPTY";
    int i;
    printf("\nYOU HAVE %d TICKET ",tx[tt].HMT);
    printf("\n\nwhich ticket do you want to delete>>");
    scanf("%d",&i);
    if(i==1)
    {
        strcpy(tx[tt].fn1,ep);
        strcpy(tx[tt].ln1,ep);
        strcpy(tx[tt].pass1,ep);
        strcpy(tx[tt].gen1,ep);
    }
    else if(i==2)
    {
        strcpy(tx[tt].fn1,ep);
        strcpy(tx[tt].ln2,ep);
        strcpy(tx[tt].pass2,ep);
        strcpy(tx[tt].gen2,ep);
    }
    else if(i==3)
    {
        strcpy(tx[tt].fn3,ep);
        strcpy(tx[tt].ln3,ep);
        strcpy(tx[tt].pass3,ep);
        strcpy(tx[tt].gen3,ep);
    }
    tx[tt].HMT--;
    printf("\n\nyour one ticket was delete successfully");
    savetic();
}
savetic()
{
    tc=fopen("ticketinfo.txt","w");
    for (int i=0; i<=10; i++)
    {
        tx[i].fn1;
        tx[i].ln1;
        tx[i].pass1;
        tx[i].gen1;

        tx[i].fn2;
        tx[i].ln2;
        tx[i].pass2;
        tx[i].gen2;

        tx[i].fn3;
        tx[i].ln3;
        tx[i].pass3;
        tx[i].gen3;

        tx[i].mail;
        tx[i].HMT;

        fwrite(&tx[i],sizeof(tx[i]),1,tc);
    }
    fclose(tc);
    printf("DONE");
}

viewtic()
{
    tv=fopen("ticketinfo.txt","r");
    if(tv==NULL)
    {
        ddd();
    }
    else
    {
        while(!feof(fileMC))
        {
            for (int i=0; i<=10; i++)
            {
                fread(&tx[i],sizeof(tx[i]),1,tv);
                tx[i].fn1;
                tx[i].ln1;
                tx[i].pass1;
                tx[i].gen1;

                tx[i].fn2;
                tx[i].ln2;
                tx[i].pass2;
                tx[i].gen2;

                tx[i].fn3;
                tx[i].ln3;
                tx[i].pass3;
                tx[i].gen3;

                tx[i].mail;
                tx[i].HMT;
            }
        }
    }
    fclose(tv);
    printf("DONE");
    getch();
}
ddd()
{
    char ep[10]= {"EMP"};
    for(int i=0; i<=100; i++)
    {
        strcpy(tx[i].fn1,ep);
        strcpy(tx[i].ln1,ep);
        strcpy(tx[i].pass1,ep);
        strcpy(tx[i].gen1,ep);

        strcpy(tx[i].fn2,ep);
        strcpy(tx[i].ln2,ep);
        strcpy(tx[i].pass2,ep);
        strcpy(tx[i].gen2,ep);

        strcpy(tx[i].fn3,ep);
        strcpy(tx[i].ln3,ep);
        strcpy(tx[i].pass3,ep);
        strcpy(tx[i].gen3,ep);

        strcpy(tx[i].mail,ep);
        tx[i].HMT = 0;
    }

}
