/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:08:48 by amahla            #+#    #+#             */
/*   Updated: 2022/09/26 19:20:09 by amahla           ###   ########.fr       */
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

	private:

		string	_name;
		int		_hitPoint;
		int		_manaPoint;
		int		_damage;
};

#endif
