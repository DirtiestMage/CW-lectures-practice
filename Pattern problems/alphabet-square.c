#include<stdio.h>

int main(){
    int l;
    char ch = 'A';
    printf("Enter number of rows: ");
    scanf("%d",&l);
    for(int i=0; i<l; i++){
        ch = 'A';
        for(int j=0; j<l; j++){
            printf("%c",ch);
            ch++;
        }   
        printf("\n");
    }

}