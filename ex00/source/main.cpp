/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/26 09:06:25 by jrinna           ###   ########lyon.fr   */
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

	// test sur la vie
	cout << "-------------" << endl;
	c2.attack("dummie");
	c2.takeDamage(3);
	cout << "energy : " << c2.getEnergypoints() << endl << "life : " << c2.getHitpoints() << endl;
	c2.attack("dummie");
	c2.takeDamage(10);
	cout << "energy : " << c2.getEnergypoints() << endl << "life : " << c2.getHitpoints() << endl;
	c2.attack("dummie");
	cout << "energy : " << c2.getEnergypoints() << endl;
	cout << "--------------------" << endl << endl;

	// test sur le soin
	cout << "-------------" << endl;
	c3.beRepaired(10);
	c3.attack("dummie");
	c3.takeDamage(3);
	cout << "energy : " << c3.getEnergypoints() << endl << "life : " << c3.getHitpoints() << endl;
	c3.beRepaired(10);
	cout << "energy : " << c3.getEnergypoints() << endl << "life : " << c3.getHitpoints() << endl;
	c3.takeDamage(9);
	cout << "energy : " << c3.getEnergypoints() << endl << "life : " << c3.getHitpoints() << endl;
	c3.beRepaired(7);
	cout << "energy : " << c3.getEnergypoints() << endl << "life : " << c3.getHitpoints() << endl;
	c3.attack("dummie");
	c3.attack("dummie");
	c3.attack("dummie");
	c3.attack("dummie");
	c3.attack("dummie");
	c3.attack("dummie");
	c3.attack("dummie"); // a commenter aussi du coup
	cout << "energy : " << c3.getEnergypoints() << endl;
	c3.takeDamage(5);
	//c3.takeDamage(99);
	cout << "energy : " << c3.getEnergypoints() << endl << "life : " << c3.getHitpoints() << endl;
	c3.beRepaired(7);
	cout << "--------------------" << endl << endl;
}