/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:16:41 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 10:29:15 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char* s1, char* s2){
	int s1_size = 0, s2_size = 0;
	while(s1[s1_size])
		s1_size++;

	while(s2[s2_size])
		s2_size++;

	if(s1_size != s2_size) //String sizes the same??
		return (0);
	else{
		int index = 0;
		while(s1[index] != '\0'){
			if(s1[index] != s2[index])
				return (0); //End if any of the string characters is different
			index++;
		}
	}
	return (1);
}
