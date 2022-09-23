/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:41:26 by amahla            #+#    #+#             */
/*   Updated: 2022/09/23 20:31:03 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using	std::string;
using	std::ifstream;
using	std::ofstream;
using	std::cout;
using	std::cerr;
using	std::endl;

void	print_err( const char *str )
{
	cout << str << endl;
	exit( EXIT_FAILURE );
}

void	close_ifs( ifstream& ifs, const char *str )
{
	ifs.close();
	print_err( str );
}

void	read_file( ifstream& ifs, ofstream& ofs, const char *argv[], const string name_ofs )
{
	string		src = argv[2];
	string		rep = argv[3];
	string		temp;
	std::size_t	found;
	
	std::getline( ifs, temp );
	if ( ifs.eof() && temp == "")
		close_ifs( ifs, "Empty file" );
	if ( ifs.bad() )
		close_ifs( ifs, "Error reading input_file" );
	ofs.open( name_ofs.c_str(), ofstream::out | ofstream::trunc );
	if ( !ofs.is_open() )
		close_ifs( ifs, "Error opening output_file" );		
	do
	{
		found = temp.find(src);
		while ( found != string::npos && src != "" )
		{
			temp.erase( found, src.size() );
			temp.insert( found, rep );
			found = temp.find(src);
		}
		ofs << temp << endl;
	} while ( std::getline( ifs, temp ) );
	
	ofs.close();
}

int main( int argc, const char *argv[] )
{

	if ( argc != 4 )
		print_err( "Error: Invalid numbers of arguments" );

	ifstream	ifs( argv[1], ifstream::in );
	string		temp;
	ofstream	ofs;

	if ( !ifs.is_open() )
		print_err( "Error opening input_file" );
	temp = argv[1];
	temp += ".replace";
	read_file( ifs, ofs, argv, temp );
	ifs.close();
	return ( EXIT_SUCCESS );
}
