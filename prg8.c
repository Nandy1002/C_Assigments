// reverse a number

#include <stdio.h>

int main()
{
	int num,rev = 0;
	printf("Enter The number : ");
	scanf("%d",&num);
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num = num / 10;
	}

	printf("The reverse number is %d\n",rev);

	return 0;
}
