/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:58:25 by amahla            #+#    #+#             */
/*   Updated: 2022/08/05 11:06:15 by ammah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	public:

	Zombie( void );
	~Zombie( void );
	void	setname(std::string name);
	void	announce( void ) const;

	private:

	std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
