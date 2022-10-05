/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:20 by amahla            #+#    #+#             */
/*   Updated: 2022/10/05 20:56:58 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __NUMBER_HPP__
# define __NUMBER_HPP__

# include <ostream>

# define DEBUG 0

class Number
{
	public:

		Number( void );
		Number( const double numberDouble );
		Number( const Number & rhs );

		~Number( void );

		Number &	operator=( const Number & rhs );

		double		getDouble( void ) const;
		void		setDouble( const double numberDouble );

		operator	char( void );
		operator	int( void );
		operator	float( void );

	private:

		double	_numberDouble;
};

std::ostream &	operator<<( std::ostream & o, const Number & rhs );

#endif
