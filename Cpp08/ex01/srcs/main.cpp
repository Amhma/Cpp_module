/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:37:04 by amahla            #+#    #+#             */
/*   Updated: 2022/10/08 14:19:30 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

using std::string;

int main( void )
{
	const char	*array1 = "Salut";
	int			array2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	float		array3[] = { 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f };
	string		array4[] = { "Salut", "Tu", "Vas", "Bien" };

	std::cout << std::endl;
	iter<const char>( array1, 5, print_array );
	std::cout << std::endl;
	iter<int>( array2, 10, print_array );
	std::cout << std::endl;
	iter<float>( array3, 9, print_array );
	std::cout << std::endl;
	iter<string>( array4, 4, print_array );
	std::cout << std::endl;

	return 0;
}
