#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	// Seed for robotomy randomness
	std::srand(std::time(NULL));

	std::cout << "=== TEST 1: Execute BEFORE signing (FormNotSignedException) ===" << std::endl;
	{
		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Ford Prefect");

		Bureaucrat low("Peon", 150);
		Bureaucrat high("Boss", 1);

		std::cout << "\n-- ShrubberyCreationForm (unsigned) --" << std::endl;
		low.executeForm(shrub);

		std::cout << "\n-- RobotomyRequestForm (unsigned) --" << std::endl;
		high.executeForm(robot);

		std::cout << "\n-- PresidentialPardonForm (unsigned) --" << std::endl;
		high.executeForm(pardon);
	}

	std::cout << "\n=== TEST 2: Sign with low-grade bureaucrat (GradeTooLowException) ===" << std::endl;
	{
		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Ford Prefect");

		Bureaucrat low("Peon", 150);

		std::cout << "\n-- Sign Shrubbery with grade 150 (needs 145) --" << std::endl;
		low.signForm(shrub);

		std::cout << "\n-- Sign Robotomy with grade 150 (needs 72) --" << std::endl;
		low.signForm(robot);

		std::cout << "\n-- Sign Presidential with grade 150 (needs 25) --" << std::endl;
		low.signForm(pardon);
	}

	std::cout << "\n=== TEST 3: Execute with insufficient-grade bureaucrat (GradeTooLowException) ===" << std::endl;
	{
		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Ford Prefect");

		Bureaucrat signer("Signer", 20);
		Bureaucrat peon("Peon", 140);

		std::cout << "\n-- Shrubbery sign(145) ok, execute(137) with grade 140 -> FAIL --" << std::endl;
		signer.signForm(shrub);
		peon.executeForm(shrub);

		std::cout << "\n-- Robotomy sign(72) ok, execute(45) with grade 140 -> FAIL --" << std::endl;
		signer.signForm(robot);
		peon.executeForm(robot);

		std::cout << "\n-- Presidential sign(25) ok, execute(5) with grade 140 -> FAIL --" << std::endl;
		signer.signForm(pardon);
		peon.executeForm(pardon);
	}

	std::cout << "\n=== TEST 4: Sign + Execute all three forms successfully ===" << std::endl;
	{
		ShrubberyCreationForm shrub("home");
		RobotomyRequestForm robot("Marvin");
		PresidentialPardonForm pardon("Arthur Dent");

		Bureaucrat chief("Chief", 1);

		std::cout << std::endl;
		chief.signForm(shrub);
		chief.executeForm(shrub);

		std::cout << std::endl;
		chief.signForm(robot);
		chief.executeForm(robot);

		std::cout << std::endl;
		chief.signForm(pardon);
		chief.executeForm(pardon);
	}

	std::cout << "\n=== TEST 5: Robotomy multiple times ===" << std::endl;
	{
		RobotomyRequestForm robot("Marvin");
		Bureaucrat chief("Chief", 1);

		chief.signForm(robot);
		for (int i = 0; i < 6; i++)
			chief.executeForm(robot);
	}

	std::cout << "\n=== TEST 6: Verify shrubbery file was created ===" << std::endl;
	{
		ShrubberyCreationForm shrub("garden");
		Bureaucrat chief("Chief", 1);
		chief.signForm(shrub);
		chief.executeForm(shrub);
		std::cout << "Check: garden_shrubbery file should exist." << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
