/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:05:46 by amahla            #+#    #+#             */
/*   Updated: 2022/09/19 20:27:37 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>

using	std::string;
using	std::cout;
using	std::endl;
using	std::cerr;

void	output_err(size_t option)
{
	if (option == 1)
	{
		cerr << "Invalid input: you must first enter the name of the zombie horde and then, the number of zombie in the hordes." << endl;
	}
	else
	{
		cerr << "Invalid input: the number of zombie in the hordes must be between 0 and 2147483647." << endl;
	}
	exit (EXIT_FAILURE);
}

bool	check_digit(char *str)
{
	int				i(0);

	while (str[i] =='0')
		i++;
	for (int i(0); str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	if (i > 12 || std::atol(str) > INT_MAX)
		return (false);
	return (true);
}

int	main(int ac, char **av)
{
	int			nb;
	string		name;
	Zombie		*zombie;

	if (ac != 3)
		output_err(1);
	if (!check_digit(av[2]))
		output_err(2);
	name = av[1];
	nb = std::atol(av[2]);
	if (nb)
		zombie = zombieHorde(nb, name);
	for (int i(0); i < nb && zombie; i++)
		zombie[i].announce();
	delete [] zombie;
	return (EXIT_SUCCESS);
}

