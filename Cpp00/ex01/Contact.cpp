/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:46:30 by amahla            #+#    #+#             */
/*   Updated: 2022/08/03 15:57:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(void)
{
	_first_name = "";
	_last_name = "";
	_nickname = "";
	_phone_number = "";
	_dark_secret = "";
}

void	write_format(std::string str)
{
	std::cout << "|";
	if (str.size() > 10)
	{
		for (int i(0); i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		for (int i(str.size()); i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
}

void	write_format_index(int index)
{
	std::cout << std::endl << "    |";
	for (int i(1); i < 10; i++)
		std::cout << " ";
	std::cout << index;
}

void	Contact::setcontact(int	type, std::string str)
{
	if (type == FIRST)
		_first_name = str;
	else if (type == LAST)
		_last_name = str;
	else if (type == NICK)
		_nickname = str;
	else if (type == PHONE)
		_phone_number = str;
	else if (type == SECRET)
		_dark_secret = str;
}	

void    Contact::getcontact_reduce(int index) const
{
	std::cout << "    ";
	write_format_index(index);
	write_format(_first_name);
	write_format(_last_name);
	write_format(_nickname);
	std::cout << "|" << std::endl;
}

void    Contact::getcontact_complete(void) const
{
	std::cout << "    First Name : " << _first_name << std::endl;
	std::cout << "    Last Name : " << _last_name << std::endl;
	std::cout << "    Nickname : " << _nickname << std::endl;
	std::cout << "    Phone Number : " << _phone_number << std::endl;
	std::cout << "    Darkest Secret : " << _dark_secret << std::endl << std::endl;
}
