/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 12:26:38 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 17:50:35 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "myException.hpp"
#include <iostream>
#include <string>

class Form;

class	Bureaucrat
{
private:
	std::string	const	name;
	int					grade;
public:
/******************Constructors********************/
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat& original);
	Bureaucrat& operator=(const Bureaucrat& original);

/******************Destructor********************/
	~Bureaucrat();

/******************Member Functions********************/
	std::string const	&getName() const;
	int					getGrade() const;
	void	incrementGrade(void);
	void	decrementGrade(void);
	std::string	GradeTooLowException(void) const;
	std::string	GradeTooHighException(void) const;

	void	signForm(Form const & form);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureau);

#endif
