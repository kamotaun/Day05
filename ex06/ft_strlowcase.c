/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:54:50 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 11:30:37 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char* str){
	if(str == NULL)
		return NULL;
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32; // or equivalently str[i] += 'a' - 'A';
			i++;
	}
	return str;
}
