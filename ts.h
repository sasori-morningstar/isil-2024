#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nomEntite[20];
    char typeEntite[20];
    int tailleEntite;
} TypeTs;
TypeTs ts[100];

int CpTs = 0;

void inserer(char entite[], char type[], int taille)
{
    if (rechercher(entite) == -1)
    {
        strcpy(ts[CpTs].nomEntite, entite);
        strcpy(ts[CpTs].typeEntite, type);
        ts[CpTs].tailleEntite = taille;

        CpTs++;
    }
}
void insererType(char entite[], char type[])
{
    int posEntite=rechercher(entite);
    if(posEntite!=-1){
        strcpy(ts[posEntite].typeEntite, type);
    }
}
void insererTaille(char entite[], int taille)
{
    int posEntite=rechercher(entite);
    if(posEntite!=-1){
        ts[posEntite].tailleEntite=taille;
    }
}
int rechercher(char entite[])
{
    int i = 0;
    while (i < CpTs)
    {
        if (strcmp(ts[i].nomEntite, entite) == 0)
        {
            return i;
        }
        i++;
    }
    return -1;
}
int rechercherType(char entite[]){
    int posEntite=rechercher(entite);
    if(strcmp(ts[posEntite].typeEntite,"")==0) return 0;
    else return -1;
}
int rechercherTaille(char entite[]){
    int posEntite=rechercher(entite);
    if(posEntite!=-1) return ts[posEntite].tailleEntite;
    else return -1;
}

void afficher(){
    printf("*********************Table des symboles*****************\n");
    printf("_ ____________________ _ ____________________ _ ______ _\n");
    printf("|         Nom          |        Type          | Taille |\n");
    int i=0;
    while(i<CpTs){
        printf("| ____________________ | ____________________ | ______ |\n");
        printf("| %20s | %20s | %6d |\n", ts[i].nomEntite, ts[i].typeEntite, ts[i].tailleEntite);
        i++;
    }
    printf("| ____________________ | ____________________ | ______ |\n");
}