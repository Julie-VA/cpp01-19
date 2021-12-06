/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:58:47 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/03 11:36:49 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Zombie
{
	public:

		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		
	private:
		
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
