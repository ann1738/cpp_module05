/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:48:25 by anasr             #+#    #+#             */
/*   Updated: 2022/06/05 22:19:44 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
private:
	std::string	target;

	Form	*makeShrubbery(std::string const & _target);
	Form	*makeRobotomy(std::string const & _target);
	Form	*makePresidential(std::string const & _target);
public:
/******************Constructors********************/
	Intern();
	Intern(const Intern& original);
	Intern& operator=(const Intern& original);

/******************Destructor********************/
	~Intern();

/******************Member Functions********************/
	Form *makeForm(std::string form_name, std::string const & _target);
};

# define POSSIBLE1 "shrubbery creation \
shrubberycreation creationshrubbery \
shrubberyform formshrubbery \
shrubberycreationform shrubberyformcreation creationshrubberyform creationformshrubbery formshrubberycreation formcreationshrubbery "
# define POSSIBLE2 "robotomy request \
robotomyform formrobotomy \
robotomyrequest requestrobotomy \
robotomyrequestform robotomyformrequest requestrobotomyform requestformrobotomy formrobotomyrequest formrequestrobotomy "
# define POSSIBLE3 "presidential pardon \
presidentialpardon pardonpresidential \
formpardon pardonform \
presidentialform formpresidential \
presidentialpardonform presidentialformpardon pardonpresidentialform pardonformpresidential formpresidentialpardon formpardonpresidential "

#endif
