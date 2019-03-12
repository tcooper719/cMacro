#include <stdio.h>
//defining the macro and the command
#define MINIMUM2(num1,num2) num1 > num2 ? num2 : num1;

int main(void)
{
	int first, second, result;

	//prompt to the user for the numbers to be inputted
	printf_s("%s", "Please input two numbers seperated by a space: ");
	
	//capture the two numbers
	scanf_s("%d %d", &first, &second);

	//check to make sure the user doesn't input the same number
	while (first == second)
	{
		printf_s("%s", "These numbers are the same, and neither will be lesser than the other. Please input two different numbers: ");
		scanf_s("%d %d", &first, &second);
	}

	//pass the two numbers through to the macro and capture the result
	result = MINIMUM2(first, second);

	//display the result
	printf_s("%d is the lesser number.\n", result);
}