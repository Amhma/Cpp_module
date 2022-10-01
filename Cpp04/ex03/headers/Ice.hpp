/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:16:11 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:17:04 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

# include "AMateria.hpp"
# include <string>

using std::string;


class Ice : public AMateria
{
	public:

		Ice( void );
		Ice( const Ice & rhs );

		~Ice( void );

		Ice &	operator=( const Ice & rhs );

		virtual Ice *clone( void ) const;
		virtual void use( ICharacter& target );

};

#endif
