#include "parser.h"
#include "solver.h"
#include <unistd.h>

void	print_grid(int grid[4][4]);
void	ft_gridzero(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	views[16];
	int	grid[4][4];

	ft_gridzero(grid);
	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve_puzzle(grid, views))
		print_grid(grid);
	else
		write(1, "No solution", 13);
	return (0);
}

void	ft_gridzero(int grid[4][4])
{
	short	i;
	short	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			grid[i][j] = 0;
	}
}

void	print_grid(int grid[4][4])
{
	char	num;
	int		row;
	int		col;

	row = -1;
	col = -1;
	while (++row < 4)
	{
		while (++col < 4)
		{
			num = grid[row][col] + '0';
			write(1, &num, 1);
			if (col < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
