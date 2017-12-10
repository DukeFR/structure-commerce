#include <stdio.h>
#include "article.h"
void saisirArticle(t_article*a){
    printf("Code : ");
    scanf("%d",&(a->code));
    printf("intitule : ");
    fflush(stdin);
    gets(a->intitule);
    printf("Prix : ");
    scanf("%f",&(a->prix));
    printf("Quantite: ");
    scanf("%d",&(a->quantStock));
}


void afficherArticle(t_article*a){
    printf("Code : ");
    printf("%d\n",a->code);
    printf("intitule : ");
    puts(a->intitule);
    printf("Prix : ");
    printf("%5.2f\n",a->prix);
    printf("Quantite : ");
    printf("%d\n",a->quantStock);
}
 void afficherListeA(t_article[NAmax],int n){
 int i;
 for (i=0;i<n;i++)
    {
            afficherArticle(&tab[i]);
    }
 }
void charger(char[],t_article[Nmax],int*)
{
    FILE *fic;
    int i;
    //on essaie d'ouvrir un fichier, chargement
    fic=fopen(nomFic,"r");
    //On blinde : si Ok
    if(fic!=NULL)
    {

    }
}
