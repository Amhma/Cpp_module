/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:58:25 by amahla            #+#    #+#             */
/*   Updated: 2022/08/04 20:57:07 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:

	Zombie( std::string name );
	~Zombie( void );
	void		announce( void );

	private:

	std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
