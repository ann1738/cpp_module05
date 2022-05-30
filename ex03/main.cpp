/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:56 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 19:30:51 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main(void)
{
	std::cout << "\e[32m###   START OF TESTING   ###\e[0m\n\n";
	{
		std::cout << "\e[34m***** Test 1: intern makes shrubbery form and executes it successfully *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 100);
			Intern	nobody;
			Form *form = nobody.makeForm("shrubbery form", "home");
			try
			{
				form->beSigned(beau);
				beau.signForm(*form);
				beau.executeForm(*form);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			delete form;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 2: intern makes robotomy request form and executes it successfully *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 50);
			Intern	nobody;
			Form *form = nobody.makeForm("robotomy request", "home");
			try
			{
				form->beSigned(beau);
				beau.signForm(*form);
				beau.executeForm(*form);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			delete form;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	std::cout << "\n\e[32m###   END OF TESTING   ###\e[0m\n";
}
