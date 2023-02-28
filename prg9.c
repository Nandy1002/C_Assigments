// check palyndrome
#include<stdio.h>

int main(){
    int num,temp,rev = 0;
	printf("Enter The number : ");
	scanf("%d",&num);
    temp = num;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num = num / 10;
	}
    if(temp==rev){
        printf("The number is Palyndrome\n.");
    }else{
        printf("The number is not Palyndrome\n");
    }
}