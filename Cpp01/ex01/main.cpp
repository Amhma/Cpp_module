/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:05:46 by amahla            #+#    #+#             */
/*   Updated: 2022/08/05 11:09:24 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>

using	std::string;
using	std::cout;
using	std::endl;
using	std::cerr;

void	output_err(void)
{
	cerr << "Invalid input: you must first enter the name of the zombie horde and then, the number of zombie in the hordes." << endl;
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
	if (i > 12 || std::atoll(str) > INT_MAX)
		return (false);
	return (true);
}

int	main(int ac, char **av)
{
	int			nb;
	string		name;
	Zombie		*zombie;

	if (ac != 3)
		output_err();
	if (!check_digit(av[2]))
		output_err();
	name = av[1];
	nb = std::atoi(av[2]);
	zombie = zombieHorde(nb, name);
	for (int i(0); i < nb; i++)
		zombie[i].announce();
	delete [] zombie;
	return (EXIT_SUCCESS);
}

