#include<stdio.h>

int main(){
    int l;
    printf("Enter number of rows: ");
    scanf("%d",&l);
    for(int i=0; i<l; i++){
        for(int j=0; j<=i; j++){
            printf("%d", (j*2)+1);
        }   
        printf("\n");
    }

}