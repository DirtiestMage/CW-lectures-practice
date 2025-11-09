#include<stdio.h>

int main(){
    int l,b;
    printf("Enter length and breadth respectfully for the rectangle: ");
    scanf("%d %d", &l,&b);
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}