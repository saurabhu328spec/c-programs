#include <stdio.h>

int main(void)
{
	int number;

	number = 5;
	printf("Starting value: %d\n", number);
	printf("Post-increment (number++): %d\n", number++);
	printf("After post-increment: %d\n\n", number);

	number = 5;
	printf("Starting value: %d\n", number);
	printf("Pre-increment (++number): %d\n", ++number);
	printf("After pre-increment: %d\n\n", number);

	number = 5;
	printf("Starting value: %d\n", number);
	printf("Post-decrement (number--): %d\n", number--);
	printf("After post-decrement: %d\n\n", number);

	number = 5;
	printf("Starting value: %d\n", number);
	printf("Pre-decrement (--number): %d\n", --number);
	printf("After pre-decrement: %d\n", number);

	return 0;
}
