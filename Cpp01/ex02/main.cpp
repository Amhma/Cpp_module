/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ammah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:15:53 by ammah             #+#    #+#             */
/*   Updated: 2022/09/23 14:19:34 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;

int	main( void )
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF  = str;

	cout << endl;
	cout << "    Address in memory of str : " << &str << endl;
	cout << "    Address in memory of stringPTR : " << stringPTR << endl;
	cout << "    Address in memory of stringREF : " << &stringREF << endl;
	cout << endl;
	cout << "    Value of str : " << str << endl;
	cout << "    Value of stringPTR : " << *stringPTR << endl;
	cout << "    Value of stringREF : " << stringREF << endl;
	cout << endl;
	return (EXIT_SUCCESS);
}
