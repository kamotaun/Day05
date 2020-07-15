/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:24:12 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 10:31:49 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(char* s1, char* s2, unsigned int n){
	if(s1[n] == '\0' || s2[n] == '\0')
		return (0);

	int index = 0;

	while(s1[index] != '\0'){

		if(s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
