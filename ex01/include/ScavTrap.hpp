/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:16:55 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/22 15:18:11 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( const string name );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	attack( const string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amout );

		string	getName( void ) const;

		int		getMaxhitpoints( void ) const;

		int		getHitpoints( void ) const;
		void	setHitpoints( int i );
		
		int		getEnergypoints( void ) const;
		void	setEnergypoints( int i );
		
		int		getAttackdamage( void ) const;

	private:

		string	_Name;
		int		_Hit_points;
		int		_Max_hitpoints;
		int		_Energy_points;
		int		_Attack_damage;

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & C );
