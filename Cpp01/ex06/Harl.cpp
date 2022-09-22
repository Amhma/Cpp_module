/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:57:50 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 21:26:07 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Harl::Harl( void )
{
	this->_ft_array[0] = &Harl::_debug;
	this->_ft_array[1] = &Harl::_info;
	this->_ft_array[2] = &Harl::_warning;
	this->_ft_array[3] = &Harl::_error;
	this->_ft_array[4] = &Harl::_no_comment;
}

void	Harl::_debug( void )
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl;
	cout << "I really do !" << endl << endl;
}

void	Harl::_info( void )
{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money." << endl;
	cout << "You didn’t put enough bacon in my burger !" << endl;
	cout << "If you did, I wouldn’t be asking for more !" << endl << endl;
}

void	Harl::_warning( void )
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free." << endl;
	cout << "I’ve been coming for years whereas you started working here since last month." << endl << endl;
}

void	Harl::_error( void )
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable, I want to speak to the manager now." << endl << endl;
}

void	Harl::_no_comment( void )
{
	std::cerr << "[ Probably complaining about insignificant problems ]" << endl;
}

void	Harl::complain( std::string level )
{
	string		strs[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	std::size_t	i;

	for ( i = 0; i < 4 && strs[i] != level; i++ )
		;
	switch ( i )
	{
		case 0:
			(this->*_ft_array[i++])();
			__attribute__ ((fallthrough));
		case 1:
			(this->*_ft_array[i++])();
			__attribute__ ((fallthrough));
		case 2:
			(this->*_ft_array[i++])();
			__attribute__ ((fallthrough));
		case 3:
			(this->*_ft_array[i])();
			break;
		default:
			(this->*_ft_array[i])();
			break;
	}
}
