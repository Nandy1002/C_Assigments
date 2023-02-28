// Simple Calculator Using switch case
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	float a, b;
	printf("Enter an operator (+, -, *, /), if want to exit press x: ");
	scanf("%c", &ch);
	printf("Enter two first and second operand: ");
	scanf("%f %f",&a,&b);
	switch (ch) {
	// For Addition
	case '+':
		printf("%.2f + %.2f = %.2f\n", a, b, a + b);
		break;
	// For Subtraction
	case '-':
		printf("%.2f - %.2f = %.2f\n", a, b, a - b);
		break;
	// For Multiplication
	case '*':
		printf("%.2f * %.2f = %.2f\n", a, b, a * b);
		break;
	// For Division
	case '/':
		printf("%.2f / %.2f = %.2f\n", a, b, a / b);
		break;
	// If operator doesn't match any case constant
	default:
		printf("Error! please write a valid operator\n");		
    }
}
