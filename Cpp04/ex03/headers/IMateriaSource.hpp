/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:17:48 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:15:39 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__

# include <string>

class	AMateria;

class IMateriaSource
{

	public:

		virtual ~IMateriaSource() {}

		virtual void		learnMateria( AMateria* m ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif
