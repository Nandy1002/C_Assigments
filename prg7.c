// Armstrong number check
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,len=0,d=0,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        temp /= 10;
        len++;
    }
    temp = n;
    while(temp>0){
        d = temp % 10;
        sum += pow(d,len);
        temp /= 10;
    }
    if(n == sum){
        printf("%d is Armstrong Number\n",n);
    }else{
        printf("%d is not Armstrong Number\n",n);
    }
    return 0;
}