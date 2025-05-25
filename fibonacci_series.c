#include <stdio.h>

int fibo_terme(int t) {
    if (t == 0) return 0;
    if (t == 1) return 1;
    return fibo_terme(t - 2) + fibo_terme(t - 1);
}

int main() {
    int limite;
    scanf("%d", &limite); // Ex: 20
    
    // Affiche tous les termes ≤ limite
    for (int i = 0; ; i++) {
        int terme = fibo_terme(i);
        if (terme > limite) break;
        printf("%d ", terme); // Pas d'espace
    }
    
    return 0;
}
