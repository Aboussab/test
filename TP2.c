#include <stdio.h>
// ______________________________exercice3
// int iheur;
// int iminute;
// int iSeconde;

// void affiche_heure()
// {
//     printf("Il est %d heure(s) %d minute(s) %d seconde(s)", iheur, iminute,iSeconde);
// }
// void    saisir_heure(int ih,int im,int is)
// {
//     iheur = ih;
//     iminute = im;
//     iSeconde = is;
// }
// void tick()
// {
//     iSeconde++;
// }_________________________________________________________________________________


float puissance(int x,int n)
{
    float result = 1.0;
    // while (i < n)
    // {
    //     y *= x;
    //     i++;
    // }
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}
int main ()
{
    int a = 2;
    int b;
    int  x;
    int y;
    int z;

    // _________________________________________exercie 1 _____________________________________________________________________

    // y = 2;
    // printf("saissez un nombre positif :");
    // scanf("%d",&x);

    // while (x > y)
    // {
    //     z = x % y; 
    //     if (z == 0)
    //     {
    //         printf("this is not a primary number :)");
    //         return 0;
    //     }
    //     y++;
    
    // }
    // printf("this is a primary number :)");


    // ______________________________exercie 2 _____________________________________________________________________

    // printf("lool cd le 1ere number :  ");
    // scanf("%d",&a);
    // printf("lool cd le 2eme number :  ");
    // scanf("%d",&b);
    // printf("PGCD(%d ,%d)",a,b);
    
    // while (a !=b)
    // {
    //     if(a < b)
    //     {
    //           b = b - a;
    //           printf("= PGCD(%d ,%d)",a,b);
    //     }
    //     if(a > b)
    //     {
    //         a = a - b;
    //           printf(" = PGCD(%d ,%d)",a,b);
    //     }
    // }
    // printf("= %d\n",a);
    
    // ____________________________exercie 3_____________________________________________________________________

        // saisir_heure(12,2,5);

        // affiche_heure();
        // tick();
        // affiche_heure();

    // ____________________________exercie 4_____________________________________________________________________
    return 0;
}