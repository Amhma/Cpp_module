/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:04:20 by amahla            #+#    #+#             */
/*   Updated: 2022/10/06 13:53:21 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
# define __DATA_HPP__

# include <stdint.h>

typedef struct Data {

	unsigned int	u_data;
	int				i_data;
	float			f_data;
	double			d_data;

}	Data;

uintptr_t	serialize( Data* ptr );
Data*		deserialize(uintptr_t raw);

#endif
