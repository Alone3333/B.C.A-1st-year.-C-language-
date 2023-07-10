#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int maximum_and = 0, maximum_or = 0, maximum_xor = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int current_and = i & j;
            int current_or = i | j;
            int current_xor = i ^ j;
            
            if (current_and < k && current_and > maximum_and) {
                maximum_and = current_and;
            }
            
            if (current_or < k && current_or > maximum_or) {
                maximum_or = current_or;
            }
            
            if (current_xor < k && current_xor > maximum_xor) {
                maximum_xor = current_xor;
            }
        }
    }
    
    printf("%d\n%d\n%d\n", maximum_and, maximum_or, maximum_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
