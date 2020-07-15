/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:32:51 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 12:22:24 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strcapitalize(char *str){
	int i = 1;

	if(str[0] == NULL)
		return NULL; //String is empty

	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while(str[i] != '\0'){

		if(str[i] >= 'a' && str[i] <= 'z'){

			if((str[i - 1] <= 'a' && str[i - 1] >= 'z') ||(str[i - 1] <= 'A' && str[i - 1] && str[i - 1] >= 'Z')|| (str[i - 1] >= '0' && str[i - 1] <= '9')){
				if(str[i + i] != '\0')
				if((str[i + 1] >= 'a' && str[i + 1] <= 'z')||(str[i + 1] >= 'A'&& str[i + 1] <= 'Z'))
					str[i] -= 32;
			} else 
				if(str[i] >= 'A' && str[i] <= 'Z'){
					str[i] += 32;
			}
		}
	}

	return str;
}
