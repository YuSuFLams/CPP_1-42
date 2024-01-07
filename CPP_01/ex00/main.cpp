/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:18:32 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 22:33:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **str)
{
	std::string input;

	if (ac != 2)
	{
		std::cout << "\033[0;31mWrong Arguments\033[0m" << std::endl;
		return (1);
	}

	input = str[1];
	std::cout << "***** Memory Heap *****\n" << std::endl;
	Zombie *zom = newZombie(input);
	zom->announce();
	delete zom;

	std::cout << "\n----------><----------\n" << std::endl;
	std::cout << "***** Memory Stack *****\n" << std::endl;
	randomChump(input);

	return (0);
}
