/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:03:16 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 12:55:09 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP_
# define __CHARACTER_HPP_

# include "ICharacter.hpp"
# include "AMateria.hpp"

using std::string;

class Character : public ICharacter
{

	public:

		Character( void );
		Character( const string name );
		Character( const Character & rhs );

		virtual	~Character( void );

		Character &	operator=( const Character & rhs );

		virtual string const &	getName( void ) const;
		AMateria**				getMateria( void ) const;
		void					setMateria( const AMateria **m );

		virtual void			equip( AMateria *m );
		virtual void			unequip( int idx );
		virtual void			use( int idx, ICharacter& target );

	private:

		const string	_name;
		AMateria		*_m[4];
		AMateria		*_mOnFloor[4];
};

#endif
