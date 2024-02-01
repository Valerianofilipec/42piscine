#include "solver.h"
#include <stdlib.h>

void	is_valid_placement(int grid[4][4], 
			int rc_num[3], int next_rc[2], int *views);
bool	solve_grid(int grid[4][4], int row, int col, int *views);
bool	check_line_view(int line[4], int view);

int	*ft_rc(int start_row, int start_col, int d_row, int d_col)
{
	int	*r;
	
	r = (int *) malloc(4 * 4);
	r[0] = start_row;
	r[1] = start_col;
	r[2] = d_row;
	r[3] = d_col;
	return (r);
}
/*
bool	solve_puzzle(int grid[4][4], int *views)
{
	return (solve_grid(grid, 0, 0, views));
}
*/

bool	solve_grid(int grid[4][4], int row, int col, int *views)
{
	int	next_rc[2];
	int	rc_num[3];
	int	num;

	rc_num[0] = row;
	rc_num[1] = col;
	num = 0;
	if (rc_num[0] == 4)
		return (check_views(grid, views));
	while (++num <= 4)
		is_valid_placement(grid, rc_num, next_rc, views);
	return (false);
}

void	is_valid_placement(int grid[4][4], 
		int rc_num[3], int next_rc[2], int *views)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (grid[rc_num[0]][i] == rc_num[2] 
				|| grid[i][rc_num[1]] == rc_num[2])
			return ;
	}
	grid[rc_num[0]][rc_num[1]] = rc_num[2];
	if (rc_num[1] == 3)
		next_rc[0] = rc_num[0] + 1;
	else
		next_rc[1] = rc_num[1];
	if (rc_num[1] == 3)
		next_rc[1] = 0;
	else
		next_rc[1] = rc_num[1] + 1;
	if (solve_grid(grid, next_rc[0], next_rc[1], views))
		return ;
	grid[rc_num[0]][rc_num[1]] = 0;
}

bool	check_single_view(int grid[4][4], int row_col[4], int view)
{
	int	max_height;
	int	visible_boxes;
	int	height;
	int	i;

	max_height = 0;
	visible_boxes = 0;
	i = -1;
	while (++i < 4)
	{
		height = grid[row_col[0] + i * row_col[3]][row_col[1] + i * row_col[3]];
		if (height > max_height)
		{
			max_height = height;
			visible_boxes++;
		}
	}
	return (visible_boxes == view);
}

bool	check_views(int grid[4][4], int *views)
{
	int	row;
	int	col;

	row = -1;
	col = -1;
	while (++row < 4)
	{
		if (!check_single_view(grid, ft_rc(row, 0, 0, 1), views[row])
			|| !check_single_view(grid, ft_rc(row, 3, 0, -1), views[4 + row]))
			return (false);
	}
	while (++col < 4)
	{
		if (!check_single_view(grid, ft_rc(0, col, 1, 0), views[8 + col])
			|| !check_single_view(grid, ft_rc(3, col, -1, 0), views[12 + col]))
			return (false);
	}
	return (true);
}
