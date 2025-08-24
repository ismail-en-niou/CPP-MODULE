#include "ClapTrap.hpp"
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	// // ================== ClapTrap Tests ==================
	// {
	// 	std::cout << "--- ClapTrap Tests ---\n";
	// 	ClapTrap ct1("CT-One");
	// 	ClapTrap ct2("CT-Two");

	// 	std::cout << "\n--- Basic Attack Test ---\n";
	// 	ct1.attack("CT-Two");
	// 	ct2.takeDamage(0);

	// 	std::cout << "\n--- Repair Test ---\n";
	// 	ct1.beRepaired(5);

	// 	std::cout << "\n--- Energy Exhaustion Test ---\n";
	// 	for (int i = 0; i < 11; i++)
	// 		ct1.attack("CT-Two");

	// 	std::cout << "\n--- Damage Until Death ---\n";
	// 	ct2.takeDamage(5);
	// 	ct2.takeDamage(5);
	// 	ct2.attack("CT-One");
	// }

	// std::cout << "\n======================================================================\n" << std::endl;
	
	// ================== ScavTrap Tests ==================
	{
		std::cout << "\n--- ScavTrap Tests ---\n";
		ScavTrap st1("ST-One");
		ScavTrap st2("ST-Two");

		std::cout << "\n--- Basic Attack Test ---\n";
		st1.attack("ST-Two");
		st2.takeDamage(0);

		std::cout << "\n--- Repair Test ---\n";
		st1.beRepaired(5);

		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 10; i++)
			st1.attack("ST-Two");

		std::cout << "\n--- Damage Until Death ---\n";
		st2.takeDamage(50);
		st2.takeDamage(65);
		st2.attack("ST-One");

		std::cout << "\n--- Special Ability Test ---\n";
		st1.guardGate();
	}
	// test 3
	{
		std::cout << "--- FragTrap Tests ---\n";
		FragTrap ft1("FT-One");
		FragTrap ft2("FT-Two");

		std::cout << "\n--- Basic Attack Test ---\n";
		ft1.attack("FT-Two");
		ft2.takeDamage(0);

		std::cout << "\n--- Repair Test ---\n";
		ft1.beRepaired(5);

		std::cout << "\n--- Energy Exhaustion Test ---\n";
		for (int i = 0; i < 10; i++)
			ft1.attack("FT-Two");

		std::cout << "\n--- Damage Until Death ---\n";
		ft2.takeDamage(50);
		ft2.takeDamage(100);
		ft2.attack("FT-One");

		std::cout << "\n--- Special Ability Test ---\n";
		ft1.highFivesGuys();
	}
	return (0);
}
