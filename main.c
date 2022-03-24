#include <stdio.h>

int addition(int first_number, int second_number)
{
	// I'm just add two literals
	return first_number + second_number;
}

int subtraction(int first_number, int second_number)
{
	// I'm just add one inverted literal to second
	return first_number + second_number * -1;
}

int multiply(int first_number, int second_number)
{
	// I'm just add first literal to (result) (second_number) times
	int result = 0;
	for (int i = 0; i < second_number; i++)
		result += first_number;

	return result;
}

int divide(int first_number, int second_number)
{	// I'm just add one inverted literal to second (result) times
	int result = 0;
	while (first_number > 0)
	{
		first_number -= second_number;
		result++;
	}
}

int main(void)
{
	// This is my attemp at creating arithmetic operators using only addition
	int add = addition(5, 100);
	printf("%d\n", add);

	int sub = subtraction(100, 74);
	printf("%d\n", sub);

	int mlt = multiply(5, 4);
	printf("%d\n", mlt);

	int div = divide(50, 5);
	printf("%d\n", div);
}
