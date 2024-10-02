#include <stdio.h>
#include <string.h>
struct Etudiant{
    char Nom[25];
    char Prenom[25];
    float Notes[5];
    
};
int main() {
    struct Etudiant Etudiant1;

    strcpy(Etudiant1.Nom, "Braik");
    strcpy(Etudiant1.Prenom, "Hamza");
    Etudiant1.Notes[0] = 15;
    Etudiant1.Notes[1] = 18;
    Etudiant1.Notes[2] = 12;
    Etudiant1.Notes[3] = 17;
    Etudiant1.Notes[4] = 14;

    printf("Nom: %s\n", Etudiant1.Nom);
    printf("Prenom: %s\n", Etudiant1.Prenom);
    printf("Notes: ");
    for (int i = 0; i <5 ; i++) {
        printf("%.2f ", Etudiant1.Notes[i]);
    }
    



    return 0;
}