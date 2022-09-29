/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:20:39 by amahla            #+#    #+#             */
/*   Updated: 2022/09/30 01:43:17 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__AANIMAL_HPP__
# define	__AANIMAL_HPP__

# include <string>

using std::string;

class AAnimal
{
	public:

		AAnimal( void );
		AAnimal( const AAnimal & rhs );

		virtual	~AAnimal( void );

		AAnimal &	operator=( const AAnimal & rhs );

		string		getType( void ) const;
		void		setType( const string type );

		virtual void		makeSound( void ) const = 0;

	protected:

		string	_type;

};

#endif
