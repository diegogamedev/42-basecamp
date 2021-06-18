void	ft_putchar(char c);

void	linegenerator(int size, char start, char middle, char end)
{
	int	index;

	index = 1;
	ft_putchar(start);
	while (index++ < size - 1)
	{
		ft_putchar(middle);
	}
	if (size > 1 )
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void 	rush(int c, int r)
{
	int	index;

	index = 0;
	linegenerator(c, '/', '*', '\\');
	while (index++ < r - 2 )
	{
		linegenerator(c, '*', ' ', '*');
	}
	if (r > 1 )
		linegenerator(c, '\\', '*', '/');
}
