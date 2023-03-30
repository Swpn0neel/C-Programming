#include <stdio.h>
void main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n], b[n-1];
    for(int i=0; i<n; i++){
        printf("Enter array number: ");
        scanf("%d", &a[i]);
    }
    for(int i=0; i<(n-1); i++){
        b[i]=a[i]-a[i+1];
    }
    printf("Difference Array Elements are: \n");
    for(int i=0; i<(n-1); i++){
        printf("%d\n",b[i]);
    }
}