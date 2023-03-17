#include <stdio.h>
void main(){
    int n,m,o;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &n, &m,&o);
    int max= (n>m && n>o)?n:(m>o && m>n)?m:o;
    printf("The maximum number is: %d \n", max);
}