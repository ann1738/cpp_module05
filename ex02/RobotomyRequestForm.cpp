/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:51:17 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 15:45:11 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/****************** Constructors ********************/

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Default constructor is called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "RobotomyRequestForm: Custom constructor is called\n";
	srand((unsigned) time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original): Form(original), target(original.target)
{
	std::cout << "RobotomyRequestForm: Copy constructor is called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& original)
{
	std::cout << "RobotomyRequestForm: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		target = original.target;
		Form::operator=(original);
	}
	return (*this);
}

/******************* Destructor *********************/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm: Destructor is called\n";
}

/***************** Member Functions *****************/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw(myException("\e[31mForm can't be executed because it is not signed\e[0m\n"));
	if (executor.getGrade() <= this->getExecGrade())
	{
		std::cout << "\e[95mBzzzzzzzzzzzzzzzzzzzzzzz (drilling noises.. sorry)\e[0m\n";
		if (rand() % 2)
			std::cout << "\e[92m" << target << " was robotomized successfuly\e[0m\n";
		else
			std::cout << "\e[91m" << target << " failed to robotomize\e[0m\n";
	}
	else
		throw(myException(Form::GradeTooLowException()));
}
