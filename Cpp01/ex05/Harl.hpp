/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:46:42 by amahla            #+#    #+#             */
/*   Updated: 2022/09/21 20:17:22 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
	public:

	Harl( void );
	void	complain( std::string level );

	private:

	void	(*Harl::_tab[4](std::string))(void);

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
};
