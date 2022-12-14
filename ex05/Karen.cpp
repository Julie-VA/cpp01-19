/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:52:57 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/08 16:20:28 by rvan-aud         ###   ########.fr       */
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
	void		(Karen::*ptr[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	std::string cmp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == cmp[i])
			(this->*ptr[i])();
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
