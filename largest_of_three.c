#include <stdio.h>

int main() {
    int a, b, c;  // On déclare 3 variables pour stocker les nombres

    // On lit les 3 nombres entrés par l'utilisateur
    scanf("%d %d %d", &a, &b, &c);

    // On compare les nombres pour trouver le plus grand
    if (a >= b && a >= c) {  // Si a est le plus grand
        printf("Le plus grand nombre est : %d\n", a);
    } 
    else if (b >= a && b >= c) {  // Si b est le plus grand
        printf("Le plus grand nombre est : %d\n", b);
    } 
    else {  // Sinon, c'est forcément c
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0;  // Fin du programme
}
