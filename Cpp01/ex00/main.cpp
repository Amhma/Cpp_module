/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:05:46 by amahla            #+#    #+#             */
/*   Updated: 2022/09/19 17:31:25 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

using	std::string;
using	std::cout;
using	std::endl;
using	std::cerr;

void	output_err(void)
{
	cerr << "Invalid input: you must first enter the name of the zombie and then, its memory location: 'stack' or 'heap'." << endl;
	exit (EXIT_FAILURE);
}

int	main(int ac, char **av)
{
	string	memory;
	string	name;
	Zombie	*zombie;

	if (ac != 3)
		output_err();
	memory = av[2];
	name = av[1];
	if (ac == 3 && memory.compare("heap") == 0)
	{
		zombie = newZombie(name);
		cout << name << ": WwwwhoOooOOo caaAAaall mmmmme frrrommm tHe HEeeEeEEAAAAP !!!" << endl;
		delete (zombie);
	}
	else if (ac == 3 && memory.compare("stack") == 0)
	{
		cout << name << ": I'mmmm oNNNnn tHe STTTTAAAAACKKKKK ... GGRRRR" << endl;
		randomChump(name);
	}
	else
		output_err();
	return (EXIT_SUCCESS);
}
