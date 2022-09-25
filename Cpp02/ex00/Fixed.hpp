/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:45:36 by amahla            #+#    #+#             */
/*   Updated: 2022/09/25 13:26:07 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

class Fixed
{
	public:

		Fixed();
		Fixed( const Fixed & fpn );
		~Fixed();
		Fixed &operator=( const Fixed & fpn );

		int		getRawBits( void ) const;
		void	setRawBits( int nb );

	private:

		int					_nb;
		static const int	_fraction = 8;
};

#endif
