/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:16:55 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 08:52:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define SCAV_HIT_POINTS 100
# define SCAV_MAX_HIT_POINTS 100
# define SCAV_ENERGY_POINTS 50
# define SCAV_ATTACK_DAMAGE 20

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( const string name );
		~ScavTrap();

		ScavTrap	&operator=( ScavTrap const & rhs );

		void	attack( const string &target );

		void	guardGate( void );

};


std::ostream &			operator<<( std::ostream & o, ScavTrap const & S );
