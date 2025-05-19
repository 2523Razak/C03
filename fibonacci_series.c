#include <stdio.h>

int main() {
    int nbTermes, terme1 = 0, terme2 = 1, termeSuivant;

    // Lire le nombre de termes
    scanf("%d", &nbTermes);

    // Vérifier si le nombre est valide
    if(nbTermes <= 0) {
        printf("Erreur : Entrez un nombre > 0\n");
        return 0;
    }

    // Afficher les termes
    for(int i = 1; i <= nbTermes; i++) {
        printf("%d ", terme1);
        termeSuivant = terme1 + terme2;
        terme1 = terme2;
        terme2 = termeSuivant;
    }
    return 0;
}
