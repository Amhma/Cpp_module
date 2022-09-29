/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:20:39 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 01:56:38 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__ANIMAL_HPP__
# define	__ANIMAL_HPP__

# include <string>

using std::string;

class Animal
{
	public:

		Animal( void );
		Animal( const Animal & rhs );

		virtual	~Animal( void );

		Animal &	operator=( const Animal & rhs );

		string		getType( void ) const;
		void		setType( const string type );

		virtual void		makeSound( void ) const;

	protected:

		string	_type;

};

#endif
