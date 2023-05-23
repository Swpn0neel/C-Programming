#include <stdio.h>
void main(){
	int a, b, k=0;
	printf("Enter the length of two arrays:\n");
	scanf("%d%d",&a,&b);
	printf("Enter the elements of 1st array\n");
	int x[a], y[b], z[a+b];
	for(int i=0; i<a; i++) {scanf("%d", &x[i]);}
	printf("Enter the elements of 2nd array\n");
	for(int i=0; i<b; i++) {scanf("%d", &y[i]);}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if(x[i]==y[j]){
				z[k]=x[i];
				k++;
			}
		}
	}
	printf("The common elements of both the arrays are:\n");
	for(int i=0; i<k+1; i++){
		printf("%d\n", z[i]);
	}
}