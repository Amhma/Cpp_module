/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:37:04 by amahla            #+#    #+#             */
/*   Updated: 2022/10/11 22:09:19 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <Span.hpp>

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(10);
		sp.addNumber(3);

		sp.insertNumbersRand( 3 );

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
