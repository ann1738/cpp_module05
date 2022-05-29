/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myException.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ann <ann@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:12:15 by ann               #+#    #+#             */
/*   Updated: 2022/05/29 13:49:17 by ann              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myException.hpp"

myException::myException(std::string msg): message(msg) {}

const char* myException::what() const throw()
{
	return (message.c_str());
}

myException::~myException() throw() {}
