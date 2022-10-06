/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:20 by amahla            #+#    #+#             */
/*   Updated: 2022/10/06 23:40:41 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_HPP__
# define __BASE_HPP__

class	Base { public: virtual ~Base( void ){} };

class	A : public Base {};

class	B : public Base {};

class	C : public Base {};

Base	*generate( void );
void	identify( Base* p );
void	identify( Base& p );

#endif
