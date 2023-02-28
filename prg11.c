// factor of natural number
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number for factor : ");
    scanf("%d",&n);

    printf("The Factors of %d are : \n",n);    
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}