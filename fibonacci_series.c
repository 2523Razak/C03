#include <stdio.h>

int main() {
    int limite;
    scanf("%d", &limite); // Lecture de la valeur limite
    
    int terme1 = 0, terme2 = 1, termeSuivant;
    
    // Affichage des deux premiers termes sans espace
    printf("%d %d ", terme1, terme2); // Pas d'espace entre a et b
    
    // Génération des termes suivants
    c = a + b;
    while (c <= limite) {
        printf("%d ", termeSuivant); // Pas d'espace
        terme1 = terme2;
        terme2 = termeSuivant;
        termeSuivant = terme1 + terme2;
    }
    
    return 0;
}
