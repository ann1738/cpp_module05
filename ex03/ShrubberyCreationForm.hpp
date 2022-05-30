/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:40:46 by ann               #+#    #+#             */
/*   Updated: 2022/05/30 12:28:31 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
private:
	std::string	target;
public:
/******************Constructors********************/
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string _target);
	ShrubberyCreationForm(const ShrubberyCreationForm& original);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& original);

/******************Destructor********************/
	~ShrubberyCreationForm();

/******************Member Functions********************/
	void	execute(Bureaucrat const & executor) const;
};


#define ASCII_TREES " \n\
								oooooo    ooooo\n\
							oooooo oo  ooooooo\n\
							oooo ooooo ooo oooo\n\
							ooo o ooooo  oooooo\n\
							ooo oooooooo o ooo\n\
								ooo\\oo\\  /o/o\n\
									\\  \\/ /\n\
									|   /\n\
									|  |\n\
									| D|\n\
									|  |\n\
									|  |\n\
							______/____\\____\n\n\n\
                                            .\n\
                                              .         ;  \n\
                 .              .              ;%     ;;   \n\
                   ,           ,                :;%  %;   \n\
                    :         ;                   :;%;'     .,   \n\
           ,.        %;     %;            ;        %;'    ,;\n\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
               ;%;      %;        ;%;        % ;%;  ,%;'\n\
                `%;.     ;%;     %;'         `;%%;.%;'\n\
                 `:;%.    ;%%. %@;        %; ;@%;%'\n\
                    `:%;.  :;bd%;          %;@%;'\n\
                      `@%:.  :;%.         ;@@%;'  \n\
                        `@%.  `;@%.      ;@@%;    \n\
                          `@%%. `@%%    ;@@%;       \n\
                            ;@%. :@%%  %@@%;      \n\
                              %@bd%%%bd%%:;    \n\
                                #@%%%%%:;;\n\
                                %@@%%%::;\n\
                                %@@@%(o);  . '         \n\
                                %@@@o%;:(.,'         \n\
                            `.. %@@@o%::;         \n\
                               `)@@@o%::;         \n\
                                %@@(o)::;        \n\
                               .%@@@@%::;         \n\
                               ;%@@@@%::;.          \n\
                              ;%@@@@%%:;;;. \n\
                          ...;%@@@@@%%:;;;;,..  \n\n\n\n\
								,@@@@@@@,\n\
						,,,.   ,@@@@@@/@@,  .oo8888o.\n\
						,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
					,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
					%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
					%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
					`&%\\ ` /%&'    |.|        \\ '|8'\n\
						|o|        | |         | |\n\
						|.|        | |         | |\n\
					jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n\n\n"
#endif
