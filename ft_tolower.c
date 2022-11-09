#include "libft.h"
#include <ctype.h>

int	toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
