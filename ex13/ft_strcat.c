/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:57:33 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/15 10:19:47 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcat(char* dest, char *src){
	int i = 0;
	if(src == NULL || dest == NULL)
		return NULL;

	while(dest[i] != '\0')
		i++;

	char* ptr = (char*)malloc(sizeof((char*)*1023));
	   	ptr = dest + i;

	while(*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';

	return dest;
}
