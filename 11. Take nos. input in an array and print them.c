#include <stdio.h>
void main(){
    int n, m;
    printf("How many numbers in an array do you want? ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter a number: ");
        scanf("%d",&m);
        arr[i]=m;
    }
    printf("The number you have entered are:\n");
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}