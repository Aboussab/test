#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **lire_mots(int n)
{
    char** ptr;
    int i;

    ptr = (char**)malloc(n * sizeof(char*));
    if(!ptr)
        return NULL;
    for(i = 0; i < n ; i++)
    {
        ptr[i] = (char*) malloc(50);
        if(!ptr[i])
            return ptr;
        printf("loool entre le mot nemero %d",i);
        scanf("%s",ptr[i]);
    }
    return ptr;
}

void triermots (char** mots,int n)
{
    char *max;
    char *str;
    char *tmp = (char*) malloc(50);

    if (!tmp)
        return ; 
    for (int i = 0; i < n; i++)
    {
        max = (char*) malloc(50);
        if (!max)
            return ;
        max = mots[i];
        for(int j = 0; j < n; j++)
        {
            str = mots[j];
            if(strcmp(max,str) < 0)
            {
                tmp = max;
                max = str;
                str = max;
                break;
            }
            else
            str = mots[j];
        }
        mots[i] = max;

    }

}
void affiche(char **str, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%s",*str[i]);
        i++;
    } 
}

int main ()
{
    char **str = lire_mots(2);
    triermots(str,2);
    affiche(str,2);
    free(str);

}