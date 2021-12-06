/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:38:49 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/03 15:59:11 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private:

		Weapon		&_weapon;
		std::string	_name;
};
