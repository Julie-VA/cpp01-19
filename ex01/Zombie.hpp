/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:41:31 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/03 12:00:12 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Zombie
{
	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);
		
	private:
		
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);
