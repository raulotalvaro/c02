/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:54:31 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/06 08:23:56 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < size)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = 0;
	return (i);
}
/*int main(int a, char *args[]){
	 if(a!=4)return 0;
	char *dest=args[1];
	char *src=args[2];
	int n = atoi(args[3]);
	ft_strlcpy(dest, src, n);
	int i;
	i = 0;
	int s;
	while (dest[i] != '\0')
	{   
		s = dest[i];
		write(1, &s,1);
		i++;
	}  
}*/