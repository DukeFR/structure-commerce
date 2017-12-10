#include <stdio.h>
#include <stdlib.h>
#include "article.h"
#define  NAmax 150
int main()
{
    int t_article ;
    int nbA=0;
    int i,choix; ///nombre d'articles mis dans le tableau
    ///on saisit un article dans la première case CAR nbA=0
    printf("Combien de nouveaux articles à ajouter\n");
    scanf("%d",&choix);
    for (i=0;i<choix;i++)
    {
    saisirArticle(&listeA[nbA]);
    nbA++;
    }
    ///on saisit un article dans la deuxième case nb1 vaut 1
    saisirArticle(&listeA[nbA]);
    printf("Articles en vente: \n");
    afficherListeA((listeA,nbA));
    return 0;
}

///int fleche,dir
///fleche=getch();
///printf("%d",fleche);
///if (fleche==224)
///dir=getch()
///printf("%d,dir);
