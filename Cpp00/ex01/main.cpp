/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:56:59 by amahla            #+#    #+#             */
/*   Updated: 2022/08/04 14:11:17 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <locale>
# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool	check_space(string str)
{
	for (int i(0); str[i]; i++)
	{
		if (str[i] != ' ')
			return (true);
	}
	return (false);
}

void	write_error(int type)
{
	if (type == FIRST)
		cout << "    incorrect input format, it must contain only letters, spaces or dash character." << endl;
	else if (type == NICK)
		cout << "    incorrect input format, it can't be empty or contain only spaces." << endl;
	else if (type == PHONE)
	{
		cout << "    incorrect input format, it must contain only numbers or '+' on the first character";
		cout << " and at least one number." << endl;
	}
}

bool	check_str(string str, int type)
{
	if (str.empty() || !check_space(str))
	{
		write_error(NICK);
		return (false);
	}
	for (int i(0); str[i]; i++)
	{
		if ((type == FIRST || type == LAST)
			&& (!std::isalpha(str[i]) && str[i] != ' ' && str[i] != '-'))
		{
			write_error(FIRST);
			return (false);
		}
		else if (type == PHONE && ((i == 0 && !std::isdigit(str[i]) && str[i] != '+')
				|| (i > 0 && !std::isdigit(str[i])) || (str[i] == '+' && str.size() == 1)))
		{
			write_error(PHONE);
			return (false);
		}
	}
	return (true);
}	

string	read_contact(int type)
{
	string	str;
	int		i(0);

	while (1)
	{
		if (type == FIRST)
			cout << "    First name : ";
		else if (type == LAST)
			cout << "    Last name : ";
		else if (type == NICK)
			cout << "    Nickname : ";
		else if (type == PHONE)
			cout << "    Phone number : ";
		else if (type == SECRET)
			cout << "    Your darkest secret... : ";
		std::getline(cin, str);
		if (std::cin.eof())
			break ;
		if (check_str(str, type))
			break ;
	}
	while (str[i] == ' ')
		i++;
	if (i > 0)
		str.erase(0, (size_t)(i - 1));
	for (i = str.size() - 1; str[i] == ' ' && i >= 0; i--)
		str.erase(i, str.size() - 1);
	return (str);
}

void	write_menu(void)
{
	cout << endl << "    you can now choose what you want to do : " << endl << endl;
	cout << "        - add a new contact (ADD)." << endl;
	cout << "        - display contacts registered (SEARCH)." << endl;
	cout << "        - exit (EXIT)." << endl << endl;
}

void	check_cin(void)
{
	if (std::cin.eof())
		exit (EXIT_FAILURE);
}	

int	main(void)
{
	PhoneBook	book;
	Contact		contact;
	string		choice;
	int			index(0);

	cout << endl << "    Hello, dear master," << endl;
	write_menu();

	while(1)
	{
		cout << "    Enter your choice : ";
		std::getline(cin, choice);
		check_cin();
		if (choice.compare("ADD") == 0)
		{
			cout << endl << "    You can now register a new contact :" << endl << endl;
			contact.setcontact(FIRST, read_contact(FIRST));
			check_cin();
			contact.setcontact(LAST, read_contact(LAST));
			check_cin();
			contact.setcontact(NICK, read_contact(NICK));
			check_cin();
			contact.setcontact(PHONE, read_contact(PHONE));
			check_cin();
			contact.setcontact(SECRET, read_contact(SECRET));
			check_cin();
			book.setbook(contact, index);
			
			cout << endl << "    Contact registred !" << endl << endl;
			if (index == 7)
				index = 0;
			else
				index++;
		}
		else if (choice.compare("SEARCH") == 0)
		{
			book.getbook();
			check_cin();
		}
		else if (choice.compare("EXIT") == 0)
		{
			cout << endl << "    Alright, see you soon..." << endl << endl;
			break ;
		}
		else
			cout << endl << "    Invalid input, please retry." << endl << endl;
	}
	return (EXIT_SUCCESS);
}
