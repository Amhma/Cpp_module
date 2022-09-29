/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:37:32 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 14:45:01 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"

using std::string;

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		WrongCat( const WrongCat & rhs );

		~WrongCat( void );

		WrongCat &	operator=( const WrongCat & rhs );

		void	makeSound( void ) const;

};

#endif
