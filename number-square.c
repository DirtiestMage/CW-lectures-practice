#include<stdio.h>

int main(){
    int l;
    printf("Enter length of side of the square: ");
    scanf("%d", &l);
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}