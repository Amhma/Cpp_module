/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:57:50 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 11:59:46 by amahla           ###   ########.fr       */
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
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl;
	cout << "I really do !" << endl;
}

void	Harl::_info( void )
{
	cout << "I cannot believe adding extra bacon costs more money." << endl;
	cout << "You didn’t put enough bacon in my burger !" << endl;
	cout << "If you did, I wouldn’t be asking for more !" << endl;
}

void	Harl::_warning( void )
{
	cout << "I think I deserve to have some extra bacon for free." << endl;
	cout << "I’ve been coming for years whereas you started working here since last month." << endl;
}

void	Harl::_error( void )
{
	cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}

void	Harl::_no_comment( void )
{
	std::cerr << "No comment" << endl;
}

void	Harl::complain( std::string level )
{
	string		strs[4] = { "debug", "info", "warning", "error" };
	std::size_t	i;

	for ( i = 0; i < 4 && strs[i] != level; i++ )
		;
	(this->*_ft_array[i])();
}
