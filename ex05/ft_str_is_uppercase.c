/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase     .c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:54:31 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/06 08:23:56 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!((65 <= str[i] && str[i] <= 90)))
			return (0);
		i++;
	}
	return (1);
}
/*int main(int a, char *args[]){
	if(a!=2)return 0;
	char *str=args[1];   
	int i=ft_str_is_uppercase(str)+48;
	write(1, &i,1);
}*/