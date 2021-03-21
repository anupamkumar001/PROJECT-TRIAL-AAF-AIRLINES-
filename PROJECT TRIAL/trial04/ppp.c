#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

pp();
mro();
viewfile2();
FILE*MM;
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

int main()
{
  viewfile2();
}


mro()
{
    MM=fopen("infor.txt","w");
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
viewfile2()
{
    MM=fopen("infor.txt","r");
    if(MM==NULL)
    {
        printf("\n\n\t\t\t\tPLEASE WAIT, YOUR SOFTWARE IS CONNECTING TO OUR SERVER\n\n\n");
        pp();
        mro();
    }
    else
    {
        while(!feof(MM))
        {
            fread(&def,sizeof(def),1,MM);
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
    fclose(MM);
    printf("%d",def.padestin);
    getch();
}
pp()
{
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
