/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:27:37 by amahla            #+#    #+#             */
/*   Updated: 2022/08/04 13:44:59 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

# include <iostream>
# include <string>
# include "Contact.hpp"

class	PhoneBook
{
	public:

	PhoneBook();
	void	setbook(Contact contact, int index);
	void	getbook(void);

	private:

	int		_line;
	Contact _contact[8];
};

#endif
