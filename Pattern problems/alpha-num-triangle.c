#include<stdio.h>

int main(){
    int l;
    printf("Enter number of rows: ");
    scanf("%d",&l);
    char ch;
    for(int i=0; i<l; i++){
        ch = 'A';
        for(int j=0; j<=i; j++){
            if (i%2!=0){
                printf("%c",ch);
                ch++;
            }
            else{
                printf("%d",j+1);
            }
        }   
        printf("\n");
    }

}