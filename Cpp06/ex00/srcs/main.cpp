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

#include <cstdlib>
#include <iostream>
#include <string>
#include <locale>
#include "Number.hpp"

using std::cout;
using std::endl;
using std::string;

bool	float_format(const char *char_str)
{
	std::locale	loc;
	string		str(char_str);
	int			i(0);

	while ( str[i] == ' ' || str[i] == '\t' )
		i++;
	if ( str[i] == '-' || str[i] == '+' )
		i++;
	if ( !isdigit( str[i],loc ) && str.compare( i, 3, "nan" ) != 0
		&& str.compare( i, 3, "inf" ) != 0 )
		return (false);
	if ( isdigit( str[i], loc ) )
	{
		while ( isdigit( str[i], loc ) )
			i++;
		if ( str[i] == '.' )
			i++;
		while ( isdigit( str[i], loc ) )
			i++;
	}
	else if ( str.compare( i, 3, "nan" ) == 0 || str.compare( i, 3, "inf" ) == 0 )
		i += 3;
	if ( str[i] == 'f' )
		i++;
	while ( str[i] == ' ' || str[i] == '\t' )
		i++;
	if ( str[i] )
		return (false);

	return (true);
}

int main(int argc, const char *argv[])
{
	Number	nb;

	if ( argc != 2 )
	{
		std::cout << "Error: one argument needed" << std::endl;
		return ( EXIT_FAILURE );
	}
	if ( float_format( argv[1] ) )
	{
		nb = Number( std::strtod( argv[1], NULL ) );
		std::cout << nb;
	}
	else
	{
		std::cout << "Error: wrong format number" << std::endl;
		return ( EXIT_FAILURE );
	}

	return ( EXIT_SUCCESS );
}
