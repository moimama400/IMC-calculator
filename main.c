#include <stdio.h>

int main()
{
    float poids, taille, IMC;

    puts("--- Calcule d'IMC ---\n");

    // demande poids et taille a l'utilisateur -----------------
    printf("Indiquer votre poids :");
    scanf("%f", &poids);

    printf("Indiquer votre taille :");
    scanf("%f", &taille);

    // calcule IMC --------------------------------------------
    IMC = poids/(taille*taille);

    putchar('\n');

    // affichage corpulence -----------------------------------
    if(IMC < 16.5)
    {printf("%.2f Denutrition\n", IMC);}

    if(18.5 < IMC && IMC < 16.5)
    {printf("%.2f Maigre\n", IMC);}

    if(18.5 < IMC && IMC < 25)
    {printf("%.2f Corpulence normale\n", IMC);}

    if(25 < IMC && IMC < 30)
    {printf("%.2f Surpoids\n", IMC);}

    if(IMC > 30)
    {printf("%.2f Obésité\n", IMC);}

    putchar('\n');

    return(0);
}