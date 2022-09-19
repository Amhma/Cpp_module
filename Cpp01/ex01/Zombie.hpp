/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:58:25 by amahla            #+#    #+#             */
/*   Updated: 2022/09/19 20:12:07 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <exception>
#include <new>

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
