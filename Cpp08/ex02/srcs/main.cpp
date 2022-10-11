/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:37:04 by amahla            #+#    #+#             */
/*   Updated: 2022/10/11 15:12:24 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		try
		{
			std::cout << std::endl << " Small Test iterators : " << std::endl << std::endl;
			MutantStack<int>	sp;

			sp.push(6);
			sp.push(3);
			sp.push(17);
			sp.push(9);
			sp.push(11);

			MutantStack<int>::const_iterator	it = sp.cbegin();
			MutantStack<int>::const_iterator	ite = sp.cend();

			while ( it != ite )
				std::cout << " " << *(it++) << std::endl;
		}
		catch ( std::exception & e )
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl << " Test with MutantStack : " << std::endl << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << " first value : " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << std::endl;
		std::cout << " size : " << mstack.size() << std::endl;
		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int> st;
		st = mstack;
		MutantStack<int>::iterator it = st.begin();
		MutantStack<int>::iterator ite = st.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << " " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << std::endl << " Test with list : " << std::endl << std::endl;
	{
		std::list<int> mlist;

		mlist.push_back(5);
		mlist.push_back(17);

		std::cout << " first value : " << mlist.back() << std::endl;

		mlist.pop_back();

		std::cout << std::endl;
		std::cout << " size : " << mlist.size() << std::endl;
		std::cout << std::endl;

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);

		std::list<int> st;
		st = mlist;
		std::list<int>::iterator it = st.begin();
		std::list<int>::iterator ite = st.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << " " << *it << std::endl;
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}
