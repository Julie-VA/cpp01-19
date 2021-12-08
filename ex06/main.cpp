/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:52:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/08 16:00:31 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen		karen;

	if (argc < 2)
	{
		std::cout << "Please provide a message level." << std::endl;
		return (1);
	}
	if (argc > 2)
	{
		std::cout << "Too many arguments." << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}
