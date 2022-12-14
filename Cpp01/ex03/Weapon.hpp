/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:29:41 by ammah             #+#    #+#             */
/*   Updated: 2022/09/23 20:28:40 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

	Weapon( std::string type );
	~Weapon( void );
	const std::string&	getType( void ) const;
	void				setType( std::string type );

	private:

	std::string	_type;
};	

#endif
