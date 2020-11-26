int	ft_atoi(const char *str)
{
	long num;
	long negpos;

	negpos = 1;
	num = 0;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' '))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negpos = negpos * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	return (num * negpos);
}


// "static int		help(int res1, int sign1, int k1)
// {
// 	if (k1 >= 19)
// 	{
// 		if (sign1 == -1)
// 			res1 = 0;
// 		else
// 			res1 = -1;
// 	}
// 	return (res1);
// }

// int				ft_atoi(const char *str)
// {
// 	size_t	i;
// 	int		rez;
// 	int		sign;
// 	int		k;

// 	i = 0;
// 	sign = 1;
// 	rez = 0;
// 	k = 1;
// 	while ((*(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\v'
// 		|| *(str + i) == '\f' || *(str + i) == '\r' || *(str + i) == ' '))
// 		i++;
// 	if ((*(str + i) == '-' || *(str + i) == '+') && ft_isdigit(*(str + i + 1)))
// 	{
// 		if (*(str + i) == '-')
// 			sign = -1;
// 		i++;
// 	}
// 	while (ft_isdigit(*(str + i)))
// 	{
// 		rez = rez * 10 + (*(str + i++) - '0');
// 		k++;
// 	}
// 	return (sign * help(rez, sign, k));
// }"