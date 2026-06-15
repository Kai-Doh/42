#include "Intern.hpp"
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
	std::srand(std::time(NULL));

	std::cout << "=== TEST 1: Intern creates all 3 valid forms ===" << std::endl;
	{
		Intern someIntern;
		AForm* shrub = someIntern.makeForm("shrubbery creation", "garden");
		AForm* robot = someIntern.makeForm("robotomy request", "Bender");
		AForm* pardon = someIntern.makeForm("presidential pardon", "Ford Prefect");

		std::cout << "shrub = " << (shrub ? "non-NULL" : "NULL") << std::endl;
		std::cout << "robot = " << (robot ? "non-NULL" : "NULL") << std::endl;
		std::cout << "pardon = " << (pardon ? "non-NULL" : "NULL") << std::endl;

		delete shrub;
		delete robot;
		delete pardon;
	}

	std::cout << "\n=== TEST 2: Intern with invalid name ===" << std::endl;
	{
		Intern someIntern;
		AForm* unknown = someIntern.makeForm("unknown form", "target");
		std::cout << "result = " << (unknown ? "non-NULL" : "NULL (expected)") << std::endl;
		delete unknown;
	}

	std::cout << "\n=== TEST 3: Sign and execute one form via Intern ===" << std::endl;
	{
		Intern someIntern;
		AForm* shrub = someIntern.makeForm("shrubbery creation", "backyard");

		if (shrub)
		{
			Bureaucrat chief("Chief", 1);
			chief.signForm(*shrub);
			chief.executeForm(*shrub);
			std::cout << "Check: backyard_shrubbery file should exist." << std::endl;
		}
		delete shrub;
	}

	std::cout << "\n=== TEST 4: Full workflow with Intern (Robotomy) ===" << std::endl;
	{
		Intern someIntern;
		AForm* robot = someIntern.makeForm("robotomy request", "Marvin");

		if (robot)
		{
			Bureaucrat chief("Chief", 1);
			chief.signForm(*robot);
			chief.executeForm(*robot);
		}
		delete robot;
	}

	std::cout << "\n=== TEST 5: Full workflow with Intern (Presidential) ===" << std::endl;
	{
		Intern someIntern;
		AForm* pardon = someIntern.makeForm("presidential pardon", "Arthur Dent");

		if (pardon)
		{
			Bureaucrat chief("Chief", 1);
			chief.signForm(*pardon);
			chief.executeForm(*pardon);
		}
		delete pardon;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
