/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:26:35 by ann               #+#    #+#             */
/*   Updated: 2022/06/03 16:11:54 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


/****************** Constructors ********************/

Bureaucrat::Bureaucrat(): grade(150)
{
	std::cout << "Bureaucrat: Default constructor is called\n";
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name)
{
	std::cout << "Bureaucrat: Custom: constructor is called\n";
	if (_grade < 1)
		throw myException(Bureaucrat::GradeTooHighException());
	else if (_grade > 150)
		throw myException(Bureaucrat::GradeTooLowException());
	grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& original): name(original.name), grade(original.grade)
{
	std::cout << "Bureaucrat: Copy constructor is called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& original)
{
	std::cout << "Bureaucrat: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{	
		const_cast<std::string &>(this->name) = original.name;
		this->grade = original.grade;
	}
	return (*this);
}

/******************* Destructor *********************/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: Destructor is called\n";
}

/***************** Member Functions *****************/

/* getters */

std::string const& Bureaucrat::getName() const
{
	return(name);
}

int	Bureaucrat::getGrade() const
{
	return(grade);
}

/* grade can be 1 (highest) --> 150 (lowest) */

/* incrementing a grade == 3 should result in grade == 2 */
void	Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw myException(Bureaucrat::GradeTooHighException());
	--grade;
}

/* decrementing a grade == 3 should result in grade == 4 */
void	Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw myException(Bureaucrat::GradeTooLowException());
	++grade;
}

std::string Bureaucrat::GradeTooLowException(void) const
{
	return ("\e[31mA Bureaucrat's grade can't be this low.\e[0m\n");
}

std::string Bureaucrat::GradeTooHighException(void) const
{
	return ("\e[31mA Bureaucrat's grade can't be this high.\e[0m\n");
}

void	Bureaucrat::signForm(Form const & form)
{
	if (form.getSigned())
		std::cout << "Bureaucrat \"" << this->name << "\" \e[92msigned\e[0m Form \"" << form.getName() << "\"\n";
	else
		std::cout << "Bureaucrat \"" << this->name << "\" \e[91mcouldn't sign\e[0m Form \"" << form.getName() 
		<< "\" because they are not qualified enough\n";		
}

/* insertion "<<" overloading */

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureau)
{
	output << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << ".\n";
	return (output);
}
