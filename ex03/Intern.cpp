/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:48:18 by anasr             #+#    #+#             */
/*   Updated: 2022/06/05 22:22:35 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/****************** Constructors ********************/

Intern::Intern()
{
	std::cout << "Intern: Default constructor is called\n";
}

Intern::Intern(const Intern& original)
{
	std::cout << "Intern: Copy constructor is called\n";
	static_cast<void>(original);
}

Intern& Intern::operator=(const Intern& original)
{
	std::cout << "Intern: Copy assignment overloading constructor is called\n";
	static_cast<void>(original);
	return (*this);
}

/******************* Destructor *********************/

Intern::~Intern()
{
	std::cout << "Intern: Destructor is called\n";
}

/***************** Member Functions *****************/

/* helper function to call the constructor of the right form */
Form	*Intern::makeShrubbery(std::string const & _target) {return new ShrubberyCreationForm(_target);}
Form	*Intern::makeRobotomy(std::string const & _target) {return new RobotomyRequestForm(_target);}
Form	*Intern::makePresidential(std::string const & _target) {return new PresidentialPardonForm(_target);}

Form *Intern::makeForm(std::string form_name, std::string const & _target)
{
	unsigned int	index = 3;

	/* saving form_name for later possible usage */
	std::string		save(form_name);

	/* loading string possibilities */
	std::string		possibilities[3] = {POSSIBLE1, POSSIBLE2, POSSIBLE3};
	
	/* loading function pointers */
	Form *(Intern::*funcPtr[])(std::string const &) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	
	/* manipulting form_name to check which form it matches (make it lowercase, erase spaces and tabs, add space at the end) */
	for (int i = 0; form_name[i]; ++i)
		form_name[i] = tolower(form_name[i]);
	for (std::size_t pos = form_name.find_first_of(" \t"); pos != std::string::npos; pos = form_name.find_first_of(" \t"))
		form_name.erase(pos, 1);
	form_name += " ";

	/* compare which form_name matches if any */
	for (int i = 0; i < 3; ++i)
	{
		if (possibilities[i].find(form_name) != std::string::npos)
		{
			index = i;
			break;
		}
	}

	/* if none of the forms match */
	if (index >= 3)
		throw (myException("\e[31mForm name not valid\e[0m\n"));
	
	/* creating the correct form through function pointers */
	Form	*temp = (this->*funcPtr[index])(_target);
	std::cout << "\e[32mIntern creates " << save << "\e[0m\n";
	return (temp);
}
