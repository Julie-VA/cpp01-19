/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:14:05 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/06 17:42:20 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	is_empty(std::string s1, std::string s2)
{
	if (s1.empty() && s2.empty())
	{
		std::cout << "Error : both strings are empty" << std::endl;
		return (1);
	}
	else if (s1.empty() || s2.empty())
	{
		if (s1.empty())
			std::cout << "Error : string 1 is empty" << std::endl;
		else
			std::cout << "Error : string 2 is empty" << std::endl;
		return (1);
	}
	return (0);
}

int	replace(std::string filename, std::string s1, std::string s2)
{
	std::string	buff;
	size_t		pos;
	size_t		offset;

	if (is_empty(s1, s2))
		return (1);
	std::ifstream	ifs(filename);
	if (ifs.good())
	{
		if (ifs.peek() == std::ifstream::traits_type::eof())
		{
			std::cout << "Error : " << filename << " is empty" << std::endl;
			return (1);
		}
		std::ofstream	ofs(filename.append(".replace"));
		if (ofs.good())
		{
			while(getline(ifs, buff))
			{
				offset = 0;
				pos = buff.find(s1, offset);
				while (pos != std::string::npos)
				{
					offset = pos;
					std::cout << pos << std::endl;
					buff.erase(pos, s1.length());
					buff.insert(pos, s2);
					std::cout << buff << std::endl;
					pos = buff.find(s1, offset + 1);
				}
				ofs << buff;
				if (ifs.eof())
					break;
				ofs << std::endl;
			}
		}
		ifs.close();
		ofs.close();
	}
	else
	{
		std::cout << "Error: " << strerror(errno) << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char	**argv)
{
	if (argc != 4)
	{
		std::cout << "Error : invalid number of arguments" << std::endl;
		return (1);
	}
	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	return (replace(filename, s1, s2));
}
