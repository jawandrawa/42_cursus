/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:04:42 by mtacunan          #+#    #+#             */
/*   Updated: 2021/10/19 14:00:04 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count_h;
	size_t	count_n;

	if (!*needle)
		return ((char *)haystack);
	count_h = 0;
	while (haystack[count_h] && 0 < len)
	{
		count_n = 0;
		while (count_n < len
			&& haystack[count_h + count_n] == needle[count_n])
		{
			if (!needle[count_n + 1])
				return ((char *)&haystack[count_h]);
			count_n++;
		}
		count_h++;
		len--;
	}
	return (NULL);
}
// int main()
// {
//     printf("%s", ft_strnstr("aaabcabcd", "cd", 8));
// }
