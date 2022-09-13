#include "main.h"

/**
 * main - prints "_putchar" followed by newline
 *
 * Description: prints "_putchar"
 *
 * Returns: 0 (Success)
 */

int main(void)
{
	char text[12] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
