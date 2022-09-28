/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:13:57 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 18:14:26 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:

		FragTrap( const string name );
		FragTrap( const FragTrap & rhs );

		~FragTrap( void );

		FragTrap &	operator=( const FragTrap & rhs );

		void	highFivesGuys( void );
};

#endif
