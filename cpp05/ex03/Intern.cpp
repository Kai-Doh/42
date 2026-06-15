#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{
}

AForm* Intern::createShrubbery(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidential(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

const Intern::FormCreator Intern::_creators[3] =
{
	{"shrubbery creation", &Intern::createShrubbery},
	{"robotomy request", &Intern::createRobotomy},
	{"presidential pardon", &Intern::createPresidential}
};

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == _creators[i].name)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return _creators[i].create(target);
		}
	}
	std::cout << "Intern cannot create \"" << formName
			  << "\": unknown form type" << std::endl;
	return NULL;
}
