/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:36:21 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 17:20:39 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class	Form
{
private:
	std::string const	name;
	bool				Signed;
	int const			signGrade;
	int const			execGrade;
public:
/******************Constructors********************/
	Form();
	Form(std::string _name, int _signGrade, int _execGrade);
	Form(const Form& original);
	Form& operator=(const Form& original);

/******************Destructor********************/
	~Form();

/******************Member Functions********************/
	std::string const	&getName() const;
	bool				getSigned() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	std::string GradeTooLowException(void) const;
	std::string GradeTooHighException(void) const;
	void	beSigned(Bureaucrat const & bureau);
};

std::ostream	&operator<<(std::ostream &output, Form const & form);

#endif
