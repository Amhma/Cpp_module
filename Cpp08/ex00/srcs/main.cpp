/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:37:04 by amahla            #+#    #+#             */
/*   Updated: 2022/10/09 16:52:37 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <vector>
#include <easyfind.hpp>

#include <string>

# define MAX_VAL 100
int main(int, char**)
{
    std::vector<int>	numbers(MAX_VAL);

	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = i;
	try
	{
		std::cout << easyfind< std::vector<int> >( numbers, 50 ) << std::endl;
	}
	catch( std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
