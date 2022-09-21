/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:41:26 by amahla            #+#    #+#             */
/*   Updated: 2022/09/21 12:03:11 by amahla           ###   ########.fr       */
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


int main( int argc, const char *argv[] )
{

	if ( argc != 4 )
	{
		cout << "Error: Invalid numbers of arguments" << endl;
		exit( EXIT_FAILURE );
	}

	ifstream	ifs( argv[0], ifstream::in );
	if ( ifs.is_open() )
	{
		string		temp = argv[0];
		temp += ".replace";
		ofstream		ofs( temp, ofstream::out | ofstream::trunc );
		string		src = argv[2];
		string		rep = argv[3];

		if ( !ofs.is_open() )
		{
			cerr << "Error opening output_file" << endl;
			exit( EXIT_FAILURE );
		}
		while ( ifs.getline(temp, '\n') )
		{
			std::size_t	found;
			do
			{
				found = temp.find(src);
				if (found != string::npos)
				{
					temp.erase( found, src.size() );
					temp.insert( found, rep )
				}
			} while (found != string::npos);
			ofs << temp;
		}
		ofs.close();
	}
	else
	{
		cerr << "Error opening output_file" << endl;
		exit( EXIT_FAILURE );
	}
	ifs.close();
	return ( EXIT_SUCCESS );
}	
