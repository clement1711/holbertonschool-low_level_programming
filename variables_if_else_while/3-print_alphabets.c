#include <stdio.h>
/**
 * main -main block
 * prints the alphabet in lowercase and uppercase
 */
int main(void)
{
char a = 'a';

while (a <= 'z')
{
	putchar(a);
	a++;
}
	
a = 'A';

while (a <= 'Z')
	{
	putchar(a);
	a++;
	}

putchar('\n');
return (0);
}
