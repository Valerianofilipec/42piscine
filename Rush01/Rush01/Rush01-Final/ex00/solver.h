#ifndef SOLVER_H
# define SOLVER_H

# include <stdbool.h>

bool	check_views(int grid[4][4], int *views);
bool	solve_puzzle(int grid[4][4], int *views);

#endif
