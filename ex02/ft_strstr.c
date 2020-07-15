/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:57:17 by kamotaun          #+#    #+#             */
/*   Updated: 2020/07/14 09:58:12 by kamotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strstr(char *str, char *to_str){

    int i = 0;
    int str_size = 0;

    while(str[str_size] != '\0')
        str_size++;

    while( to_str[i] != '\0'){
        int j = 0;
        if(to_str[i] == str[j])
            while(to_str[i + j] == str[j] &&(to_str[i + j])&&str[j]){
                if(j == str_size - 1)
                    return &to_str[i];
                j++;
            } i++;
    }
    return NULL;
}
