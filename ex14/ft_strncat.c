/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:08:45 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 10:24:07 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* ft_strncat(char *dest, char *src, int n){
	int i = 0;
	char* ptr = (char*)malloc(sizeof((char)*1023));
	
	while(dest[i] != '\0')
		i++;
	ptr = dest[i];
	int k = 0;
	while(k < n)
		*ptr++ = *src++;
	return dest;
}
