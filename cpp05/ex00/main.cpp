#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	// 1. Valid bureaucrat
	{
		Bureaucrat alice("Alice", 75);
		std::cout << alice << std::endl;
	}

	// 2. Grade 0 → GradeTooHighException
	{
		try
		{
			Bureaucrat high("TooHigh", 0);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	// 3. Grade 151 → GradeTooLowException
	{
		try
		{
			Bureaucrat low("TooLow", 151);
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	// 4. Increment grade-1 → GradeTooHighException
	{
		Bureaucrat max("Max", 1);
		try
		{
			max.incrementGrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	// 5. Decrement grade-150 → GradeTooLowException
	{
		Bureaucrat min("Min", 150);
		try
		{
			min.decrementGrade();
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	// 6. Copy constructor
	{
		Bureaucrat original("Original", 42);
		Bureaucrat copy(original);
		std::cout << "Original: " << original << std::endl;
		std::cout << "Copy:     " << copy << std::endl;
	}

	// 7. Copy assignment
	{
		Bureaucrat alice("Alice", 100);
		Bureaucrat bob("Bob", 50);
		bob = alice;
		std::cout << "After assignment:" << std::endl;
		std::cout << "Alice: " << alice << std::endl;
		std::cout << "Bob:   " << bob << std::endl;
	}

	return 0;
}
