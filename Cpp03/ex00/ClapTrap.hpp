/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:08:48 by amahla            #+#    #+#             */
/*   Updated: 2022/09/27 17:17:33 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

using std::string;

class ClapTrap
{
	public:

		ClapTrap( void );
		ClapTrap( const ClapTrap & rhs );
		~ClapTrap( void );
		ClapTrap &	operator=( const ClapTrap & rhs );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const string	getName( void ) const;
		int				getHit( void ) const;
		int				getEnergy( void ) const;
		int				getDamage( void ) const;
		void			setHit( const int nb );
		void			setEnergy( const int nb );
		void			setDamage( const int nb );

	private:

		const string	_name;
		int				_hit;
		int				_energy;
		int				_damage;
};

#endif
