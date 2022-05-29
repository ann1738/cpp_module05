/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:56 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 19:00:42 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	std::cout << "\e[32m###   START OF TESTING   ###\e[0m\n\n";
	{
		std::cout << "\e[34m***** Test 1: constructing a Form object with valid sign grade of 19 and execution grade of 5 *****\e[0m\n";
		try
		{
			Form a("campus expansion", 19, 5);
			std::cout << a;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 2: constructing an object of Class Form with invalid signing grade of -1 (too high) *****\e[0m\n";
		try
		{
			Form a("campus expansion", -1, 5);
			std::cout << a;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[34m***** Test 3: constructing an object of Class Form with invalid executing grade of 10000000 (too low) *****\e[0m\n";
		try
		{
			Form a("campus expansion", 100, 10000000);
			std::cout << a;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[34m***** Test 4: constructing an unqualified Bureaucrat to sign a Form *****\e[0m\n";
		try
		{
			Bureaucrat	beau("ally", 11);
			std::cout << "\e[36mConstructing a Bureaucrat called " << beau.getName() << "\e[0m\n";
			std::cout << beau;
			Form	f("campus expansion", 10, 5);
			std::cout << "\e[36mConstructing a Form called " << f.getName() << "\e[0m\n";
			std::cout << f;
			f.beSigned(beau);
			beau.signForm(f);
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[34m***** Test 5: constructing a qualified Bureaucrat to sign a Form*****\e[0m\n";
		try
		{
			Bureaucrat	beau("ally", 9);
			std::cout << "\e[36mConstructing a Bureaucrat called " << beau.getName() << "\e[0m\n";
			std::cout << beau;
			Form	f("campus expansion", 10, 5);
			std::cout << "\e[36mConstructing a Form called " << f.getName() << "\e[0m\n";
			std::cout << f;
			f.beSigned(beau);
			beau.signForm(f);
			std::cout << f;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\n\e[34m***** Test 6: testing copy constructor and copy assignment overloading of the Form class *****\e[0m\n";
		try
		{
			Bureaucrat	beau("samantha", 10);
			std::cout << "\e[36mConstructing a Bureaucrat called " << beau.getName() << "\e[0m\n";
			std::cout << beau;
			Form	f("campus expansion", 10, 5);
			std::cout << "\e[36mConstructing a Form called " << f.getName() << "\e[0m\n";
			std::cout << f;
			Form	fCopy(f);
			std::cout << "\e[36mTesting copy constructor\e[0m\n";
			std::cout << fCopy;
			fCopy.beSigned(beau);
			beau.signForm(fCopy);
			std::cout << fCopy;
			Form	fEqual;
			fEqual = f;
			std::cout << "\e[36mTesting copy assignment operator\e[0m\n";
			std::cout << fEqual;
			fEqual.beSigned(beau);
			beau.signForm(fEqual);
			std::cout << fEqual;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	std::cout << "\n\e[32m###   END OF TESTING   ###\e[0m\n";
}
