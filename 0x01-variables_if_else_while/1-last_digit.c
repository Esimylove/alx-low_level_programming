#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - show me print anytime the number is positive, zero, or negative
*
* Description: I'm relying on the main function
* this program prints"Programming is positive,zero,or negative
* Return: 0
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
digit = n % 10; / gets the digit value /
if (digit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, digit);
else if (digit == 0)
printf("Last digit of %d is %d and is 0\n", n, digit);
else if (digit < 6 && digit != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
return (0);
}
