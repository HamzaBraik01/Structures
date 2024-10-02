#include <stdio.h>
#include <string.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int annee;
};

struct Livre creerLivre(const char* titre, const char* auteur, int annee) {
    struct Livre livre;
 
    strcpy(livre.titre, titre);
    strcpy(livre.auteur, auteur);
    livre.annee = annee;

    return livre;
}

int main() {
 
    struct Livre monLivre = creerLivre("BOIT", "Ahmed safriwi", 1949);

    printf("Informations sur le livre :\n");
    printf("Titre : %s\n", monLivre.titre);
    printf("Auteur : %s\n", monLivre.auteur);
    printf("Année de publication : %d\n", monLivre.annee);

    return 0;
}
