/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 01:44:33 by junkwama          #+#    #+#             */
/*   Updated: 2023/02/21 01:45:54 by junkwama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;
	int	ret_val;

	ret_val = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = (int)(*(str + i));
		if (!((c >= 48) && (c <= 57)))
		{
			ret_val = 0;
			break ;
		}
		i++;
	}
	return (ret_val);
}
