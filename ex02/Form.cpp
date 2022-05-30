/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:46:39 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 12:02:46 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************** Constructors ********************/

Form::Form(): name(""), Signed(false), signGrade(1), execGrade(1)
{
	std::cout << "Form: Default constructor is called\n";
}

Form::Form(std::string _name, int _signGrade, int _execGrade):
	name(_name), Signed(false), signGrade(_signGrade), execGrade(_execGrade)
{
	std::cout << "Form: Custom constructor is called\n";
	if (signGrade < 1 || execGrade < 1)
		throw myException(Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw myException(Form::GradeTooLowException());
}

Form::Form(const Form& original):
	name(original.name), Signed(original.Signed), signGrade(original.signGrade), execGrade(original.execGrade)
{
	std::cout << "Form: Copy constructor is called\n";
}

Form& Form::operator=(const Form& original)
{
	std::cout << "Form: Copy assignment overloading constructor is called\n";
	if (this != &original)
	{
		const_cast<std::string &>(name) = original.name;
		Signed = original.Signed;
		const_cast<int &>(signGrade) = original.signGrade;
		const_cast<int &>(execGrade) = original.execGrade;
	}
	return (*this);
}

/******************* Destructor *********************/

Form::~Form()
{
	std::cout << "Form: Destructor is called\n";
}

/***************** Member Functions *****************/

/* getters */

std::string const &	Form::getName() const {return (name);}
bool				Form::getSigned() const {return (Signed);}
int					Form::getSignGrade() const {return (signGrade);}
int					Form::getExecGrade() const {return (execGrade);}

std::string Form::GradeTooLowException(void) const
{
	return ("\e[31mForm signing/executing grade can't be this low\e[0m\n");
}

std::string Form::GradeTooHighException(void) const
{
	return ("\e[31mForm signing/executing grade can't be this high\e[0m\n");
}

void	Form::beSigned(Bureaucrat const & bureau)
{
	if (bureau.getGrade() <= signGrade)
		Signed = true;
	else
		throw (myException(Form::GradeTooLowException()));
}

/* insertion "<<" operator overloading */

std::ostream	&operator<<(std::ostream &output, Form const & form)
{
	output << "Form \"" << form.getName();	
	if (form.getSigned())
		output << "\"\e[92m is signed\e[0m.";
	else
		output << "\"\e[91m is not signed\e[0m.";
	output << " It requires a signing grade of " << form.getSignGrade()
	<< " and an executing grade of " << form.getExecGrade() << ".\n";
	return (output);
}
