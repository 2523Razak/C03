#include <stdio.h>

int main() {
    float celsius;  // Température en Celsius

    // On lit la température
    scanf("%f", &celsius);

    // On calcule la conversion en Fahrenheit
    float fahrenheit = (celsius * 9 / 5) + 32;

    // On affiche le résultat avec 1 chiffre après la virgule
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);

    return 0;  // Fin du programme
}
