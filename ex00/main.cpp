/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:03:56 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 15:24:07 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\e[32m###   START OF TESTING   ###\e[0m\n\n";
	{
		std::cout << "\e[34m***** Test 1: initializing with valid grade of 15 *****\e[0m\n";
		try
		{
			Bureaucrat a("thea", 15);
			std::cout << a;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 2: initializing with invalid grade of 151 (too low) *****\e[0m\n";
		try
		{
			Bureaucrat	a("thea", 151);
			std::cout << a;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 3: initializing with invalid grade of 0 (too high) *****\e[0m\n";
		try
		{
			Bureaucrat	a("thea", 0);
			std::cout << a;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 4: valid and invalid increment of Bureucrate *****\e[0m\n";
		try
		{
			Bureaucrat	b("mia", 8);
			std::cout << b;
			b.incrementGrade();
			std::cout << "\e[95mAfter increment of grade (grade should decrease)\e[0m\n" << b;
			std::cout << "\e[95mLooping until invalid\n";
			for (;;)
			{
				b.incrementGrade();
				std::cout << "\e[95mAfter increment of grade (grade should decrease)\e[0m\n" << b;
			}
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 5: valid and invalid decrement of Bureucrate *****\e[0m\n";
		try
		{
			Bureaucrat	b("natalie", 141);
			std::cout << b;
			b.decrementGrade();
			std::cout << "\e[95mAfter decrement of grade (grade should increase)\e[0m\n" << b;
			std::cout << "\e[95mLooping until invalid\n";
			for (;;)
			{
				b.decrementGrade();
				std::cout << "\e[95m After decrement of grade (grade should increase)\e[0m\n" << b;
			}
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	{
		std::cout << "\n\e[34m***** Test 6: testing copy constructor and copy assignment overloading*****\e[0m\n";
		try
		{
			Bureaucrat	c("clara", 148);
			Bureaucrat	d(c);
			std::cout << d;
			d.decrementGrade();
			std::cout << "\e[95mAfter decrement of grade (grade should increase)\e[0m\n" << d;
			Bureaucrat	e;
			e = d;
			std::cout << e;
			e.decrementGrade();
			std::cout << "\e[95mAfter decrement of grade (grade should increase)\e[0m\n" << e;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what();
		}
	}
	std::cout << "\n\e[32m###   END OF TESTING   ###\e[0m\n";
}