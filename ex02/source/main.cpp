/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:16 by jrinna            #+#    #+#             */
/*   Updated: 2022/09/26 10:52:16 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void ) {

	FragTrap	c1;
	FragTrap	c2(c1);
	FragTrap	c3("John Cenas");

	
	c3.takeDamage(10);
	c1 = c3;

	cout << endl << "-----------------debut des test------------------" << endl;
	cout << "display des stats : " << endl << 
	c1 << endl << endl;


	// test sur l'attack et l'energy
	cout << "-------------" << endl;
	for (int i = 0; i < 100; i++)
	{
		c1.attack("dummie");
		cout << "energy : " << c1.getEnergypoints() << endl;
	}
	c1.attack("dummie");
	cout << "energy : " << c1.getEnergypoints() << endl;
	cout << "--------------------" << endl << endl;

	// test sur la vie
	cout << "-------------" << endl;
	c2.attack("dummie");
	c2.takeDamage(30);
	cout << c2 << endl;
	c2.attack("dummie");
	c2.takeDamage(100);
	cout << c2 << endl;
	c2.attack("dummie");
	cout << c2 << endl;
	cout << "--------------------" << endl << endl; 

	// test sur le soin
	cout << "-------------" << endl;
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
	for (int i = 0; i < 94; i++)
	{
		c3.attack("dummie");
		cout << "energy : " << c3.getEnergypoints() << endl;
	}
	c3.highFivesGuys(); // a commenter aussi du coup
	cout << c3 << endl;
	c3.takeDamage(5);
	//c3.takeDamage(999);
	cout << c3 << endl;
	c3.beRepaired(7);
	c3.highFivesGuys();
	cout << "--------------------" << endl << endl;
}