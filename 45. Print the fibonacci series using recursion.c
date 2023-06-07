#include <stdio.h>
void fibonacci(int n, int *prev, int *current, int count) {
    if (count <= n) {
        printf("%d ", *prev);
        int next = *prev + *current;
        *prev = *current;
        *current = next;
        fibonacci(n, prev, current, count + 1);
    }
}
int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    int prev = 0;
    int current = 1;
    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n, &prev, &current, 1);
    printf("\n");
    return 0;
}
