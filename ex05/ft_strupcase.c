/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:45:13 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 10:53:14 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char* str){
	if(str == NULL) //NULL case can  also be handled by the code automatically.
		return NULL;

	int index = 0;
	while(str[index] != '\0'){
		if(str[index] >= 'a' && str[index] <= 'z') //Check for small letters only
			str[index] -= 32;
		index++;
		
	}
	return str;
}
