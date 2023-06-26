#include <unistd.h>
/**
 *_putchar - writes the character C to stdout
 *@C: The character to print
 *Return: On success 1.
 *On error, -1 is returned, and erno is set approximately,
 */
int _putchar(char C)
{
	return (write(1,&c, 1));
} 
