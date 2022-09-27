/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:36:45 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/27 10:24:52 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Default constructor :
FragTrap::FragTrap() : ClapTrap() {

	this->setType("FragTrap");
	this->setHitpoints(100);
	cout << this->getType() << " DEFAULT constructor called" << endl;
	this->setMaxhitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	return;
}

// Copy constructor :
FragTrap::FragTrap( const FragTrap & src ) {

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
FragTrap::FragTrap( const string name) : ClapTrap( name ) {

	this->setType("FragTrap");
	this->setHitpoints(100);
	cout << this->getType() << " NAMED constructor called" << endl;
	this->setMaxhitpoints(100);
	this->setEnergypoints(100);
	this->setAttackdamage(30);
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap() {

	cout << this->getType() << " FragTrap Destructor called" << endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & S )
{
	o << "Name : " << S.getName() << endl << "Type : " << S.getType() << endl << "Hit points : "<< S.getHitpoints() << endl << "Energy points : "<< S.getEnergypoints() << endl << "Attack damage : " << S.getAttackdamage() << endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys( void ) {

	if (this->getEnergypoints())
	{
		cout << this->getType() << " " <<  this->getName() << " says \"high fives guys !\"" << endl;
		this->setEnergypoints(getEnergypoints() - 1);
	}
	else
		cout << this->getType() << " " <<  this->getName() << " coudn't say \"high fives guys !\" because he feel tired" << endl;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */