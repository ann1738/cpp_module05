/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:51:17 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 13:29:46 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/****************** Constructors ********************/

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Default constructor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("ShrubberyCreationForm", 145, 137), target(_target)
{
	std::cout << "ShrubberyCreationForm: Custom constructor is called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original): Form(original), target(original.target)
{
	std::cout << "ShrubberyCreationForm: Copy constructor is called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original)
{
	std::cout << "ShrubberyCreationForm: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		target = original.target;
		Form::operator=(original);
	}
	return (*this);
}

/******************* Destructor *********************/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm: Destructor is called\n";
}

/***************** Member Functions *****************/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw(myException("\e[31mForm can't be executed because it is not signed\e[0m\n"));
	if (executor.getGrade() <= this->getExecGrade())
	{
		std::fstream file;
		std::string file_name = target + "_shrubbery";
		file.open(file_name.c_str(), std::fstream::out);
		if (file.is_open())
			file << ASCII_TREES;
		else
			throw (myException("\e[31mError opening shrubbery file\e[0m\n"));
	}
	else
		throw(myException(Form::GradeTooLowException()));
}

