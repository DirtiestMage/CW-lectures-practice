#include<stdio.h>
void swap(int*x,int*y);
int main(){
    int a,b;
    a=5;
    b=10;
    swap(&a,&b);
    printf("a = %d b = %d", a,b);
    return 0;
}

void swap(int*x,int*y){
    *x = *x+*y;
    *y = *x-*y;
    *x=*x-*y;

}