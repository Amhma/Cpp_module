/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:21:12 by amahla            #+#    #+#             */
/*   Updated: 2022/10/01 13:15:44 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource( void );
		MateriaSource( const MateriaSource & rhs );

		virtual ~MateriaSource( void );

		MateriaSource &	operator=( const MateriaSource & rhs );

		AMateria**			getMateria( void ) const;
		void				setMateria( const AMateria **m );

		virtual void		learnMateria( AMateria	*m );
		virtual AMateria*	createMateria( std::string const & type );

	private:

	AMateria	*_mSource[4];

};

#endif
