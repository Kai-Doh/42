#include "Bureaucrat.hpp"
#include <iostream>

// --- GradeTooHighException ---

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

// --- GradeTooLowException ---

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

// --- checkGrade (private static) ---

void Bureaucrat::checkGrade(int grade)
{
	if (grade < MIN_GRADE)
		throw GradeTooHighException();
	if (grade > MAX_GRADE)
		throw GradeTooLowException();
}

// --- OCF / constructors ---

Bureaucrat::Bureaucrat()
	: _name(""), _grade(MAX_GRADE)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade)
	: _name(name), _grade(grade)
{
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: _name(other._name), _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

// --- Getters ---

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

// --- Grade modifiers ---

void Bureaucrat::incrementGrade()
{
	checkGrade(_grade - 1);
	--_grade;
}

void Bureaucrat::decrementGrade()
{
	checkGrade(_grade + 1);
	++_grade;
}

// --- Free function ---

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return os;
}
