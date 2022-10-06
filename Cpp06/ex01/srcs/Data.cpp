/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:48 by amahla            #+#    #+#             */
/*   Updated: 2022/10/06 13:45:50 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize( Data* ptr )
{
	return (  reinterpret_cast<uintptr_t>(ptr) );
}

Data*	deserialize(uintptr_t raw)
{
	return ( reinterpret_cast<Data *>(raw) );
}
