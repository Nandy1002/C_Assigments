// check prime

#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter The number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 1){
        printf("%d is Prime Number\n",n);
    }else{
        printf("%d is not Prime Number.\n",n);
    }
}