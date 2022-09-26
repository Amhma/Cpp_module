/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:45:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 18:32:00 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
	public:

		Fixed( void );
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed( const Fixed & fpn );
		~Fixed( void );
		Fixed & operator=( const Fixed & fpn );

		int		getRawBits( void ) const;
		void	setRawBits( int nb );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_nb;
		static const int	_fraction = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fpn );

#endif
