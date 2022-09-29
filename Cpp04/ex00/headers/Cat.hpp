/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:35:55 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 01:56:45 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__ 
# define __CAT_HPP__ 
	
#include "Animal.hpp"

using std::string;

class Cat : public Animal
{
	public:

		Cat( void );
		Cat( const Cat & rhs );

		virtual	~Cat( void );

		Cat &	operator=( const Cat & rhs );

		virtual void	makeSound( void ) const;

};

#endif
