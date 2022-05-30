/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:56 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 13:36:26 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "\e[32m###   START OF TESTING   ###\e[0m\n\n";
	{
		std::cout << "\e[34m***** Test 1(ShrubberyCreationForm): constructing the form and executing its function (the form is signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("sasha", 100);
			ShrubberyCreationForm a("home");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 2(ShrubberyCreationForm): constructing the form and executing its function with a grade that is too low *****\e[0m\n";
		try
		{
			Bureaucrat	beau("sasha", 145);
			ShrubberyCreationForm a("home");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 3(ShrubberyCreationForm): constructing the form and executing its function (the form is not signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("sasha", 100);
			ShrubberyCreationForm a("home");
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 4(RobotomyRequestForm): constructing the form and executing its function (the form is signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("granny", 40);
			RobotomyRequestForm a("cat");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 5(RobotomyRequestForm): constructing the form and executing it with a grade that is too low *****\e[0m\n";
		try
		{
			Bureaucrat	beau("granny", 70);
			RobotomyRequestForm a("cat");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}	
	}
	{
		std::cout << "\n\e[34m***** Test 6(RobotomyRequestForm): constructing the form and executing it (without signing it) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("granny", 70);
			RobotomyRequestForm a("cat");
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}	
	}
	{
		std::cout << "\n\e[34m***** Test 7(PresidentialPardonForm): constructing the form and executing its function (the form is signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("their highness' assistant", 3);
			PresidentialPardonForm a("curtis zelphoid, the second");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 8(PresidentialPardonForm): constructing the form and executing it with a grade that is too low *****\e[0m\n";
		try
		{
			Bureaucrat	beau("their highness' assistant", 10);
			PresidentialPardonForm a("curtis zelphoid, the second");
			a.beSigned(beau);
			beau.signForm(a);
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}	
	}
	{
		std::cout << "\n\e[34m***** Test 9(PresidentialPardonForm): constructing the form and executing it (without signing it) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("their highness' assistant", 3);
			PresidentialPardonForm a("curtis zelphoid, the second");
			beau.executeForm(a);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}	
	}
	std::cout << "\n\e[32m###   END OF TESTING   ###\e[0m\n";
}
