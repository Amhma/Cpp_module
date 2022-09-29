/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:37:03 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 14:54:38 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <string>

using std::string;

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & rhs );

		~WrongAnimal( void );

		WrongAnimal &	operator=( const WrongAnimal & rhs );

		string		getType( void ) const;
		void		setType( const string type );

		void		makeSound( void ) const;

	protected:

		string	_type;

};

#endif
