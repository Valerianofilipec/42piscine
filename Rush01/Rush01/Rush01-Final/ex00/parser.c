#include "parser.h"
#include <stdlib.h>
#include <unistd.h>

bool	parse_input(char *input, int *views)
{
	int	index;
	int	i;

	index = 0;
	i = -1;
	while (input[++i])
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			if (index < 16)
				views[index++] = input[i] - '0';
			else
				return (false);
		}
		else if (input[i] != ' ')
			return (false);
	}
	return (index == 16);
}
