#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100

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
struct loginsystem2
{
    char user[50];
    char pass[20];
    char co[20];
} s[MAX];
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
FILE *adf;

int pay(int t);
int bkash(int t);
int nagad(int t);
int rocket(int t);
FILE *payment;

savingfile(char TI[],char DT[],char com[],char PA[],int A[],int j,int tk,int k,char FD[],char FC[]);
savingcharter(char NM[],char FC[],char CM[],int P,int H,char DI[],int FT);
savecargo(char CC[],int p,int DE,char F[] ,char TO[]);

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

int main ()
{
    basic();
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
    for(int i=1; i<2; i++)
    {
        printf("\n\t\t\t\t\tENTER USERNAME >> ");
        scanf("%s",&s[i].user);
        printf("\n\t\t\t\t\tENTER PASSWORD >> ");
        scanf("%s",&s[i].pass);
        printf("\n\t\t\t\t\tENTER SECRET CODE >> ");
        scanf("%s",&s[i].co);

        printf("\n\t\t\t\t\tCONFORM PASSWORD :");
        scanf("%s",&cp);

        if(strcmp(s[i].pass,cp)==0)
        {
            printf("\n\t\t\t\t\tREGISTRATION SUCCESSFUL...\n");
            fwrite(&s[i],sizeof(s[i]),2,f);
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
    char c;
    char username[50];
    char passward[20];

    char code[20];
    f=fopen("info.txt","r");
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        PUBLIC LOGIN                                  \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME:");
    scanf("%s",&username);
    printf("\n\t\t\t\t\tPASSWORD:");
    scanf("%s",&passward);
    printf("\n\t\t\t\t\tCODE:");
    scanf("%s",&code);
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
            while((strcmp(passward,sr[i].passr)==0)&&(strcmp(username,sr[i].userr)==0))
            {
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
                printf("\t\t\t\tWAIT A MOMENT........\n");
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
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n");
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
                printf("\t\t\t\tWAIT A MOMENT.......\n");
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
                            printf("\t\t\t\tFOUND YOUR ACCOUNT\n");
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
    printf("                                                 AAF Airlines                                 \n");
    printf("                                        '''''''''''''''''''''''''''''''                       \n\n");
    printf(" \n\t\t\t\t\t 1.PURCHASE TICKET\n");
    printf("\t\t\t\t\t 2.ABOUT US\n");
    printf("\t\t\t\t\t 3.LOGOUT\n");
    printf("\t\t\t\t\t 4.EXIT\n");
    printf("\t\t\t\t\t 5.USER MANUAL\n");
    printf("\n\t\t\t\t\t ENTER YOUR CHOICE:");
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
        vplane();
        break;
    case 2:
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
    case 4:
        printf("\n\n\n\n\n\n\n\n\t\t\t\t\t");
        printf("\t\t\t\t\tTHANKS FOR USING OUR SERVICE....\n\n\n\n\n\n\n\n");
        break;
    case 5:
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
    printf("\n\t\t\t\t\tLAST NAME:");
    scanf("%s",&ln);
    printf("\n\t\t\t\t\tGENDER : ");
    scanf("%s",&gender);
    printf("\n\t\t\t\t\tBIRTH DAY-MONTH-YEAR :");
    scanf("%d%d%d", &day,&month,&year);
    printf("\n\t\t\t\t\tEMAIL :");
    scanf("%s",&mail);
    printf("\n\t\t\t\t\tUSERNAME:");
    scanf("%s",&v.aduser);
    printf("\n\t\t\t\t\tPASSWORD:");
    scanf("%s",&v.adpass);
    printf("\n\t\t\t\t\tRE-TYPE PASSWORD :");
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
    char c;
    int i,j,l,m;
    char username[50];
    char passward[20];
    adf=fopen("adinfo.txt","r");

    printf("                                        '''''''''''''''''''''''''''''                       \n");
    printf("                                                 ADMIN LOGIN                                \n");
    printf("                                        '''''''''''''''''''''''''''''                       \n\n");
    printf("\n\n\t\t\t\t\tUSERNAME : ");
    scanf("%s", username);
    printf("\n\t\t\t\t\tPASSWORD :");
    scanf("%s", passward);
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
    printf("\t\t\t\t\t ENTER YOUR CHOICE:");
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
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\tENTER YOUR USERNAME :");
        scanf("%s",&name);
        printf("\t\t\t\tWAIT A MOMENT........\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(name,v.aduser)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT \n");
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
            usleep(20);
        }
        system("CLS");
        printf("                               '''''''''''''''''''''''''''''''                       \n");
        printf("                                      ADMIN RESET PANEL                                 \n");
        printf("                               '''''''''''''''''''''''''''''''                       \n\n");
        printf("\n\n\t\t\t\t ENTER YOUR PASSWORD :");
        scanf("%s",&pas);
        printf("\t\t\t\tWAIT A MOMENT.......\n");
        sleep(1);
        fread(&v,sizeof(v),1,adf);
        if((strcmp(pas,v.adpass)==0))
        {
            printf("\t\t\t\tFOUND YOUR ACCOUNT\n");
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
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\n\t\t\t\t\tENTER YOUR BKASH NUMBER :");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tENTER YOUR BKASH PIN :");
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
    printf("                                            BKASH PAYBILL                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\t\t\t\t\t\n\n");
    printf("\t\t\t\t\tYOUR BILL: %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
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
    printf("\n\t\t\t\t\tENTER YOUR NAGAD NUMBER:");
    scanf("%s", z.num);
    printf("\n\t\t\t\t\tENTER YOUR NAGAD PIN:");
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
    printf("\t\t\t\t\tYOUR BILL >>: %d TK\n\n\t\t\t\t\tENTER AMOUNT :",t);
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
            printf("\n\t\t\t\t\tYOUR  %d TK SENT SUCCESSFUL..\n", z.tk);
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
    printf("\n\t\t\t\t\tENTER YOUR ROKET NUMBER:");
    scanf("%s",&z.num);
    printf("\n\t\t\t\t\tENTER YOUR ROKET PIN :");
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
    printf("\t\t\t\t\tYOUR BILL: %d TK\n\n\t\t\t\t\tENTER AMOUNT:",t);
    scanf("%d",&z.tk);
    if(z.tk == t)
    {
        printf("\n\t\t\t\t\tENTER ROKET PIN FOR CONFORM:");
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
            printf("\n\n\t\t\t\t\tYOUR  %d TK SENT SUCCESSFUL..\n", z.tk);
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
    char mail[30];
    int v;
    int t;
    int ia;
    FILE*file;
    file=fopen("aaf.txt","a");
    if(file==NULL)
    {
        printf("\t\t\t\tFILE DOES NOT EXIST.") ;
    }

    else
    {
        for(ia=1; ia<=j; ia++)
        {
            system("CLS");
            printf("                                 *************************************                                   \n");
            printf("                                         INPUT PASSENGER DATA                                                \n");
            printf("                                 *************************************                                   \n\n\n");
            printf("\n\t\t\t\tPASSENGER %d :",ia);
            printf("\n\t\t\t\tENTER FIRST NAME:");
            scanf("%s",&a[ia].fn);

            printf("\n\t\t\t\tENTER LAST NAME:");
            scanf("%s",&a[ia].ln);

            printf("\n\t\t\t\tENTER (PASSPORT/NID) NO:");
            scanf("%s",&a[ia].pass);

            printf("\n\t\t\t\tENTER GENDER:");
            scanf("%s",&a[ia].gen);

        }

        printf("\n\t\t\t\tENTER MAIL ADDRESS:");
        scanf("%s",&mail);

    }
    fprintf(file,"\n\n\n\t\t\t\t\t  AAF AIRLINES \n\t\t\t\tTHE TRUSTED AIRLINES BOOKING SERVICE \n\n");
    for(ia=1; ia<=j; ia++)
    {
        fprintf(file,"\n\t\t\t\tPASSENGER NO   : %d\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",ia,a[ia].fn,a[ia].ln,a[ia].pass,a[ia].gen);
    }
    fprintf(file,"\n\t\t\t\tMAIL ADDRESS   : %s\n",mail);
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
    fprintf(file,"\t\t\t\tNO OF PASSENGER: %d\n",j);
    fprintf(file,"\t\t\t\tSIT NO         : ");
    for(int i=0; i<j; i++)
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
    for(ia=1; ia<=j; ia++)
    {
        printf("\n\t\t\t\tPASSENGER NO   : %d\n\t\t\t\tNAME           : %s %s\n\t\t\t\tPASSPORT/NID NO: %s\n\t\t\t\tGENDER         : %s\n\n",ia,a[ia].fn,a[ia].ln,a[ia].pass,a[ia].gen);
    }
    printf(file,"\n\t\t\t\tMAIL ADDRESS   : %s\n",mail);
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
    printf("\t\t\t\tNO OF PASSENGER: %d\n",j);
    printf("\t\t\t\tSIT NO         : ");
    for(int i=0; i<j; i++)
    {
        if(A[i]!=0)
        {
            printf("|%d|",A[i]);
        }
    }
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
savecargo(char CC[],int p,int DE,char F[] ,char TO[])
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
        printf("\n\t\t\t\tINPUT WET :");
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
            printf("\n\t\t\t\t%d>>>>%s\n",i,b[i].time);
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
            printf("\n\t\t\t\t%d>>>>%s\n",i,b[i].comn);
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
            printf("\n\t\t\t\t%d>>>>%s\n",i,b[i].food);
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
            printf("\n\t\t\t\t%d>>>>%s\n",i,b[i].faci);
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
            printf("\n\n\t\t\t\tCODE >> %d\n\t\t\t\tDESTINATION >> %s\n\t\t\t\tTIME >> %s\n\t\t\t\tCOMPANY >> %s\n\t\t\t\tFLIGHT NAME >> %s\n\t\t\t\tPRICE >> %d\n\t\t\t\tFOOD >> %s\n\t\t\t\tFACILITIES >> %s\n"
                   ,i,c[i].destinp,c[i].timep,c[i].comnp,c[i].pname,c[i].pricep,c[i].foodp,c[i].facip);
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

    system("CLS");

    char B737_8[20]="BOEING 737-800";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        AAF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\n\t\t\t\tWELCOME  TO %s BOEING 737-800,\n\t\t\t\t\n",com);
    printf("\n\t\t\t\tTIME : %s,\n\t\t\t\tDESTINATION:%s\n\n",TI,DT);
    int i,j,A[22];
    int  B[38]= {0};
    int k;
    printf("\n\t\t\t\tHOW MANY SIT YOU WANT TO BOOK :");
    scanf("%d",&j);
    system("CLS");
    for (i=0; i<j; i++)
    {
        system("CLS");
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
    savingfile(TI,DT,com,B737_8,A,j,tk,k,FD,FC);

}
B777_3(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 02 36
{

    system("CLS");

    char B777_3[20]="BOEING 777-300 ER";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        AAF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\t\t\t\tWELCOME TO %s BOEING 777-300ER,\n\t\t\t\t\n",com);
    printf("\n\t\t\t\tTIME : %s,\n\t\t\t\tDESTINATIOM:%s\n\n",TI,DT);
    int i,j,A[40];
    int  B[38]= {0};
    int k;
    printf("\n\t\t\t\tHOW MANY SIT YOU WANT TO BOOK :");
    scanf("%d",&j);
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
    savingfile(TI,DT,com,B777_3,A,j,tk,k,FD,FC);

}
B787_8(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 03 8
{

    system("CLS");

    char B787_8[20]="BOEING 787-800";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        ASF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\t\t\t\tWELCOME TO  %s BOEING 787-800,\n\t\t\t\t\n",com);
    printf("\n\t\t\t\tTIME : %s,\n\t\t\t\tDESTINATIOM:%s\n\n",TI,DT);
    int i,j,A[10];
    int  B[10]= {0};
    int k;
    printf("\n\t\t\t\tHOW MANY SIT DO YOU WANT TO BOOK :");
    scanf("%d",&j);
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
    savingfile(TI,DT,com,B787_8,A,j,tk,k,FD,FC);

}
B787_9(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 04 48
{

    system("CLS");

    char B787_9[20]="BOEING 787-900";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        ASF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\t\t\t\tWELCOME TO %s BOEING 787-900,\n\t\t\t\t\n",com);
    printf("\n\t\t\t\tTIME : %s,\n\t\t\t\tDESTINATIOM:%s\n\n",TI,DT);
    int i,j,A[50];
    int  B[50]= {0};
    int k;
    printf("\n\t\t\t\tHOW MANY SIT DO YOU WANT TO BOOK :");
    scanf("%d",&j);
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
    savingfile(TI,DT,com,B787_9,A,j,tk,k,FD,FC);

}
BD8Q_4(char TI[],char DT[],char com[],char FD[],char FC[],int tk) //plane 05 24
{

    system("CLS");

    char BD8Q_4[30]="BOMBARDIER DASH 8 Q400";
    printf("                               '''''''''''''''''''''''''''''''                       \n");
    printf("                                        ASF AIRLINES                                 \n");
    printf("                               '''''''''''''''''''''''''''''''                       \n\n");

    printf("\t\t\t\tWELCOME TO  %s BOMBARDIER DASH 8Q-400,\n\t\t\t\t\n",com);
    printf("\n\t\t\t\tTIME : %s,\n\t\t\t\tDESTINATIOM:%s\n\n",TI,DT);
    int i,j,A[30];
    int B[25]= {0};
    int k;
    printf("\n\t\t\t\tHOW MANY SIT YOU WANT TO BOOK :");
    scanf("%d",&j);
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
    savingfile(TI,DT,com,BD8Q_4,A,j,tk,k,FD,FC);
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
    printf("\t\t\t\t\t 5.EXIT\n\n");
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
        printf("\t\t\t\t\tTHANKS FOR USING OUR SERVICE....\n\n\n\n\n\n\n\n");
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
    printf("\n");
    for(int i=0; i<20; i++)
    {
        if(i==2)
        {
            printf("THE");
            usleep(90000);
        }
        else if(i==4)
        {
            printf("   TRUSTED");
            usleep(40000);
        }
        else if(i==8)
        {
            printf("   AIRLINES ");
            usleep(40000);
        }
        else if(i==1)
        {
            printf("\n\n\t\t\t\t");
            usleep(40000);
        }
        else if(i==10)
        {
            printf("    BOOKING ");
            usleep(40000);
        }
        else if(i==12)
        {
            printf("  SERVICE");
            usleep(40000);
        }
        else
        {
            printf(" ");
            usleep(40000);
        }
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
        adding();
    }
    else if(n==2)
    {
        system("CLS");
        editing();
    }
    else if(n==3)
    {
        system("CLS");
        viewing();
    }
    else if(n==4)
    {
        system("CLS");
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
    printf("\t\t\t\t\t 3.FORGET (USERNAME/PASSWORD)\n");
    printf("\t\t\t\t\t 4.HOME PAGE\n\n");
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
        adforgot();
        break;
    case 4:
        home();
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
            passenger();
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
    if(n==1)
    {
        B737_8(TI,DT,com,FD,FC,tk);
    }
    else if(n==2)
    {
        B777_3(TI,DT,com,FD,FC,tk);
    }
    else if(n==3)
    {
        B787_8(TI,DT,com,FD,FC,tk);
    }
    else if(n==4)
    {
        B787_9(TI,DT,com,FD,FC,tk);
    }
    else if(n==5)
    {
        BD8Q_4(TI,DT,com,FD,FC,tk);
    }

}

basic()
{
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
    strcpy(b[1].cfaci,cp1);
    strcpy(b[2].cfaci,cp2);
    strcpy(b[3].cfaci,cp3);


    //COMPANY WORK
    strcpy(b[1].comn,c1);
    strcpy(b[2].comn,c2);
    strcpy(b[3].comn,c3);
    strcpy(b[4].comn,c4);
    strcpy(b[5].comn,c5);

    //TIME TABLE WORK
    strcpy(b[1].time,t12);
    strcpy(b[2].time,t01);
    strcpy(b[3].time,t03);
    strcpy(b[4].time,t04);
    strcpy(b[5].time,t06);
    strcpy(b[6].time,t07);
    strcpy(b[7].time,t09);
    strcpy(b[8].time,t10);

    //PLANE NAME WORK
    strcpy(b[1].plane,p1);
    strcpy(b[2].plane,p2);
    strcpy(b[3].plane,p3);
    strcpy(b[4].plane,p4);
    strcpy(b[5].plane,p5);

    //FOOD WORK
    strcpy(b[1].food,f1);
    strcpy(b[2].food,f2);
    strcpy(b[3].food,f3);
    strcpy(b[4].food,f4);
    strcpy(b[5].food,f5);

    //FACILITIES WORK
    strcpy(b[1].faci,fc1);
    strcpy(b[2].faci,fc2);
    strcpy(b[3].faci,fc3);

    //DESTINATION WORK
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
    printf("\t\t\t\t\t\tDESTINATION \n\n");
    for(int i=1; i<=def.padestin; i++)
    {
        printf("\n\t\t\t\t\t%d >> %s\n",i,b[i].destin);
    }
    printf("\t\t\t\t\tENTER YOUR DESTINATION CODE :  ");
    scanf("%d",&ab);
    system("CLS");
    system("COLOR C");
    printf("\t\t\t\t\t\tFLIGHTS INFORMATION\n\n");
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
    printf("\t\t\t\t\t\nENTER YOURT FAVORITE FLIGHTS CODE : ");
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
        printf("\t\t\t\t\tPRICE        : %d TK\n",d[i].chprice);
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
    printf("\t\t\t\t\tPRICE       : %d TK\n",d[aa].chprice);
    printf("\t\t\t\t\tCOMPANY     : %s\n\n",d[aa].ccp);
    printf("\n\n\t\t\t\tEnter STARTING time :  ");
    scanf("%d",&cc);
    printf("\n\n\t\t\t\tENTER HOW MANY HOUR  :  ");
    scanf("%d",&bb);
    printf("\n\n\t\t\t\tENTER PICUP AREA :  ");
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
    int ib=def.company,j,k;
    printf("\n\n\t\t\t\tHOW MANY COMPANY DO YOU WANT TO ADD: ");
    scanf("%d",&j);
    k=j+ib;
    for(ib=def.company+1; ib<=k; ib++)
    {
        printf("\n\t\t\t\tENTER COMPANY NAME :  ");
        scanf("%s",b[ib].comn);
    }
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
    getch();
    adminp();
}


