/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:37:59 by ammah             #+#    #+#             */
/*   Updated: 2022/08/05 20:40:55 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:

	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	void		setName( std::string name );
	std::string	getName( void ) const;
	void		attack( void ) const;

	private:

	std::string	_name;
	Weapon		&_weapon;
};

#endif
