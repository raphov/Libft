 #include "libft.h" 

void	ft_putnbr_fd(int n, int fd)
{
	char c;
	unsigned int i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = (unsigned int)n * -1;
	}
	else 
		i = (unsigned int)n;
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	c = i % 10 + 48;
	ft_putchar_fd(c, fd);
}
