#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

struct var
{
    char num[20];
    char pass[10];
    int tk;
} s;
void bkash();
void nagad();
void rocket();
void credit();
FILE *payment;
int main()
{
    system("COLOR D");
    int chose;
    printf("                                 *************************************                                   \n");
    printf("                                           Payment Method                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\t\t\t\t\t1. Bkash\n\n");
    printf("\t\t\t\t\t2. Nagad\n\n");
    printf("\t\t\t\t\t3. Rocket\n\n");
    printf("\t\t\t\t\t4. Credit Card\n\n");
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
            usleep(40);
        }
        bkash();
        break;
    case 2:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        nagad();
        break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        rocket();
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        credit();
        break;
    default:
        printf("\t\t\t\t\tWrong Choice!!!!\n\n");
        getch();
        break;
    }
}

bkash()
{
    system("COLOR E");
    system("CLS");
    char p[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                          Welcome To Bkash                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\n\n\t\t\t\t\tEnter Your Bkash Number:");
    scanf("%s", s.num);
    if(strlen(s.num)==11)
    {
        printf("\n\t\t\t\t\tEnter Your Bkash Pin:");
        while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            s.pass[k]='\0';
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
           s.pass[k]=ch;
            k++;
            printf("*");
        }
    }
        fwrite(&s,sizeof(s),1,payment);
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
        printf("\t\t\t\t\tEnter amount of payment:");
        scanf("%d", &s.tk);
        printf("\n\t\t\t\t\tEnter Bkash pin For Confirm:");
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
        fread(&s,sizeof(s),1,payment);
        printf("\n\n\n\n\n\n\n\t\t\t\t\t");
        for(int i=0; i<40; i++)
        {
            printf("_");
            usleep(40);
        }
        if(strcmp(p,s.pass)==0)
        {
            printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", s.tk);
            getch();
            return 0;
        }
        else
        {
            printf("\n\t\t\t\t\tWrong Passward!!\n");
            getch();
            bkash();
        }
        fclose(payment);
    }
    else
    {
        printf("\n\t\t\t\t\tInvalid Number!!\n\n\t\t\t\t\tPlease Enter Your Valid BKASH Number.");
        getch();
        bkash();
    }

}

nagad()
{
    system("COLOR D");
    system("CLS");
    char ps[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                           Welcome To NAGAD                                               \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tEnter Your NAGAD Number:");
    scanf("%s", s.num);
    if(strlen(s.num)==11)
    {
    printf("\n\t\t\t\t\tEnter Your NAGAD Pin:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            s.pass[k]='\0';
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
           s.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&s,sizeof(s),1,payment);
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
    printf("\n\t\t\t\t\tEnter amount of payment:");
    scanf("%d", &s.tk);
    printf("\n\t\t\t\t\tEnter NAGAD pin For Confirm:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            ps[i]='\0';
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
           ps[i]=ch;
            i++;
            printf("*");
        }
    }
    fread(&s,sizeof(s),1,payment);
    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    if(strcmp(ps,s.pass)==0)
    {
        printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", s.tk);
        getch();
        return 0;
    }
    else
    {
        printf("\n\t\t\t\t\tWrong Passward!!\n");
        getch();
        nagad();
    }
    fclose(payment);
    }
    else
    {
        printf("\n\t\t\t\t\tInvalid Number!!\n\n\t\t\t\t\tPlease Enter Your Valid NAGAD Number.");
        getch();
        nagad();
    }
}

rocket()
{
    system("COLOR A");
    system("CLS");
    char pas[10],ch;
    int i=0,k=0;
    payment=fopen("payment.txt","w");
    printf("                                 *************************************                                   \n");
    printf("                                          Welcome To Rocket                                                \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tEnter Your Rocket Number:");
    scanf("%s", s.num);
    if(strlen(s.num)==11)
    {
    printf("\n\t\t\t\t\tEnter Your Rocket Pin:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            s.pass[k]='\0';
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
           s.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&s,sizeof(s),1,payment);
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
    printf("\n\t\t\t\t\tEnter amount of payment:");
    scanf("%d", &s.tk);
    printf("\n\t\t\t\t\tEnter Rocket pin For Confirm:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            pas[i]='\0';
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
           pas[i]=ch;
            i++;
            printf("*");
        }
    }
    fread(&s,sizeof(s),1,payment);
    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    if(strcmp(pas,s.pass)==0)
    {
        printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", s.tk);
        getch();
        return 0;
    }
    else
    {
        printf("\n\t\t\t\t\tWrong Passward!!\n");
        getch();
        rocket();
    }
    fclose(payment);
    }
    else
    {
        printf("\n\t\t\t\t\tInvalid Number!!\n\n\t\t\t\t\tPlease Enter Your Valid BKASH Number.");
        getch();
        rocket();
    }
}
credit()
{
    system("CLS");
    char crdt[20];
    char ps[10],ch;
    int i=0,k=0;
    printf("                                    *******************************                                   \n");
    printf("                                             CREDIT CARD                                                \n");
    printf("                                    *******************************                                   \n\n");
    printf("\t\t\t\t\tEnter Your Credit card Number: ");
    scanf("%s", s.num);
    if(strlen(s.num)==15||strlen(s.num)==16)
    {
    printf("\t\t\t\t\tEnter Your pin: ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            s.pass[k]='\0';
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
           s.pass[k]=ch;
            k++;
            printf("*");
        }
    }
    fwrite(&s,sizeof(s),1,payment);
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
    printf("                                        Paybill by Credit Card                                           \n");
    printf("                                 *************************************                                   \n\n");
    printf("\n\t\t\t\t\tYou are able to make payment.\n\n");
    printf("\n\t\t\t\t\tEnter amount of payment: ");
    scanf("%d", &s.tk);
    printf("\n\t\t\t\t\tEnter pin For Confirm: ");
    while(1)
    {
        ch=getch();
        if(ch==ENTER)
        {
            ps[i]='\0';
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
           ps[i]=ch;
            i++;
            printf("*");
        }
    }
    fread(&s,sizeof(s),1,payment);
    printf("\n\n\n\n\n\n\n\t\t\t\t\t");
    for(int i=0; i<40; i++)
    {
        printf("_");
        usleep(40);
    }
    if(strcmp(ps,s.pass)==0)
    {
        printf("\n\t\t\t\t\t    Your Payment %d Taka Successful..\n", s.tk);
        getch();
        return 0;
    }
    else
    {
        printf("\n\t\t\t\t\tWrong Passward!!\n");
        getch();
        credit();
    }
    fclose(payment);
    }
    else
    {
        printf("\n\t\t\t\t\tInvalid Number!!\n\n\t\t\t\t\tPlease Enter Your Valid CREDIT CARD Number.");
        getch();
        credit();
    }
}

