/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <michen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:14:08 by michen            #+#    #+#             */
/*   Updated: 2023/11/17 19:39:39 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*str;

	if (nmemb > 0 && size > 18446744073709551615UL / nmemb)
		return (NULL);
	str = (char *)malloc((nmemb * size) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	ft_bzero(str, (size * nmemb));
	return (str);
}
