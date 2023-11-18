/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_strcmp.c                                     :+:      :+:    :+:   */
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
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = 0;
	return (dest);
}
/*int main(int a, char *args[]){
	 if(a!=4)return 0;
	char *dest=args[1];
	char *src=args[2];
	int n = atoi(args[3]);
	ft_strncpy(dest, src, n);
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