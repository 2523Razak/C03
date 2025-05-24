#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c; // On stocke juste 3 nombres
    
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur : n doit être > 0.\n");
        return 1;
    }

    printf("Suite de Fibonacci jusqu'à n=%d :\n", n);

    for (i = 0; i < n; i++) {
        printf("%lld ", a); // Affiche le terme actuel (a)
        c = a + b; // Calcule le prochain terme
        a = b;     // Met à jour a (terme précédent)
        b = c;     // Met à jour b (terme suivant)
    }

    return 0;
}
