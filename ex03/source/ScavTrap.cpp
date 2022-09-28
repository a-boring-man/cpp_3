/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:32:51 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 08:54:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Default constructor :
ScavTrap::ScavTrap() : ClapTrap() {

	this->setType("ScavTrap");
	this->setHitpoints(SCAV_HIT_POINTS);
	cout << this->getType() << " DEFAULT constructor called" << endl;
	this->setMaxhitpoints(SCAV_MAX_HIT_POINTS);
	this->setEnergypoints(SCAV_ENERGY_POINTS);
	this->setAttackdamage(SCAV_ATTACK_DAMAGE);
	return;
}

// Copy constructor :
ScavTrap::ScavTrap( const ScavTrap & src ) {

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
ScavTrap::ScavTrap( const string name) : ClapTrap( name ) {

	this->setType("ScavTrap");
	this->setHitpoints(SCAV_HIT_POINTS);
	cout << this->getType() << " NAMED constructor called" << endl;
	this->setMaxhitpoints(SCAV_MAX_HIT_POINTS);
	this->setEnergypoints(SCAV_ENERGY_POINTS);
	this->setAttackdamage(SCAV_ATTACK_DAMAGE);
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {

	cout << this->getType() << " ScavTrap Destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & S )
{
	o << "Name : " << S.getName() << endl << "Type : " << S.getType() << endl << "Hit points : "<< S.getHitpoints() << endl << "Energy points : "<< S.getEnergypoints() << endl << "Attack damage : " << S.getAttackdamage() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate( void ) {

	if (this->getEnergypoints())
	{
		cout << this->getType() << " " <<  this->getName() << " has enter Gate keeper mode" << endl;
		this->setEnergypoints(getEnergypoints() - 1);
	}
	else
		cout << this->getType() << " " <<  this->getName() << " coudn't enter Gate keeper mode because he has no energy left" << endl;
	return;
}

void	ScavTrap::attack( const string &target ) {

	if (this->getEnergypoints() && this->getHitpoints())
	{
		cout << this->getType() << " " << this->getName() << " use ScavTrap style attacks on " << target << ", causing " << this->getAttackdamage() << " point of damage !" << endl;
		this->setEnergypoints( std::max(this->getEnergypoints() - 1, 0) );
	}
	else if (this->getHitpoints())
		cout << this->getType() << " " << this->getName() << " try to use ScavTrap style attacks " << target << " but lack the energy to do it" << endl;
	else
		cout << this->getType() << " " << this->getName() << " try to use ScavTrap style attacks " << target << " but can't because he's dead" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */