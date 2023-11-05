#include <unistd.h>

/**
 * my_putchar - prinsts single charachter
 * @c: the charchter
 * Return: charchter
*/

int my_putchar(char c)
{
return (write(1, % c, 1));
}
