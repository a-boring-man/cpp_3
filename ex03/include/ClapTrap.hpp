/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:35:09 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/27 14:38:53 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

using std::cout;
using std::endl;
using std::string;

# define CLAP_HIT_POINTS 10
# define CLAP_MAX_HIT_POINTS 10
# define CLAP_ENERGY_POINTS 10
# define CLAP_ATTACK_DAMAGE 0

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		ClapTrap( const string name );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack( const string &target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amout );

		string	getName( void ) const;
		void	setName( const string name );

		string	getType( void ) const;
		void	setType( const string type );
	
		int		getMaxhitpoints( void ) const;
		void	setMaxhitpoints( unsigned int i );

		int		getHitpoints( void ) const;
		void	setHitpoints( int i );
		
		int		getEnergypoints( void ) const;
		void	setEnergypoints( int i );
		
		int		getAttackdamage( void ) const;
		void	setAttackdamage( int i );

	protected:

		string	_Name;
		string	_Type;
		int		_Hit_points;
		int		_Max_hitpoints;
		int		_Energy_points;
		int		_Attack_damage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & C );
