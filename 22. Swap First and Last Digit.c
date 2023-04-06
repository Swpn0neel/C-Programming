#include <stdio.h>
void main(){
    int n, first, last, temp, k=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp= n;
    last= n%10;
    while(temp>9){
        temp= temp/10;
        k= k*10;
    }
    first= temp;
    n= (last*k)+((n%k)-last)+first;
    printf("The number after swapping it's 1st and last digit is: %d\n", n);
}