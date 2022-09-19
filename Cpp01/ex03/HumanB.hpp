/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:37:59 by ammah             #+#    #+#             */
/*   Updated: 2022/08/05 20:41:06 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:

	HumanB( std::string name );
	~HumanB( void );
	void		setName( std::string name );
	std::string	getName( void ) const;
	void		attack( void ) const;
	void		setWeapon( Weapon &weapon );

	private:

	Weapon		*_weapon;
	std::string	_name;
};

#endif
