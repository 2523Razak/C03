#include <stdio.h>

int main() {
    int limite;
    scanf("%d", &limite);  // L'utilisateur entre la limite (ex: 20)
    
    int a = 0, b = 1;      // On initialise les 2 premiers termes
    
    // On affiche toujours le premier 0
    printf("%d ", a);
    
    // On affiche les termes suivants tant qu'ils sont <= limite
    while (b <= limite) {
        printf("%d ", b);
        int prochain = a + b;
        a = b;
        b = prochain;
    }
    
    return 0;
}
