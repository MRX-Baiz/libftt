/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaiz <mbaiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:23:43 by mbaiz             #+#    #+#             */
/*   Updated: 2023/11/08 13:23:44 by mbaiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	end;
	size_t	start;
	char	*tmp;

	end = ft_strlen(s1);
	tmp = 0;
	start = 0;
	if (!set)
		return(ft_strdup(s1));
	/* si s1 point sur null*/
	if (end == 0)
		return (ft_strdup(""));
	/* we skip the the set frm the start and the end of string s1 */
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	/* we recheck if the s1 pointe on null */
	if(end == 0)
		return (ft_strdup(""));
	tmp = (char *)malloc((end - start + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	/* we cpy to the tmp*/
	ft_strlcpy(tmp, s1 + start, end - start + 1);
	return (tmp);
}
