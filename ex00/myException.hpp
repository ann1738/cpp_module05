/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myException.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:08:04 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 15:27:44 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYEXCEPTION_HPP
# define MYEXCEPTION_HPP

#include <string>
#include <exception>

class myException: public std::exception
{
private:
	std::string	message;
public:
	myException(std::string msg);
	const char* what() const throw();

	~myException() throw();
};

#endif