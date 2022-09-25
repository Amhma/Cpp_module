/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:45:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/25 19:35:47 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed( const int nb );
		Fixed( const float nb );
		Fixed( const Fixed & fpn );

		~Fixed();

		Fixed &	operator=( const Fixed & fpn );
		Fixed	operator+( const Fixed & fpn ) const;
		Fixed	operator-( const Fixed & fpn ) const;
		Fixed	operator*( const Fixed & fpn ) const;
		Fixed	operator/( const Fixed & fpn ) const;

		bool	operator>( const Fixed & fpn ) const;
		bool	operator<( const Fixed & fpn ) const;
		bool	operator>=( const Fixed & fpn ) const;
		bool	operator<=( const Fixed & fpn ) const;
		bool	operator==( const Fixed & fpn ) const;
		bool	operator!=( const Fixed & fpn ) const;

		Fixed &	operator++( void );
		Fixed	operator++( int );
		Fixed &	operator--( void );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void	setRawBits( int nb );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed &			min( Fixed & fpn1, Fixed & fpn2 );
		static const Fixed &	min( const Fixed & fpn1, const Fixed & fpn2 );
		static Fixed &			max( Fixed & fpn1, Fixed & fpn2 );
		static const Fixed &	max( const Fixed & fpn1, const Fixed & fpn2 );

	private:

		int					_nb;
		static const int	_fraction = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fpn );

#endif
