//
// Created by Dewitt Chanell on 12/25/20.
//

int	ft_u_len(unsigned int num)
{
	int num_len;

	if (num == 0)
		return (1);
	num_len = 0;
	while (num != 0)
	{
		num_len++;
		num /= 10;
	}
	return (num_len);
}
