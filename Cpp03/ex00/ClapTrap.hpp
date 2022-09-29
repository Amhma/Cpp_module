/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:08:48 by amahla            #+#    #+#             */
/*   Updated: 2022/09/29 10:55:18 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <string>

using std::string;

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( const string name );
		ClapTrap( const ClapTrap & rhs );

		~ClapTrap( void );

		ClapTrap &	operator=( const ClapTrap & rhs );

		void	attack(const string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		string			getName( void ) const;
		unsigned int	getHit( void ) const;
		unsigned int	getEnergy( void ) const;
		unsigned int	getDamage( void ) const;

		void	setName( const string name );
		void	setHit( const unsigned int nb );
		void	setEnergy( const unsigned int nb );
		void	setDamage( const unsigned int nb );

	private:

		string			_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_damage;
};

#endif
