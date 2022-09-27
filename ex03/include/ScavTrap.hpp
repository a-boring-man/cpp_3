/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:16:55 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/26 14:20:27 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( const string name );
		~ScavTrap();

		ScavTrap	&operator=( ScavTrap const & rhs );

		void	guardGate( void );

};


std::ostream &			operator<<( std::ostream & o, ScavTrap const & S );
