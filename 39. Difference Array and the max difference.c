#include <stdio.h>
void main(){
	int n;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	int out[n-1];
	printf("Enter the elements of the array:\n");
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=1; i<n; i++){
		out[i-1]= arr[i-1]-arr[i];
	}
	printf("The difference array is:\n");
	for(int i=0; i<n-1; i++){
		printf("%d\n", out[i]);
	}
	int max=out[0];
	for(int i=0; i<n-1; i++){
		if(max<out[i]){
			max= out[i];
		}
	}
	printf("Largest difference from the output array is: %d\n", max);
}