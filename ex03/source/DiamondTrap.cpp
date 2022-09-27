/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:25:17 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/27 15:43:46 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Default constructor : 
DiamondTrap::DiamondTrap() : ClapTrap("unamed_clap_name") {

	this->_Name = "unamed";
	this->setType("DiamondTrap");
	cout << this->getType() << " DEFAULT constructor called" << endl;
	this->setHitpoints(FRAG_HIT_POINTS);
	this->setMaxhitpoints(FRAG_MAX_HIT_POINTS);
	this->setEnergypoints(SCAV_ENERGY_POINTS);
	this->setAttackdamage(FRAG_ATTACK_DAMAGE);
	return;
}

// Copy constructor :
DiamondTrap::DiamondTrap( const DiamondTrap & src ) {

	this->setName(src.getName());
	this->setType(src.getType());
	cout << this->getType() << " COPY constructor called" << endl;
	this->setHitpoints(src.getHitpoints());
	this->setMaxhitpoints(src.getMaxhitpoints());
	this->setEnergypoints(src.getEnergypoints());
	this->setAttackdamage(src.getAttackdamage());
	return;
}

// Name constructor :
DiamondTrap::DiamondTrap( const string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {

	this->setType("DiamondTrap");
	this->_Name = name;
	cout << this->getType() << " NAMED constructor called" << endl;
	this->setHitpoints(FRAG_HIT_POINTS);
	this->setMaxhitpoints(FRAG_MAX_HIT_POINTS);
	this->setEnergypoints(SCAV_ENERGY_POINTS);
	this->setAttackdamage(FRAG_ATTACK_DAMAGE);
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	cout << this->getType() << " DiamondTrap Destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->setName(rhs.getName());
		this->setType(rhs.getType());
		this->setHitpoints(rhs.getHitpoints());
		this->setMaxhitpoints(rhs.getMaxhitpoints());
		this->setEnergypoints(rhs.getEnergypoints());
		this->setAttackdamage(rhs.getAttackdamage());
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & D )
{
	o << "Name : " << D.getDiam_name() << " grandson of : " << D.getName() << endl << "Type : " << D.getType() << endl << "Hit points : "<< D.getHitpoints() << endl << "Energy points : "<< D.getEnergypoints() << endl << "Attack damage : " << D.getAttackdamage() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	DiamondTrap::whoAmI( void ) {

	cout << "i am : " << this->_Name << "grandson of : " << this->getName() << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

string	DiamondTrap::getDiam_name( void ) const {

	return(this->_Name);
}

/* ************************************************************************** */