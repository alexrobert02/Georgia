#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include <stdlib.h>
#include <ctime>
#include <cstring>
using namespace std;
#define MAX 256
#define MIL 1000000000
struct Auxiliar
{
    int contor;
};
struct Cursor
{
    int x;
    int y;
};
struct Grafica
{
    char text[MAX];
    char testhighscore[MAX];
    char sirjoc[MAX];
    int contorgrafic;
    long long numarchestie;
    char mesajafisare[MAX];
    char S_initial[MAX];
    char tasta;
    char S_[MAX];
    char mesaj_[MAX];
    char MultimeDeCaractereAcceptabile[MAX]="0123456789abcdefghijklmnopqrstuvwxyz~!`@#$%+-^&\\()_=[]',;.?<>:;{} ";
    int depasire;
    char Enter=13;
    char BackSpace=8;
    char Escape=27;
    char s2[2];
};
struct NumarSir
{
    long long rezerva;
    long long number;
    int rezultat;
    int partial;
    int maimic;
    int nrmare;
    int unice;
    char* plin;
};
struct Number
{
    int litera;
    long long numar;
    int parte;
};
struct Numere
{
    long long nrgame;
    long long nrtraducator;
    char numarsir[MAX];
    char copie[MAX];
    char sirsecund[MAX];
};
struct Afisare
{
    int i;
    int m;
    int x;
    int y;
    int z;
};
struct Structura
{
    int highscore;
    int random;
    bool parametru;
    Numere instanta;
    long long parti;
    NumarSir tools;
    Number pachet;
    char sir[MAX];
    char test[MAX];
    Afisare coordonate;
    Cursor mouse;
    Auxiliar pagina;
    Grafica meniuri;
    char* jumatate;
}Programul;
void afisaresimboluri(char* sir)
{
    Programul.coordonate.i=0;
    Programul.coordonate.m=100;
    Programul.coordonate.x=Programul.coordonate.m;
    Programul.coordonate.y=300;
    Programul.coordonate.z=2;
    while(sir[Programul.coordonate.i])
    {
        if(sir[Programul.coordonate.i]=='c')
        {
            readimagefile("images/c.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=30/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='d')
        {
            readimagefile("images/d.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+50/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=50/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='e')
        {
            readimagefile("images/e.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=30/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='i')
        {
            readimagefile("images/i.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+35/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=35/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='l')
        {
            readimagefile("images/l.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+60/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=60/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='m')
        {
            readimagefile("images/m.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=30/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='n')
        {
            readimagefile("images/n.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+35/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=35/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='o')
        {
            readimagefile("images/o.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+45/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=45/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='v')
        {
            readimagefile("images/v.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=30/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='r')
        {
            readimagefile("images/r.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+40/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=40/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]==' ')
        {
            readimagefile("space.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+25/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=25/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='u')
        {
            readimagefile("images/u.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+45/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=45/Programul.coordonate.z;
        }
        else if(sir[Programul.coordonate.i]=='t')
        {
            if(sir[Programul.coordonate.i+1]=='s')
            {
                readimagefile("images/ts.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+40/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=40/Programul.coordonate.z;
                Programul.coordonate.i++;
            }
            else if(sir[Programul.coordonate.i+1]<'a' || sir[Programul.coordonate.i+1]>'z')
            {
                readimagefile("images/tcuvirgula.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+45/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=45/Programul.coordonate.z;
                Programul.coordonate.i++;
            }
            else
            {
                readimagefile("images/t.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+50/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=50/Programul.coordonate.z;
            }
        }
        else if(sir[Programul.coordonate.i]=='k')
        {
            if(sir[Programul.coordonate.i+1]=='h')
            {
                readimagefile("images/kh.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+40/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=40/Programul.coordonate.z;
                Programul.coordonate.i++;
            }
            else
            {
                readimagefile("images/k.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=30/Programul.coordonate.z;
            }
        }
        else if(sir[Programul.coordonate.i]=='s')
        {
            if(sir[Programul.coordonate.i+1]=='h')
            {
                readimagefile("images/sh.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+30/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=30/Programul.coordonate.z;
                Programul.coordonate.i++;
            }
            else
            {
                readimagefile("images/s.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+35/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
                Programul.coordonate.x+=35/Programul.coordonate.z;
            }
        }
        else if(sir[Programul.coordonate.i]=='a')
        {
            readimagefile("images/a.jpg", Programul.coordonate.x, Programul.coordonate.y, Programul.coordonate.x+25/Programul.coordonate.z, Programul.coordonate.y+60/Programul.coordonate.z);
            Programul.coordonate.x+=25/Programul.coordonate.z;
        }
        Programul.coordonate.i++;
        if(Programul.coordonate.x>900)
        {
            Programul.coordonate.x=Programul.coordonate.m;
            Programul.coordonate.y+=60/Programul.coordonate.z;

        }
    }
}
void constants(long long number, char* sir)
{
    switch(number)
    {
        case 0: strcat(sir, "nuli");
            break;
        case 1: strcat(sir, "erti");
            break;
        case 2: strcat(sir, "ori");
            break;
        case 3: strcat(sir, "sami");
            break;
        case 4: strcat(sir, "otkhi");
            break;
        case 5: strcat(sir, "khuti");
            break;
        case 6: strcat(sir, "ekvsi");
            break;
        case 7: strcat(sir, "shvidi");
            break;
        case 8: strcat(sir, "rva");
            break;
        case 9: strcat(sir, "tskhra");
            break;
        case 10: strcat(sir, "ati");
            break;
        case 20: strcat(sir, "otsi");
            break;
        case 100: strcat(sir, "asi");
            break;
        case 1000: strcat(sir, "atasi");
            break;
        case 1000000: strcat(sir, "milioni");
            break;
        case 1000000000: strcat(sir, "miliardi");
            break;
    }
}
void under_20(long long number, char* sir)
{
    if(number>10)
    {
        switch(number%10)
        {
            case 3:
            {
                strcat(sir, "t");
                strcat(sir, "sa");
            }
                break;
            case 8:
            {
                strcat(sir, "tvr");
                strcat(sir, "a");
            }
                break;
            case 7:
            {
                strcat(sir, "ch");
                strcat(sir, "vid");
            }
                break;
            case 9:
            {
                constants(number%10, sir);
            }
                break;
            default:
            {
                strcat(sir, "t");
                constants(number%10, sir);
                sir[strlen(sir)-1]=0;
            }
                break;
        }
        strcat(sir, "met'i");
    }
    else
    {
        constants(number, sir);
    }
}
void divided_by_20(long long number, char* sir)
{
    if(number!=20)
    {
        constants(number/20, sir);
        sir[strlen(sir)-1]=0;
        if(number/20==3)
        {
            sir[strlen(sir)-1]=0;
        }
        strcat(sir, "m");
    }
    constants(20, sir);
}
void under_100(long long number, char* sir)
{
    if(number%20==0)
    {
        divided_by_20(number, sir);
    }
    if(number<20)
    {
        under_20(number, sir);
    }
    if(number>20 && number%20!=0)
    {
        divided_by_20(number-number%20, sir);
        sir[strlen(sir)-1]=0;
        number=number%20;
        strcat(sir, "da");
        if(number<=10)
        {
            constants(number, sir);
        }
        else
        {
            under_20(number, sir);
        }
    }
}
void divided_by_100(long long number, char* sir)
{
    if(number!=100)
    {
        constants(number/100, sir);
        if(number/100!=9 && number/100!=8)
        {
            sir[strlen(sir)-1]=0;
        }
    }
    constants(100, sir);
}

void under_1000(long long number, char* sir)
{
    if(number>=100)
    {
       if(number%100!=0)
       {
            divided_by_100(number-number%100, sir);
            sir[strlen(sir)-1]=0;
            strcat(sir," ");
            under_100(number%100, sir);
       }
       else
       {
           divided_by_100(number, sir);
       }
    }
    else
    {
        under_100(number, sir);
    }
}
 void constructie(long long number, int tip)
{
    strcpy(Programul.sir, "");
    Programul.parti=MIL;
    if(number==0)
    {
        constants(0, Programul.sir);
    }
    else
    {
        while(Programul.parti>=1000 && number!=0)
        {
            if(number/Programul.parti!=0)
            {
                if(number/Programul.parti!=1)
                {
                    under_1000(number/Programul.parti, Programul.sir);
                    strcat(Programul.sir, " ");
                }
                constants(Programul.parti, Programul.sir);
                strcat(Programul.sir, " ");
                number=number%Programul.parti;
            }
            Programul.parti=Programul.parti/1000;
        }
        if(number!=0)
        {
            if(number<1000)
            {
                Programul.sir[strlen(Programul.sir)-2]=0;
            }
            strcat(Programul.sir, " ");
            under_1000(number, Programul.sir);
        }
    }
    if(tip==1)
    {
        if(Programul.sir[0]==' ')
        {
            strcpy(Programul.sir, Programul.sir+1);
        }
        if(Programul.sir[strlen(Programul.sir)-1]==' ')
        {
            Programul.sir[strlen(Programul.sir)-1]='\0';
        }
        strcpy(Programul.test,Programul.sir);
    }
    else if(tip==2)
    {
        strcpy(Programul.instanta.sirsecund, Programul.sir);
    }
    strcpy(Programul.sir, "");
}
long long sirtonumber(char* numarsir)
{
    Programul.pachet.litera=0;
    Programul.pachet.numar=0;
    while(numarsir[Programul.pachet.litera]!='\0')
    {
        if(numarsir[Programul.pachet.litera]>='0' && numarsir[Programul.pachet.litera]<='9')
        {
            Programul.pachet.parte=0;
            Programul.pachet.parte=numarsir[Programul.pachet.litera]-'0';
            Programul.pachet.numar=Programul.pachet.numar*10+Programul.pachet.parte;
            Programul.pachet.litera++;
        }
        else
        {
            return -1;
        }
    }
    return Programul.pachet.numar;
}
int unitare(char* bucatasir)
{
    Programul.tools.unice=0;
    if(strstr(bucatasir, "ert"))
    {
        Programul.tools.unice=1;
    }
    else if(strstr(bucatasir, "or"))
    {
        Programul.tools.unice=2;
    }
    else if(strstr(bucatasir, "sam"))
    {
        Programul.tools.unice=3;
    }
    else if(strstr(bucatasir, "otkh"))
    {
        Programul.tools.unice=4;
    }
    else if(strstr(bucatasir, "khut"))
    {
        Programul.tools.unice=5;
    }
    else if(strstr(bucatasir, "ekvs"))
    {
        Programul.tools.unice=6;
    }
    else if(strstr(bucatasir, "shvid"))
    {
        Programul.tools.unice=7;
    }
    else if(strstr(bucatasir, "rva"))
    {
        Programul.tools.unice=8;
    }
    else if(strstr(bucatasir, "tskhra"))
    {
        Programul.tools.unice=9;
    }
    else if(strstr(bucatasir, "ati"))
    {
        Programul.tools.unice=10;
    }
    return Programul.tools.unice;
}
int mare(char* sirull)
{
    Programul.tools.nrmare=0;
    if(strstr(sirull, "atas"))
    {
        Programul.tools.nrmare=1000;
    }
    else if(strstr(sirull, "milion"))
    {
        Programul.tools.nrmare=1000000;
    }
    else if(strstr(sirull, "miliard"))
    {
        Programul.tools.nrmare=1000000000;
    }
    return Programul.tools.nrmare;
}
int maimici(char* sirul)
{
    Programul.tools.maimic=0;
    if(strstr(sirul, "otsi"))
    {
        if(unitare(sirul)==0)
        {
            Programul.tools.maimic=Programul.tools.maimic+20;
        }
        else
        {
            Programul.tools.maimic=Programul.tools.maimic+unitare(sirul)*20;
        }
    }
    else if(strstr(sirul, "otsda"))
    {
        if(sirul[1]=='t' && sirul[2]=='s')
        {
            Programul.tools.maimic=Programul.tools.maimic+20;
        }
        else
        {
            Programul.tools.maimic=Programul.tools.maimic+unitare(sirul)*20;
        }
        Programul.jumatate=strstr(sirul, "da");
        if(strstr(Programul.jumatate, "met'i"))
        {
            if(strstr(Programul.jumatate, "chvid"))
            {
                Programul.tools.maimic=Programul.tools.maimic+17;
            }
            else if(strstr(Programul.jumatate, "tvra"))
            {
                Programul.tools.maimic=Programul.tools.maimic+18;
            }
            else if(unitare(Programul.jumatate))
            {
                Programul.tools.maimic=Programul.tools.maimic+10+unitare(Programul.jumatate);
            }
        }
        else if(unitare(Programul.jumatate))
        {
            Programul.tools.maimic=Programul.tools.maimic+unitare(Programul.jumatate);
        }
    }
    else if(strstr(sirul, "met'i"))
    {
        if(strstr(sirul, "chvid"))
        {
            Programul.tools.maimic=Programul.tools.maimic+17;
        }
        else if(strstr(sirul, "tvra"))
        {
            Programul.tools.maimic=Programul.tools.maimic+18;
        }
        else if(unitare(sirul))
        {
            Programul.tools.maimic=Programul.tools.maimic+10+unitare(sirul);
        }
    }
    else if(unitare(sirul))
    {
        Programul.tools.maimic=Programul.tools.maimic+unitare(sirul);
    }
    return Programul.tools.maimic;
}
int subomie(char* plin)
{
    Programul.tools.rezultat=0;
    Programul.tools.partial=0;
    if(strstr(plin, "asi"))
    {
        if(unitare(plin)==0)
        {
            Programul.tools.partial=Programul.tools.partial+100;
        }
        else
        {
            Programul.tools.partial=Programul.tools.partial+(unitare(plin)*100);
        }
    }
    else if(strrev(plin)[0]=='s' && plin[1]=='a')
    {
        strrev(plin);
        if(unitare(plin)==0)
        {
            Programul.tools.partial=Programul.tools.partial+100;
        }
        else
        {
            Programul.tools.partial=Programul.tools.partial+(unitare(plin)*100);
        }
        plin=strtok(NULL, " ");
        if(maimici(plin))
        {
            Programul.tools.partial=Programul.tools.partial+maimici(plin);
        }
    }
    else if(maimici(strrev(plin)))
    {
        Programul.tools.partial=Programul.tools.partial+maimici(plin);
    }
    Programul.tools.rezultat=Programul.tools.rezultat+Programul.tools.partial;
    return Programul.tools.rezultat;
}
long long stringtonumber(char* sir)
{
    Programul.tools.number=0;
    Programul.tools.rezerva=0;
    Programul.tools.plin=strtok(sir, " ");
    while(Programul.tools.plin)
    {
        if(mare(Programul.tools.plin))
        {
            if(Programul.tools.rezerva==0)
            {
                Programul.tools.number=Programul.tools.number+mare(Programul.tools.plin);
            }
            else
            {
                Programul.tools.number=Programul.tools.number+mare(Programul.tools.plin)*Programul.tools.rezerva;
                Programul.tools.rezerva=0;
            }

        }
        else
        {
            Programul.tools.rezerva=Programul.tools.rezerva+subomie(Programul.tools.plin);
        }
        Programul.tools.plin=strtok(NULL, " ");
    }
    if(Programul.tools.rezerva)
    {
        Programul.tools.number=Programul.tools.number+Programul.tools.rezerva;
    }
    return Programul.tools.number;
}
void CitesteSir(int x, int y, char mesaj[MAX], char S[MAX] )
{
    Programul.meniuri.depasire=0;
    Programul.meniuri.s2[1]='\0';
    strcpy(Programul.meniuri.S_initial, "");
    Programul.meniuri.tasta='\0';
    strcpy(Programul.meniuri.S_, "");
    strcpy(Programul.meniuri.mesaj_, "");
    strcpy(Programul.meniuri.mesaj_, mesaj);
    strcpy(Programul.meniuri.S_initial, S);
    settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
    setcolor(WHITE);
    settextjustify(0, 0);
    outtextxy(x, y, Programul.meniuri.mesaj_);
    x=x+textwidth(mesaj);
    strcpy(S, "");
    strcpy(Programul.meniuri.S_, S);
    strcat(Programul.meniuri.S_, "_");
    setcolor(BLACK);
    outtextxy(x, y, Programul.meniuri.S_);
    Programul.meniuri.s2[0]=Programul.meniuri.tasta;
    strcat(S, Programul.meniuri.s2);
    strcpy(Programul.meniuri.S_, S);
    strcat(Programul.meniuri.S_, "_");
    setcolor(WHITE);
    outtextxy(x, y, Programul.meniuri.S_);
    do
    {
        Programul.meniuri.tasta=getch();
        if(Programul.meniuri.tasta==0)
        {
            Programul.meniuri.tasta=getch();
            Beep(1000, 500);
        }
        else
        {
            if(strchr(Programul.meniuri.MultimeDeCaractereAcceptabile, Programul.meniuri.tasta))
            {
                strcpy(Programul.meniuri.S_, S);
                strcat(Programul.meniuri.S_, "_");
                setcolor(BLACK);
                outtextxy(x, y, Programul.meniuri.S_);
                Programul.meniuri.s2[0]=Programul.meniuri.tasta;
                strcat(S, Programul.meniuri.s2);
                strcpy(Programul.meniuri.S_, S);
                strcat(Programul.meniuri.S_, "_");
                setcolor(WHITE);
                outtextxy(x, y, Programul.meniuri.S_);
            }
        }
        if(Programul.meniuri.tasta==Programul.meniuri.BackSpace)
        {
            if (!(strcmp(S, "")))
            {
                Beep(500,100);
            }
            else
            {
                setcolor(BLACK);
                outtextxy(x, y, Programul.meniuri.S_);
                setcolor(WHITE);
                S[strlen(S)-1]='\0';
                strcpy(Programul.meniuri.S_, S);
                strcat(Programul.meniuri.S_,"_");
                outtextxy(x, y, Programul.meniuri.S_);
                Beep(200, 20);
            }
        }
        else
        {
            if(Programul.meniuri.tasta!=Programul.meniuri.Enter && Programul.meniuri.tasta!=Programul.meniuri.Escape)
            {
                Beep(200,20);
            }
        }
        if(Programul.meniuri.depasire==0)
        {
            if(textwidth(S)>800-textwidth(mesaj))
            {
                x=50;
                y=y+textheight(S);
                Programul.meniuri.depasire=1;
                S[strlen(S)-1]='\0';
            }
        }
    } while(Programul.meniuri.tasta!=Programul.meniuri.Enter && Programul.meniuri.tasta!=Programul.meniuri.Escape);
    if (Programul.meniuri.tasta==Programul.meniuri.Escape)
    {
        strcpy(S, Programul.meniuri.S_initial);
    }
    setcolor(BLACK);
    outtextxy(x, y, Programul.meniuri.S_);
    setcolor(WHITE);
    outtextxy(x, y, S);
}
void meniu()
{
    setcolor(WHITE);
    readimagefile("images/background.jpg", 0, 0, 960, 540);
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(COMPLEX_FONT, HORIZ_DIR, 7);
    outtextxy(480, 100, "Georgia");
    settextstyle(COMPLEX_FONT, HORIZ_DIR, 4);
    outtextxy(480, 225, "Traducere");
    outtextxy(480, 300, "Joc");
    outtextxy(480, 375, "Exit");
}
void meniu_traducere()
{
    readimagefile("images/background.jpg", 0, 0, 960, 540);
    setcolor(WHITE);
    settextstyle(COMPLEX_FONT, HORIZ_DIR,5);
    strcpy(Programul.meniuri.text, "");
    strcpy(Programul.meniuri.mesajafisare, "Introduceti numarul:");
    CitesteSir(100, 150, Programul.meniuri.mesajafisare, Programul.meniuri.text);
    if(Programul.meniuri.text[0]>='0' && Programul.meniuri.text[0]<='9')
    {
        Programul.meniuri.numarchestie=sirtonumber(Programul.meniuri.text);
        if(Programul.meniuri.numarchestie>=0 && Programul.meniuri.numarchestie<=999999999999)
        {
            constructie(Programul.meniuri.numarchestie, 1);
            outtextxy(100, 250, "Traducerea in georgiana este:");
            while(textwidth(Programul.test)>860)
            {
                Programul.meniuri.contorgrafic--;
                settextstyle(COMPLEX_FONT, HORIZ_DIR, Programul.meniuri.contorgrafic);
            }
            outtextxy(100, 295, Programul.test);
            afisaresimboluri(Programul.test);

        }
        else
        {
            outtextxy(100, 250, "Numar invalid");
        }
    }
    else
    {
        strcpy(Programul.instanta.copie, Programul.meniuri.text);
        Programul.instanta.nrtraducator=stringtonumber(Programul.instanta.copie);
        constructie(Programul.instanta.nrtraducator, 2);
        if(Programul.instanta.sirsecund[0]==' ')
        {
            strcpy(Programul.instanta.sirsecund, Programul.instanta.sirsecund+1);
        }
        if(Programul.instanta.sirsecund[strlen(Programul.instanta.sirsecund)-1]==' ')
        {
            Programul.instanta.sirsecund[strlen(Programul.instanta.sirsecund)-1]='\0';
        }
        if(strcmp(Programul.instanta.sirsecund, Programul.meniuri.text)==0)
        {
            outtextxy(100,250, "Numarul tradus este: ");
            std::sprintf(Programul.test, "%d", Programul.instanta.nrtraducator);
            outtextxy(100, 280, Programul.test);
            afisaresimboluri(Programul.instanta.sirsecund);
        }
        else
        {
            outtextxy(100, 250, "Numar invalid");
        }
        strcpy(Programul.instanta.sirsecund, "");
    }
    Programul.meniuri.contorgrafic=3;
    while(textwidth(Programul.test)>860)
    {
        Programul.meniuri.contorgrafic--;
        settextstyle(COMPLEX_FONT, HORIZ_DIR, Programul.meniuri.contorgrafic);
    }
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    settextstyle(COMPLEX_FONT, HORIZ_DIR,5);
    outtextxy(480, 420, "Traduce alt numar");
    settextjustify(LEFT_TEXT, TOP_TEXT);
    outtextxy(0, 0, "Meniu");

}
void meniu_joc()
{
    readimagefile("images/background.jpg", 0, 0, 960, 540);
    setcolor(WHITE);
    settextjustify(0,0);
    settextstyle(COMPLEX_FONT, HORIZ_DIR, 3);
}
void joc()
{
    Programul.parametru=true;
    Programul.highscore=0;
    while(Programul.parametru)
    {
        srand(time(NULL));
        Programul.random=(rand()+rand())%rand();
        itoa(Programul.random, Programul.meniuri.sirjoc, 10);
        constructie(Programul.random, 1);
        afisaresimboluri(Programul.test);
        outtextxy(100, 150, Programul.test);
        strcpy(Programul.meniuri.testhighscore, "");
        Programul.meniuri.testhighscore[0]='0';
        itoa(Programul.highscore, Programul.meniuri.testhighscore, 10);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        outtextxy(480, 50, Programul.meniuri.testhighscore);
        cout<<Programul.meniuri.sirjoc<<" ";
        strcpy(Programul.meniuri.text, "");
        CitesteSir( 100, 200, "", Programul.meniuri.text);
        Programul.instanta.nrgame=sirtonumber(Programul.meniuri.text);
        if(Programul.instanta.nrgame!=Programul.random)
        {
            cleardevice();
            readimagefile("images/background.jpg", 0, 0, 960, 540);
            Programul.parametru=false;
            itoa(Programul.highscore, Programul.meniuri.sirjoc, 10);
            settextjustify(CENTER_TEXT, CENTER_TEXT);
            settextstyle(COMPLEX_FONT, HORIZ_DIR,5);
            outtextxy(480-textwidth(Programul.meniuri.sirjoc),150,"Scorul este:");
            outtextxy(468+(textwidth("Scorul este:"))/2,150, Programul.meniuri.sirjoc);
            Programul.highscore=0;
            outtextxy(400, 400, "Meniu");
            outtextxy(560, 400, "Retry");
        }
        else
        {
            Programul.highscore++;
            cleardevice();
            readimagefile("images/background.jpg", 0, 0, 960, 540);
        }
    }
}
void click()
{
    while(1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            Programul.mouse.x=mousex();
            Programul.mouse.y=mousey();
            if(Programul.pagina.contor==0)
            {
                if(Programul.mouse.x>480-textwidth("Traducere")/2 && Programul.mouse.x<480+textwidth("Traducere")/2 && Programul.mouse.y>218-textheight("Traducere")/2 && Programul.mouse.y<218+textheight("Traducere")/2)
                {
                    Programul.pagina.contor=1;
                    cleardevice();
                    meniu_traducere();
                    while(Programul.pagina.contor==1)
                    {
                        if(ismouseclick(WM_LBUTTONDOWN))
                        {
                            clearmouseclick(WM_LBUTTONDOWN);
                            Programul.mouse.x=mousex();
                            Programul.mouse.y=mousey();
                            if(Programul.mouse.x>0 && Programul.mouse.x<130 && Programul.mouse.y>0 && Programul.mouse.y<40)
                            {
                                Programul.pagina.contor=0;
                                cleardevice();
                                meniu();
                            }
                            if(Programul.mouse.x>270 && Programul.mouse.x<690 && Programul.mouse.y>390 && Programul.mouse.y<430)
                            {
                                cleardevice();
                                meniu_traducere();
                            }
                        }
                    }
                }
                if(Programul.mouse.x>450 && Programul.mouse.x<510 && Programul.mouse.y>275 && Programul.mouse.y<305)
                {
                    Programul.pagina.contor=2;
                    cleardevice();
                    meniu_joc();
                    joc();
                    while(Programul.pagina.contor==2)
                    {
                        if(ismouseclick(WM_LBUTTONDOWN))
                        {
                            clearmouseclick(WM_LBUTTONDOWN);
                            Programul.mouse.x=mousex();
                            Programul.mouse.y=mousey();
                            if(Programul.mouse.x>335 && Programul.mouse.x<465 && Programul.mouse.y>370 && Programul.mouse.y<410)
                            {
                                Programul.pagina.contor=0;
                                cleardevice();
                                meniu();
                            }
                            if(Programul.mouse.x>495 && Programul.mouse.x<625 && Programul.mouse.y>370 && Programul.mouse.y<410)
                            {
                                cleardevice();
                                meniu_joc();
                                joc();
                            }
                        }
                    }
                }
                if(Programul.mouse.x>430 && Programul.mouse.x<530 && Programul.mouse.y>350 && Programul.mouse.y<385)
                {
                    break;
                }
            }
        }
    }
}
int main()
{
    initwindow(960, 540);
    meniu();
    click();
    return 0;
}
