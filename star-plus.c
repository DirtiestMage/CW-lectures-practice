#include<stdio.h>

int main(){
    int n;
    printf("enter the star radius: ");
    scanf("%d",&n);
    n = n*2+1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==n/2 || j==n/2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");   
    }

    return 0;
}