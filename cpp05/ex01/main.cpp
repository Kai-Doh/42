#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "=== Exercise 01: Form tests ===" << std::endl;
	std::cout << std::endl;

	// Test 1: Construct forms with valid grades
	std::cout << "--- Test 1: Valid form construction ---" << std::endl;
	try
	{
		Form f1("Tax Return", 50, 25);
		std::cout << "Created: " << f1 << std::endl;

		Form f2("Building Permit", 100, 75);
		std::cout << "Created: " << f2 << std::endl;

		// Boundary: grade 1 and 150 are valid
		Form f3("Top Secret", 1, 1);
		std::cout << "Created: " << f3 << std::endl;

		Form f4("Minor Form", 150, 150);
		std::cout << "Created: " << f4 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test 2: Construct forms with out-of-range grades
	std::cout << "--- Test 2: Out-of-range grade in form construction ---" << std::endl;
	try
	{
		Form f5("Invalid High", 0, 50);
		std::cout << "Should not reach here" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try
	{
		Form f6("Invalid Low", 151, 50);
		std::cout << "Should not reach here" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try
	{
		Form f7("Invalid Exec High", 50, 0);
		std::cout << "Should not reach here" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try
	{
		Form f8("Invalid Exec Low", 50, 151);
		std::cout << "Should not reach here" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test 3: Sign form with sufficient grade
	std::cout << "--- Test 3: Sign with sufficient grade ---" << std::endl;
	try
	{
		Form f9("Standard Form", 50, 25);
		Bureaucrat alice("Alice", 50); // grade == gradeToSign (boundary: must succeed)
		Bureaucrat bob("Bob", 1);      // grade < gradeToSign (also sufficient)

		std::cout << "Before signing: " << f9 << std::endl;

		alice.signForm(f9);
		std::cout << "After Alice signs: " << f9 << std::endl;

		// Create another form for Bob
		Form f10("VIP Form", 100, 50);
		bob.signForm(f10);
		std::cout << "After Bob signs: " << f10 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test 4: Sign form with insufficient grade
	std::cout << "--- Test 4: Sign with insufficient grade ---" << std::endl;
	try
	{
		Form f11("Elite Form", 10, 5);
		Bureaucrat charlie("Charlie", 75);

		std::cout << "Before signing: " << f11 << std::endl;
		charlie.signForm(f11);
		std::cout << "After Charlie signs: " << f11 << std::endl;
		std::cout << "(Form should remain unsigned)" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	// Test 5: SignForm success message format
	std::cout << "--- Test 5: signForm success message ---" << std::endl;
	{
		Form f12("Success Form", 50, 25);
		Bureaucrat dave("Dave", 25);
		dave.signForm(f12);
	}
	std::cout << std::endl;

	// Test 6: SignForm failure message format
	std::cout << "--- Test 6: signForm failure message ---" << std::endl;
	{
		Form f13("Exclusive Form", 5, 3);
		Bureaucrat eve("Eve", 100);
		eve.signForm(f13);
	}
	std::cout << std::endl;

	// Test 7: OCF (copy ctor and assignment)
	std::cout << "--- Test 7: OCF copy ctor and assignment ---" << std::endl;
	{
		Form f14("Original", 30, 20);
		Bureaucrat frank("Frank", 10);
		frank.signForm(f14);

		Form f15(f14); // copy ctor
		std::cout << "Copy: " << f15 << std::endl;

		Form f16;
		f16 = f14; // copy assignment
		std::cout << "Assigned: " << f16 << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== All tests completed ===" << std::endl;
	return 0;
}
