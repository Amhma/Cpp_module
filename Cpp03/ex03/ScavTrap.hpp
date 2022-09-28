/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:13:57 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 18:12:11 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:

		ScavTrap( const string name );
		ScavTrap( const ScavTrap & rhs );

		~ScavTrap( void );

		ScavTrap &	operator=( const ScavTrap & rhs );

		void	attack(const string & target);
		void	guardGate( void );
};

#endif
