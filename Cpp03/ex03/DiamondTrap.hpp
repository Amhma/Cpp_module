/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:13:57 by amahla            #+#    #+#             */
/*   Updated: 2022/09/28 18:56:46 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap( const string name );
		DiamondTrap( const DiamondTrap & rhs );

		~DiamondTrap( void );

		DiamondTrap &	operator=( const DiamondTrap & rhs );

		void	whoAmI( void );

		string	getName( void ) const;
		void	setName( const string name );

	private:

		string	_name;
};

#endif
