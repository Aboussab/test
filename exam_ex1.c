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
void swap(char **s1,char **s2)
{
    char **tmp = s1;
    s1 = s2;
    s


}

void triermots (char** mots,int n)
{
    char ***max;
    char ***str;
    int p;

    for (int i = 0; i < n; i++)
    {
        max = &mots[i];
        for(int j = i + 1; j < n; j++)
        {
            str = &mots[j];
            p = strcmp(**max,**str);
            if (p < 0)
                max = &mots[j];
            
        }
        mots[i] = *max;
    }

}
void affiche(char **str, int n)
{
    int i = 0;
    while (i < n)
    {
        printf("%s",str[i]);
        i++;
    } 
}

int main ()
{
    char **str = lire_mots(2);
    // triermots(str,2);
    affiche(str,2);
    free(str);

}