/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:57:55 by amahla            #+#    #+#             */
/*   Updated: 2022/09/23 14:09:17 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

using	std::cout;
using	std::string;
using	std::endl;

Zombie::Zombie( string name )
{
	this->_name = name;
}

Zombie::~Zombie( void )
{
	cout << this->_name << ": zombie destroyed" << endl;
}

void	Zombie::announce( void )
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}
