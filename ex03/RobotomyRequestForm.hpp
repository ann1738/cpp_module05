/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:40:46 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 12:28:31 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Form.hpp"

class	RobotomyRequestForm: public Form
{
private:
	std::string	target;
public:
/******************Constructors********************/
	RobotomyRequestForm();
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& original);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& original);

/******************Destructor********************/
	~RobotomyRequestForm();

/******************Member Functions********************/
	void	execute(Bureaucrat const & executor) const;
};

#endif
