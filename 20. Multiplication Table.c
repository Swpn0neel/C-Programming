#include <stdio.h>
void main(){
    int n, p;
    printf("Enter the number whose multiplication table you want: ");
    scanf("%d", &n);
    printf("The multiplication table is:\n");
    for(int i=1; i<=10; i++){
        p= n*i;
        printf("%d X %d = %d\n", n, i, p);
    }
}