/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:21:12 by amahla            #+#    #+#             */
/*   Updated: 2022/08/04 14:11:20 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	_line = 0;
}

int	check_input_index(void)
{
	std::string	str;

	while (1)
	{
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (-1);
		if (str.size() > 1 || (str[0] < 49 || str[0] > 56))
		{
			std::cout << std::endl << "    Invalid input, please retry" << std::endl;
			std::cout << std::endl << "    Please, enter the contact id (1-8) : ";
		}
		else
			break ;
	}
	return (std::atoi(str.c_str()));
}

void	PhoneBook::setbook(Contact contact, int index)
{
	_contact[index] = contact;
	if (_line < 8)
		_line++;
}

void	PhoneBook::getbook(void)
{
	int	i;

	if (_line == 0)
	{
		std::cout << std::endl << "    ...No contact registered" << std::endl << std::endl;
		return ;
	}
	for(i = 0; i < _line; i++)
		_contact[i].getcontact_reduce(i + 1);
	std::cout << std::endl << "    Please, enter the contact id (1-8) : ";
	i = check_input_index();
	if (i == -1)
		return ;
	if (i - 1 >= _line)
		std::cout << std::endl << "    No contact at this index..." << std::endl << std::endl;
	else
	{
		std::cout << std::endl << "    Contact informations :" << std::endl << std::endl;
		_contact[i - 1].getcontact_complete();
	}
}
