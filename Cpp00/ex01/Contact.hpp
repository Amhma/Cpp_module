/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:36:21 by amahla            #+#    #+#             */
/*   Updated: 2022/08/03 14:18:45 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

enum e_type_string
{
	FIRST,
	LAST,
	NICK,
	PHONE,
	SECRET,
};

class	Contact
{
	public:

	Contact();
	void	getcontact_complete(void) const;
	void	getcontact_reduce(int index) const;
	void	setcontact(int type, std::string str);

	private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_dark_secret;
};

#endif
