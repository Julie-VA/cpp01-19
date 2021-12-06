/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:11:26 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/03 11:39:21 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	fred("Fred");
	Zombie	*jess = newZombie("Jess");

	fred.announce();
	jess->announce();
	delete jess;
	randomChump("Taylor");
}
