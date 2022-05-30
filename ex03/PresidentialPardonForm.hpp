/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:40:46 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 12:28:31 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENTIALPARDONFORM_HPP
# define PRESEDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Form.hpp"

class	PresidentialPardonForm: public Form
{
private:
	std::string	target;
public:
/******************Constructors********************/
	PresidentialPardonForm();
	PresidentialPardonForm(std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& original);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& original);

/******************Destructor********************/
	~PresidentialPardonForm();

/******************Member Functions********************/
	void	execute(Bureaucrat const & executor) const;
};

#endif
