/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:05:37 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/08 13:58:27 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string = " << &string << std::endl;
	std::cout << "Address of string using stringPTR = " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF = " << &stringREF << std::endl;
	std::cout << "string display = " << string << std::endl;
	std::cout << "string display using stringPTR = " << *stringPTR << std::endl;
	std::cout << "string display using stringREF = " << stringREF << std::endl;
}
