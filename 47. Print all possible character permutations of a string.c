#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s, ", str);
        return;
    }
    for (int i = left; i <= right; i++) {
        swap((str + left), (str + i));
        permute(str, left + 1, right);
        swap((str + left), (str + i));
    }
}
void main() {
    char input[100];
    printf("Enter the string: ");
    scanf("%s", input);
    int length = strlen(input);
    printf("All possible permutated combinations are: ");
    for (int i = 1; i <= length; i++) {
        char str[length + 1];
        strncpy(str, input, i);
        str[i] = '\0';
        permute(str, 0, i - 1);
    }
    printf("\b\b \n");
}
