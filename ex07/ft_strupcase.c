/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:54:31 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/06 08:23:56 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((97 <= str[i] && str[i] <= 122)))
			str[i] -= 32;
		i++;
	}
	return (1);
}
/*int main(int a, char *args[]){
	if(a!=2)return 0;
	char *str=args[1];   
	int i=ft_strupcase(str)+48;
	write(1, &i,1);
}*/