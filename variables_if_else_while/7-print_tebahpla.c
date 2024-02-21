#include <stdio.h>
/**
 *main - main block
 *prints all single digit numbers of base 10
 *starting from 0, followed by a new line.
 *Return: 0
 */
int main(void)
{
char i;
for (i = 'z'; i <= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
