/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:52:57 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:16:17 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__


# include <string>

class Character;
class AMateria;

using std::string;

class ICharacter
{

	public:

		virtual	~ICharacter( void ) {}

		virtual string const &	getName( void ) const = 0;

		virtual void			equip( AMateria *m ) = 0;
		virtual void			unequip( int idx ) = 0;
		virtual void			use( int idx, ICharacter& target ) = 0;

};

#endif
