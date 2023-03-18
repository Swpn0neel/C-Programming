#include <stdio.h>
void main(){
    int a,b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping is: \n");
    printf("1st number is: %d \n2nd number is: %d \n",a,b);
}