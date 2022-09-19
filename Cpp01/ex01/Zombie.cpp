/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:57:55 by amahla            #+#    #+#             */
/*   Updated: 2022/09/19 20:21:27 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using	std::cout;
using	std::string;
using	std::endl;

Zombie::Zombie( void )
{
	this->_name = "";
}

Zombie::~Zombie( void )
{
	cout << this->_name << ": Aaaaaaaaaarrrgggg !!" << endl;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}

void	Zombie::announce( void ) const
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}
