/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:45:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/23 19:05:03 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed
{
	public:

		Fixed();
		Fixed( const Fixed& );
		~Fixed();
		Fixed &operator=( const Fixed& );

		int		getRawBits( void ) const;
		void	setRawBits( int nb );

	private:

		int					_nb;
		static int const	_fraction = 8;
};

#endif
