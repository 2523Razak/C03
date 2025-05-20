#include <stdio.h>

int main() {
    int max;
    scanf("%d", &max);
    
    if (max >= 0) printf("0");
    if (max >= 1) printf("1");
    
    int prev = 0, current = 1;
    while (1) {
        int next = prev + current;
        if (next > max) break;
        printf("%d ", next);
        prev = current;
        current = next;
    }
    
    return 0;
}
