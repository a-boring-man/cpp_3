/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:25:20 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 08:35:32 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( const string name );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		using 	ScavTrap::attack;
		string	getDiam_name( void ) const;

		void	whoAmI( void );

	private:

		string	_Name;

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & D );
