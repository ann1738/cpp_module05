/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:51:17 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 13:22:38 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/****************** Constructors ********************/

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Default constructor is called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5), target(_target)
{
	std::cout << "PresidentialPardonForm: Custom constructor is called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& original): Form(original), target(original.target)
{
	std::cout << "PresidentialPardonForm: Copy constructor is called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& original)
{
	std::cout << "PresidentialPardonForm: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		target = original.target;
		Form::operator=(original);
	}
	return (*this);
}

/******************* Destructor *********************/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm: Destructor is called\n";
}

/***************** Member Functions *****************/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw (myException("\e[31mForm can't be executed because it is not signed\e[0m\n"));
	if (executor.getGrade() <= this->getExecGrade())
		std::cout << "\e[36m" << target << " has been pardoned by their highness 🛐 Zaphod Beeblebrox\e[0m\n";
	else
		throw (myException(Form::GradeTooLowException()));
}
