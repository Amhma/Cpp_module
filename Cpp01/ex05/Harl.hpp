/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:46:42 by amahla            #+#    #+#             */
/*   Updated: 2022/09/22 11:55:06 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

# include <string>


class Harl
{
	public:

	Harl( void );
	void			complain( std::string level );
	typedef void	(Harl::*ft)( void );

	private:

	ft		_ft_array[5];

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	void	_no_comment( void );
};

#endif
