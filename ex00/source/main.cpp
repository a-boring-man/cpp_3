/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/22 14:15:37 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {

	ClapTrap	c1;
	ClapTrap	c2(c1);
	ClapTrap	c3("John Cenas");

	c1 = c3;

	cout << endl << "-----------------debut des test------------------" << endl;
	cout << "display des stats : " << endl << 
	"name : " << c1.getName() << endl << 
	"life : " << c1.getHitpoints() << endl << 
	"energy : " << c1.getEnergypoints() << endl << 
	"attack damage : " << c1.getAttackdamage() << endl << endl;


	// test sur l'attack et l'energy
	cout << "-------------" << endl;
	c1.attack("dummie");
	cout << "energy : " << c1.getEnergypoints() << endl;
	c1.attack("dummie");
	c1.attack("dummie");
	cout << "energy : " << c1.getEnergypoints() << endl;
	c1.attack("dummie");
	c1.attack("dummie");
	c1.attack("dummie");
	c1.attack("dummie");
	c1.attack("dummie");
	c1.attack("dummie");
	c1.attack("dummie");
	cout << "energy : " << c1.getEnergypoints() << endl;
	c1.attack("dummie");
	cout << "energy : " << c1.getEnergypoints() << endl;
	cout << "--------------------" << endl << endl;
}