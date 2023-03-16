#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 1 (error occurred)
 */
int main(void)
{
const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (msg[len] != '\0')
{
len++;
}
write(2, msg, len);
return (1);
}
