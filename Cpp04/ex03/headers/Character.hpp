/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:03:16 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 02:46:04 by amahla           ###   ########.fr       */
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

		~Character( void );

		Character &	operator=( const Character & rhs );

		string const &	getName( void ) const;
		AMateria**		getMaterias( void ) const;
		void				setMaterias( const AMateria **m );

		void			equip( AMateria *m );
		void			unequip( int idx );
		void			use( int idx, ICharacter& target );

	private:

		const string	_name;
		AMateria		*_m[4];
		AMateria		*_mOnFloor[4];
};

#endif
