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

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hexa(int dec)
{
	int r;
	//printf("\n%d\n",dec);
	r = 92;
	ft_putchar(92);
	ft_putchar(48);
    if(dec < 10)
	{
		ft_putchar(dec + 48);
		return;
	}
    if(dec < 16)
	{
		ft_putchar(dec + 48 + 7 + 32);
		return;
	}
	r = dec % 16;
	ft_dec_to_hexa(dec / 16);
	ft_putchar(r + 48);

}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int q;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_dec_to_hexa(str[i]);
		i++;
	}
}

/*int main(int n, char *args[]){
	char* str;
	if(n != 2)
		return (0);
	str = args[1];
	ft_putstr_non_printable(str);
}*/
/*
Coucou
tu vas bien ? */