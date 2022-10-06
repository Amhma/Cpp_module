/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:58:59 by amahla            #+#    #+#             */

/*   Updated: 2022/10/05 21:07:38 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <exception>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main( void )
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);

	delete base;

	return ( EXIT_SUCCESS );
}
