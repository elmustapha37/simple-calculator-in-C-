#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chx,i,PA,PB,SA,As;
    float A,B,SOM,MULT,SOU,DIV;
    do{
    printf("**************************Available operations!**************************\n");
    puts("1-LA SOMME +");
    puts("2-MULTEPLICATION *");
    puts("3-SOUSTRACTION -");
    puts("4-DIVISION /");
    puts("5-SIN");
    puts("6-COS");
    puts("7-TAN");
    puts("8-SQRT");
    puts("9-POW");
    puts("**************************DONNEZ UN CHOIX SVP!**************************");
    scanf("%d", &chx);
    switch(chx)
    {
    case 1 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%f", &A);
        printf("Donnez les nombre B SVP!  ");
        scanf("%f", &B);
        SOM=A+B;
        printf("Resulta de somme est : %.2f \n\n", SOM);
    break;
    case 2 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%f", &A);
        printf("Donnez les nombre B SVP!  ");
        scanf("%f", &B);
        MULT=A*B;
        printf("Resulta de multiplicatin est : %.2f \n\n", MULT);
    break;
    case 3 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%f", &A);
        printf("Donnez les nombre B SVP!  ");
        scanf("%f", &B);
        SOU=A-B;
        printf("Resulta de soustraction est : %.2f \n\n", SOU);
    break;
    case 4 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%f", &A);
        printf("Donnez les nombre B SVP!  ");
        scanf("%f", &B);
        DIV=A/B;
        printf("Resulta de division est : %.2f \n\n", DIV);
    break;
    case 5 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%d", &As);
        printf("Sin(%d)=%.3f \n\n",As,sin(As));
    break;
    case 6 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%d", &A);
       printf("Cos(%d)=%.3f \n\n",As,cos(As));
    break;
    case 7 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%d", &A);
        printf("Tan(%d)=%.3f \n\n",As,tan(As));
    break;
    case 8 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%d", &SA);
        printf("sqrt(%d)=%.2f \n\n",SA,sqrt(SA));
    break;
    case 9 :
        printf("Donnez les nombre A SVP!  ");
        scanf("%d", &PA);
        printf("Donnez OS B SVP!  ");
        scanf("%d", &PB);
        printf("%d ^ %d = %.2f \n\n",PA ,PB, pow(PA,PB));
    break;
    default :
        puts("************************************NO OPERATION !************************************");
    }
    }while(i!=0);

    return 0;
}
