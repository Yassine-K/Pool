/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 01:30:15 by ykhayri           #+#    #+#             */
/*   Updated: 2022/05/21 12:29:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 1;
	res = 0;
	while (str[i] && (str[i] < 33))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res *= j;
	return (res);
}
