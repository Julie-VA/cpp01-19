/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:52:57 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/08 16:11:04 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	std::string cmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i_lvl = -1;
	int 		i;

	for (i = 0; i < 4; i++)
	{
		if (level == cmp[i])
			i_lvl = i;
	}
	switch (i_lvl)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			this->_debug();
			std::cout << std::endl;
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			this->_info();
			std::cout << std::endl;
		case (2):
			std::cout << "[ WARNING ]" << std::endl;
			this->_warning();
			std::cout << std::endl;
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			this->_error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my burger. I just love it!"
		<< std::endl;
}

void	Karen::_info(void)
{
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough!"
		<< std::endl;
}

void	Karen::_warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free."
		<< std::endl;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
