#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * play what I call the alphabet game
 * Return: 0
 */
int main(void)
{
	char alpha;
	alpha = 'a';
	while(alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return(0);
}
