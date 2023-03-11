// multiplication table
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of which you want the table : ");
    scanf("%d",&n);
    printf("Multiplication Table of %d is -\n",n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}