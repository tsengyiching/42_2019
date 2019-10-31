/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 17:55:13 by yictseng     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/27 13:51:16 by yictseng    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nb;

	len = (n < 0 ? 2 : 1);
	nb = n;
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		len++;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	while (len - 1 >= 0 && str[len - 1] != '-')
	{
		str[len - 1] = ((n % 10) < 0 ? (-(n % 10)) + '0' : (n % 10) + '0');
		n = n / 10;
		len--;
	}
	return (str);
}
