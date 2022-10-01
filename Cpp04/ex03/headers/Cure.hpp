/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:31:13 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 02:48:53 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

# include "AMateria.hpp"
# include <string>

using std::string;

class Cure : public AMateria
{

	public:

		Cure( void );
		Cure( const Cure & rhs );

		~Cure( void );

		Cure &	operator=( const Cure & rhs );

		virtual Cure *clone( void ) const;
		virtual void use( ICharacter& target );

};

#endif
