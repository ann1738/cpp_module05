/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasr <anasr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:56 by ann               #+#    #+#             */
/*   Updated: 2022/06/03 18:21:12 by anasr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

int	main(void)
{
	std::cout << "\e[32m###   START OF TESTING   ###\e[0m\n\n";
	{
		std::cout << "\e[34m***** Test 1(a): intern makes shrubbery form and executes it successfully *****\e[0m\n";
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
		std::cout << "\e[34m***** Test 1(b): intern makes shrubbery form and executes it unsuccessfully (grade too low) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 140);
			Intern	nobody;
			Form *form = nobody.makeForm("shrubbery creation", "home");
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
		std::cout << "\e[34m***** Test 1(c): intern makes shrubbery form and executes it unsuccessfully (form not signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 120);
			Intern	nobody;
			Form *form = nobody.makeForm("shrubbery creation", "home");
			try
			{
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
		std::cout << "\e[34m***** Test 1(d): intern unable to make shrubbery form (invalid forms) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 140);
			Intern	nobody;
			Form *form = nobody.makeForm("shruubbery creation", "home");
			/* examples of invalid form names */
			// Form *form = nobody.makeForm("shrubberry creation", "home");
			// Form *form = nobody.makeForm("shruubberi form", "home");
			// Form *form = nobody.makeForm("shrubbery creations form", "home");
			// Form *form = nobody.makeForm("shrubbery robotomy form", "home");
			// Form *form = nobody.makeForm("shrubbery presidential form", "home");
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
		std::cout << "\n\e[34m***** Test 2(a): intern makes robotomy request form and executes it successfully *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 40);
			Intern	nobody;
			Form *form = nobody.makeForm("robotomy request ", "hamster");
			try
			{
				form->beSigned(beau);
				beau.signForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
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
		std::cout << "\n\e[34m***** Test 2(b): intern makes robotomy request form and executes it unsuccessfully (grade is too low) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 46);
			Intern	nobody;
			Form *form = nobody.makeForm("robotomy request ", "hamster");
			try
			{
				form->beSigned(beau);
				beau.signForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
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
		std::cout << "\n\e[34m***** Test 2(c): intern makes robotomy request form and executes it unsuccessfully (form not signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 40);
			Intern	nobody;
			Form *form = nobody.makeForm("robotomy request ", "hamster");
			try
			{
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
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
		std::cout << "\n\e[34m***** Test 2(d): intern unable to make robotomy request form (invalid form name) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 40);
			Intern	nobody;
			Form *form = nobody.makeForm("robottomy request ", "hamster");
			/* other invalid form names */
			// Form *form = nobody.makeForm("robotomy requests ", "hamster");
			// Form *form = nobody.makeForm("robotomy foorm ", "hamster");
			// Form *form = nobody.makeForm("robotomy forms ", "hamster");
			// Form *form = nobody.makeForm("robotumy forms ", "hamster");
			// Form *form = nobody.makeForm("robotomi ", "hamster");
			try
			{
				form->beSigned(beau);
				beau.signForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
				beau.executeForm(*form);
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
		std::cout << "\n\e[34m***** Test 3(a): intern makes presidential pardon form and executes it successfully *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 5);
			Intern	nobody;
			Form *form = nobody.makeForm("presidential pardon ", "bumble bee");
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
		std::cout << "\n\e[34m***** Test 3(b): intern makes presidential pardon form and executes it unsuccessfully (grade too low) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 6);
			Intern	nobody;
			Form *form = nobody.makeForm("presidential pardon ", "bumble bee");
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
		std::cout << "\n\e[34m***** Test 3(c): intern makes presidential pardon form and executes it unsuccessfully (form not signed) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 5);
			Intern	nobody;
			Form *form = nobody.makeForm("presidential pardon ", "bumble bee");
			try
			{
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
		std::cout << "\n\e[34m***** Test 3(d): intern unable to make presidential pardon form (invalid form name) *****\e[0m\n";
		try
		{
			Bureaucrat	beau("lazy", 5);
			Intern	nobody;
			Form *form = nobody.makeForm("presedential pardon ", "bumble bee");
			/* other examples of invalid form names */
			// Form *form = nobody.makeForm("presidintial pardon ", "bumble bee");
			// Form *form = nobody.makeForm("presidential parddon ", "bumble bee");
			// Form *form = nobody.makeForm("presidential pardonn ", "bumble bee");
			// Form *form = nobody.makeForm("presedential form ", "bumble bee");
			// Form *form = nobody.makeForm("presidential fourm ", "bumble bee");
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
