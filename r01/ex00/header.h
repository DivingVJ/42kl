#ifndef HEADER_H

# define	HEADER_H
# define	SIZE 4
# define	G_CLUESIZE 16
# define	G_ROW 4
# define	G_COLUMN 4

int	g_input[4][4];
int	g_board[4][4];

void	ft_solve(void);
void	ft_setclue(char *argv, int clue[G_CLUESIZE]);
void	ft_print(void);
void	ft_createarray(int *clue);
int		ft_checkempty(int *clue);
int		ft_size(char *argv);

#endif
