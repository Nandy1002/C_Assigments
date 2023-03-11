//sum of natural numbers
#include<stdio.h>

int main(){
    int n,sum=0;
    printf("How many numbers you want sum of : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum += i;
    }
    printf("The sum of %d natural number is : %d\n",n,sum);
}