/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:39:54 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 08:49:00 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

// Default constructor :
ClapTrap::ClapTrap() : _Name("unamed"), _Type("ClapTrap"), _Hit_points(CLAP_HIT_POINTS), _Max_hitpoints(CLAP_MAX_HIT_POINTS) , _Energy_points(CLAP_ENERGY_POINTS), _Attack_damage(CLAP_ATTACK_DAMAGE) {

	cout << this->getType() << " DEFAULT constructor called" << endl;
	return;
}

// Copy constructor :
ClapTrap::ClapTrap( const ClapTrap & src ) : _Name(src._Name), _Type(src._Type), _Hit_points(src._Hit_points), _Max_hitpoints(src._Max_hitpoints), _Energy_points(src._Hit_points), _Attack_damage(src._Attack_damage) {

	cout << this->getType() << " COPY constructor called" << endl;
	return;
}

// Name constructor :
ClapTrap::ClapTrap( const string name) : _Name(name), _Type("ClapTrap"), _Hit_points(CLAP_HIT_POINTS), _Max_hitpoints(CLAP_MAX_HIT_POINTS) , _Energy_points(CLAP_ENERGY_POINTS), _Attack_damage(CLAP_ATTACK_DAMAGE) {

	cout << this->getType() << " NAMED constructor called" << endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {

	cout << this->getType() << " ClapTrap Destructor called" << endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Operator = :
ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		cout << this->getType() << " ASIGNATION operator called" << endl;
		this->_Name = rhs.getName();
		this->_Type = rhs.getType();
		this->_Hit_points = rhs.getHitpoints();
		this->_Energy_points = rhs.getEnergypoints();
		this->_Attack_damage = rhs.getAttackdamage();
	}
	return *this;
}

// Operator << :
std::ostream &	operator<<( std::ostream & o, ClapTrap const & C )
{
	o << "Name : " << C.getName() << endl << "Hit points : "<< C.getHitpoints() << endl << "Energy points : "<< C.getEnergypoints() << endl << "Attack damage : " << C.getAttackdamage() << endl << "Type : " << C.getType() << endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack( const string &target ) {

	if (this->getEnergypoints() && this->getHitpoints())
	{
		cout << this->getType() << " " << this->getName() << " attacks " << target << ", causing " << this->getAttackdamage() << " point of damage !" << endl;
		this->setEnergypoints( std::max(this->getEnergypoints() - 1, 0) );
	}
	else if (this->getHitpoints())
		cout << this->getType() << " " << this->getName() << " try to attacks " << target << " but lack the energy to do it" << endl;
	else
		cout << this->getType() << " " << this->getName() << " try to attacks " << target << " but can't because he's dead" << endl;
	return;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->getHitpoints() <= 0)
		cout << this->getType() << " " << this->getName() << " take 0 damage because he's already dead..." << endl;
	else if ((unsigned int)( this->getHitpoints() ) <= amount )
	{
		cout << this->getType() << " " << this->getName() << " take " << this->getHitpoints() << " damage and die like the looser he is" << endl;
		this->setHitpoints(0);
	}
	else
	{
		cout << this->getType() << " " << this->getName() << " take " << amount << " damage and tank it like the real robot he is" << endl;
		this->setHitpoints(this->getHitpoints() - amount);
	}
	return;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->getHitpoints() <= 0)
		cout << this->getType() << " " << this->getName() << " couldn't heal because he's already dead..." << endl;
	else if (this->getHitpoints() == this->getMaxhitpoints())
		cout << this->getType() << " is already feeling super good and have no need to heal" << endl;
	else if (this->getEnergypoints() && (unsigned int)( this->getMaxhitpoints() - this->getHitpoints() ) <= amount)
	{
		cout << this->getType() << " " << this->getName() << " heal " << this->getMaxhitpoints() - this->getHitpoints() << " damage and feel heathy" << endl;
		this->setHitpoints(this->getMaxhitpoints());
	}
	else if (this->getEnergypoints())
	{
		cout << this->getType() << " " << this->getName() << " heal " << amount << " of damage" << endl;
		this->setHitpoints(this->getHitpoints() + amount);
	}
	else
		cout << this->getType() << " " << this->getName() << " try to heal himslefs but fail" << endl;
	this->setEnergypoints(std::max(this->getEnergypoints() - 1, 0));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// name :
string	ClapTrap::getName( void ) const {

	return (this->_Name);
}

void	ClapTrap::setName( const string name ) {

	this->_Name = name;
	return;
}

// type :
string	ClapTrap::getType( void ) const {

	return (this->_Type);
}

void	ClapTrap::setType( const string type ) {

	this->_Type = type;
	return;
}

// max hitpoint :
int	ClapTrap::getMaxhitpoints( void ) const {

	return (this->_Max_hitpoints);
}

void	ClapTrap::setMaxhitpoints( unsigned int i ) {

	this->_Max_hitpoints = i;
	return;
}

// hit point :
int	ClapTrap::getHitpoints( void ) const {

	return (this->_Hit_points);
}

void	ClapTrap::setHitpoints( int i ) {

	this->_Hit_points = i;
	return;
}

// energy :
int	ClapTrap::getEnergypoints( void ) const {

	return (this->_Energy_points);
}

void	ClapTrap::setEnergypoints( int i ) {

	this->_Energy_points = i;
	return;
}

// attack :
int	ClapTrap::getAttackdamage( void ) const {

	return (this->_Attack_damage);
}

void	ClapTrap::setAttackdamage( int i ) {

	this->_Attack_damage = i;
	return;
}

/* ************************************************************************** */