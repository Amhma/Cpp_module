/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:29:41 by ammah             #+#    #+#             */
/*   Updated: 2022/08/05 20:32:19 by ammah            ###   ########.fr       */
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
	const std::string	getType( void ) const;
	void				setType( std::string type );

	private:

	std::string	_type;
};	

#endif
