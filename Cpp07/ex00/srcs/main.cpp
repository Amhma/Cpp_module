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

#include <iostream>
#include <string>
#include "whatever.hpp"

using std::cout;
using std::endl;
using std::string;

int main( void )
{
	int		x( 30 );
	int		y( 70 );
	string	str1( "I am the fisrt string" );
	string	str2( "I am the second string" );

	cout << endl << "	Instantiation:" << endl;
	cout << endl << "x = 30" << endl << "y = 100" << endl << endl;;
	cout << str1 << " ( str1 )" << endl;
	cout << str2 << " ( str2 )" << endl << endl;

	cout << "	Using Templates functions:" << endl << endl;
	cout << "min is " << min<int>( x, y ) << endl;
	cout << "max is " << max<int>( x, y ) << endl << endl;

	swap<string>( &str1, &str2 );
	cout << "swaping ..." << endl << endl;
	cout << str1 << " ( str1 )" << endl;
	cout << str2 << " ( str2 )" << endl << endl;

	return ( 0 );
}
