/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:57:50 by amahla            #+#    #+#             */
/*   Updated: 2022/09/21 20:10:25 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;
using std::string

Harl::Harl( void )
{
	this->_tab[0] = this->_debug;
	this->_tab[1] = this->_info;
	this->_tab[2] = this->_warning;
	this->_tab[3] = this->_error;
}

void	Harl::_debug( void )
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << endl;
}

void	Harl::_info( void )
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void	Harl::_warning( void )
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::_error( void )
{
	cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}

void	Harl::complain( std::string level )
{
	int (A::*ptr)(int) = &A::fonction;
