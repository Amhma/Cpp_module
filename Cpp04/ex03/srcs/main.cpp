/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:18:55 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:55:45 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");

	std::cout << std::endl << std::endl;

	for ( int i(2); i; i-- )
	{
		me->unequip( 0 );
		me->unequip( 1 );
		AMateria* tmp;
		tmp = src->createMateria("ice");
		std::cout << std::endl;
		me->equip(tmp);
		tmp = src->createMateria("cure");
		std::cout << std::endl;
		me->equip(tmp);
	}

	std::cout << std::endl;

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << std::endl;

	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	return 0;
}
