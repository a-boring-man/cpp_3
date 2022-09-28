/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/28 09:06:39 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void ) {


	cout << "-------------DEFAULT CONSTRUCTION c1------------" << endl;

	DiamondTrap	c1;
	c1.takeDamage(10);
	cout << c1 << endl;

	cout << "-------------COPY CONSTRUCTION c2------------" << endl;

	DiamondTrap	c2(c1);
	cout << c2 << endl;

	cout << "-------------NAMED CONSTRUCTION c3-------------" << endl;

	DiamondTrap	c3("John Cenas");
	c3.takeDamage(10);
	cout << c3 << endl;

	cout << "-------------COPY CONSTRUCTION c4(c3)-------------" << endl;

	DiamondTrap	c4(c3);
	cout << c4 << endl;

	cout << "-------------FUNCTION TEST c3-------------" << endl;

	c3.whoAmI();
	c3.highFivesGuys();
	c3.guardGate();
	c3.takeDamage(10);
	cout << endl;
	
	cout << "--------------------ASSIGNATION c1 = c3-------------------" << endl;
	c1 = c3;
	cout << c1 << endl;



	cout << endl << "-----------------debut des test------------------" << endl;

	cout << "----------test sur l'attack et l'energy c1 qui vaut maintenant c3 (john cenas)--------" << endl;

	cout << "display des stats : " << endl << 
	c1 << endl << endl;
	for (int i = 0; i < 48; i++)
	{
		c1.attack("dummie");
		cout << "energy : " << c1.getEnergypoints() << endl;
	}
	c1.attack("dummie");
	cout << c1 << endl;

	cout << "------------test sur la vie sur c2 copy de c1 original (default)------------" << endl;
	c2.attack("dummie");
	c2.takeDamage(30);
	cout << c2 << endl;
	c2.attack("dummie");
	c2.takeDamage(100);
	cout << c2 << endl;
	c2.attack("dummie");
	c2.takeDamage(100);
	cout << c2 << endl;
	cout << "--------------------" << endl << endl; 

	// test sur le soin
	cout << "----------test sur le soin c3-------" << endl;
	c3.beRepaired(10);
	c3.beRepaired(10);
	c3.attack("dummie");
	c3.takeDamage(30);
	cout << c3 << endl;
	c3.beRepaired(100);
	cout << c3 << endl;
	c3.takeDamage(9);
	cout << c3 << endl;
	c3.beRepaired(7);
	cout << c3 << endl;
	for (int i = 0; i < 41; i++)
	{
		c3.attack("dummie");
		cout << "energy : " << c3.getEnergypoints() << endl;
	}
	c3.highFivesGuys();   // a commenter aussi du coup
	c3.guardGate();       // a commenter aussi du coup
	cout << c3 << endl;
	c3.takeDamage(5);
	//c3.takeDamage(999);
	cout << c3 << endl;
	c3.beRepaired(7);
	c3.highFivesGuys();
	c3.guardGate();
	cout << "--------------------" << endl << endl;
}