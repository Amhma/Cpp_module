/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:26:33 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 01:33:22 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

# include <string>
# include "Character.hpp"

using std::string;

class AMateria
{
	public:

		AMateria( void );
		AMateria( const string & type );
		AMateria( const AMateria & rhs );

		virtual	~AMateria( void );

		AMateria &	operator=( const AMateria & rhs );

		const string &	getType( void ) const;

		virtual AMateria	*clone( void ) const = 0;
		virtual void		use( ICharacter& target );

	protected:

		const string	_type;
};

#endif
