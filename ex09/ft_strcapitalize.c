/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:54:31 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/06 08:23:56 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//los caracteres alfabeticos en ascci van del 65 al 90 
//(mayusculas) y del 65+32=97 al 90+32=122 (minusculas)
int	amayuscula(int a)
{
	if (97 <= a && a <= 122)
		return (a - 32);
	return (a);
}

int	aminuscula(int a)
{
	if (65 <= a && a <= 90)
		return (a + 32);
	return (a);
}

int	size_of(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*void imprimir(char *str){
	int i,q;
	i = 0;
	while(str[i]!=0){
		q=str[i];
		write(1,&q,1);
		i++; 
	}
}*/

void	ft_strcapitalize(char *str)
{
	int	i;
	int	n;
	int	j;

	n = size_of(str);
	str[0] = amayuscula(str[0]);
	i = 1;
	while (i < n -1)
	{
		j = i - 1;
		if (str[i] == 9 || str[i] == 10 || str[i] == 13 || str[i] == 32)
		{
			str[i + 1] = amayuscula(str[i + 1]);
		}
		else if (str[j] != 9 && str[j] != 10 && str[j] != 13 && str[j] != 32)
		{
			str[i] = aminuscula(str[i]);
		}
		i++;
	}
}

/*int main(int a, char *args[]){
	if(a!=2)return 0;
	char *str=args[1];   
	imprimir(str);
	imprimir("\n");

	ft_strcapitalize(str);
	imprimir(str);
	int i=0,q;
	 
}*/