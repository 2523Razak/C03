#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    scanf("%d", &n); // L'utilisateur saisit le nombre de termes (ex: 20)

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }

    return 0;
}
