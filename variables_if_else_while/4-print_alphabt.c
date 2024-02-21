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
for(alpha = 'a'; alpha <= 'z'; ++alpha){
	if(alpha != 'q' && alpha != 'e'){
	putchar(alpha);
}	
}
putchar('\n');
return (0);
}
