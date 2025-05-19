#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur : veuillez entrer un nombre entier positif supérieur à zéro.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
  
    return 0;
}
