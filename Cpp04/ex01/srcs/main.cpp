/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:20:43 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 14:11:08 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal *meta[10];

	for ( int i(0); i < 10; i++ )
	{
		if ( !i % 2 )
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
		std::cout << std::endl;
	}

	for ( int i(0); i < 10; i++ )
	{
		delete meta[i];
		std::cout << std::endl;
	}
	return 0;
}
