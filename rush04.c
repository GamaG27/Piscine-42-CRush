/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimunoz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:05:17 by dimunoz-          #+#    #+#             */
/*   Updated: 2024/07/06 17:58:15 by dimunoz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	print(int largo, char primero, char segundo, char tercero)
{
	int	contador_letra;

	contador_letra = 1;
	while (contador_letra <= largo)
	{
		if (contador_letra == 1)
		{
			ft_putchar(primero);
		}
		else if (contador_letra == largo)
		{
			ft_putchar(tercero);
		}
		else
		{
			ft_putchar(segundo);
		}
		contador_letra++;
	}
	return (0);
}

int	rush(int x, int y)
{
	int	contador_linea;

	contador_linea = 1;
	while (contador_linea <= y)
	{
		if (contador_linea == 1)
		{
			print(x, 'A', 'B', 'C');
		}
		else if (contador_linea == y)
		{
			print(x, 'C', 'B', 'A');
		}
		else
		{
			print(x, 'B', ' ', 'B');
		}
		contador_linea++;
		ft_putchar('\n');
	}
	return (0);
}
