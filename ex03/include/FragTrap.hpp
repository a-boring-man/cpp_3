/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:37:01 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/27 14:39:48 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define FRAG_HIT_POINTS 100
# define FRAG_MAX_HIT_POINTS 100
# define FRAG_ENERGY_POINTS 100
# define FRAG_ATTACK_DAMAGE 30

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap( const string name );
		~FragTrap();

		FragTrap	&operator=( FragTrap const & rhs );

		void	highFivesGuys( void );

};


std::ostream &			operator<<( std::ostream & o, FragTrap const & S );
