#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;

while (count < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}

letter = 'a';
count++;
}

_putchar('\n');
}
