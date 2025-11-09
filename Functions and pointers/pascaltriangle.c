#include<stdio.h>

int ncr(int n,int r){
    int result=1;
  
    for(int i=1; i<=r;i++){
        result = result * (n-i+1)/i;
    }
    return result;
    
}

int main(){
    int rows;
    printf("Enter how many pascal triangle rows you want: ");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=0; j<(rows-i);j++){
            printf(" ");
        }
        for(int j=0; j<=i;j++){
            printf(" %d ",ncr(i,j));
        }
        printf("\n");
    }

}