/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:38:10 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 19:58:16 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char** str)
{
    std::string name;
    int N;

    if (ac != 3) {
        std::cout << "\033[0;31mWrong Arguments\033[0m" << std::endl;
        return 1;
    }

    name = str[1];
    N = atoi(str[2]);
    Zombie* zom = zombieHorde(N, name);

    for (int i = 0; i < N; i++) {
        zom[i].announce();
    }

    delete[] zom;

    return 0;
}
