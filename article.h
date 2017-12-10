#ifndef ARTICLE_H_INCLUDED
#define ARTICLE_H_INCLUDED

///definition constante globale
#define N 21
#define NAmax
///definition des nouveaux types
typedef struct article{
    int code;
    char intitule[N];
    float prix;
    int quantStock;
}t_article;
///prototypes des sous programmes
void saisirArticle(t_article*); //On a l'adresse de la structure à remplir
///passage par valeur, ok mais moins en mémoire que par adresse
void afficherArticle(t_article*);
///NOMBRE D ARTICLES EN PARAMETRES
void afficherListeA(t_article[NAmax]);


#endif // ARTICLE_H_INCLUDED
