#include <stdio.h>
void sumarr(int arr[], int n) {
    int a[n-1];
    for (int i=0; i<n-1; i++) {
        a[i]= arr[i] + arr[i+1];
    }
    printf("Sum of the consecutive array elements are: ");
    for (int i = 0; i<n-1; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    sumarr(arr, n);
    return 0;
}
