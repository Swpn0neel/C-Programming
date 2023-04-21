#include <stdio.h>
void main(){
    int n, c;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n], x[n];
    printf("Enter the numbers:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<n; j++){
        c= 1;
        if(arr[j]!=-1){
            for(int k=j+1; k<n; k++){
                if(arr[j]==arr[k]){
                    c++;
                    arr[k]= -1;
                }
            }
            x[j]= c;
            printf("%d occurs %d times\n",arr[j],x[j]);
        }
    }
}