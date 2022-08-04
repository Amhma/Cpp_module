/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:48:39 by amahla            #+#    #+#             */
/*   Updated: 2022/08/02 17:24:51 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int	main(int ac, char **av)
{
	std::locale	loc;

	int	y(0);

	if (ac > 1)
	{
		while (av[++y])
		{
			for(int i(0); *(av[y] + i) ; i++)
				std::cout << toupper(*(av[y] + i), loc);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
