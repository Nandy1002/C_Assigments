// factor of natural number
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number for factor : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    printf("%d is the factorial\n",fact);
}