#include <unistd.h>

/**
 * printchar - write the charactor c to stdout
 * @c: the charactor to be printed
 * Return: 1 on success
 * -1 on error and errno is set appropiately
 */

int printchar(char c)
{
	return (write(1, &c, 1));
}
