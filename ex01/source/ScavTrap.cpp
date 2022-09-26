/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:32:51 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/26 09:17:42 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

//Default constructor :
ScavTrap::ScavTrap() : ClapTrap() {

	cout << "ScapTrap DEFAULT constructor called" << endl;
	this->setHitpoints(100);
	this->setMaxhitpoints(100);
	this->setEnergypoints(50);
	this->setAttackdamage(20);
	return;
}

ScavTrap::ScavTrap( const ScavTrap & src ) {

	cout << "ScavTrap COPY constructor called" << endl;
	this->setName(src.getName());
	this->setHitpoints(src.getHitpoints());
	this->setMaxhitpoints(src.getMaxhitpoints());
	this->setEnergypoints(src.getEnergypoints());
	this->setAttackdamage(src.getAttackdamage());
	return;
}

// Name constructor :
ScavTrap::ScavTrap( const string name) : ClapTrap() {

	(void)name;
	cout << "ScavTrap NAMED constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/* ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
} */

std::ostream &			operator<<( std::ostream & o, ScavTrap const & S )
{
	o << "Name : " << S.getName() << endl << "Hit points : "<< S.getHitpoints() << endl << "Energy points : "<< S.getEnergypoints() << endl << "Attack damage : " << S.getAttackdamage() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::attack( const string &target ) {

	if (this->getEnergypoints() && this->getHitpoints())
	{
		cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackdamage() << " point of damage !" << endl;
		this->setEnergypoints( std::max(this->getEnergypoints() - 1, 0) );
	}
	else if (this->getHitpoints())
		cout << "ScavTrap " << this->getName() << " try to attacks " << target << " but lack the energy to do it" << endl;
	else
		cout << "ScavTrap " << this->getName() << " try to attacks " << target << " but can't because he's dead" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */