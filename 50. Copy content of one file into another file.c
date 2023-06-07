#include<stdio.h>
int main(){
    FILE *fptr1;
    fptr1 = fopen("apple.txt", "r");
    FILE *fptr2;
    fptr2 = fopen("sum.txt", "w");
    char ch;
    ch = fgetc(fptr1);
    while(ch!= EOF){
        fprintf(fptr2, "%c", ch);
        ch = fgetc(fptr1);
    }
    printf("\n");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}