/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:30:23 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/08 18:34:28 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Weapon
{
	public:
	
		Weapon(std::string type);
		~Weapon(void);

		std::string	const &getType(void) const;
		void		setType(std::string);

	private:

		std::string	_type;
};
