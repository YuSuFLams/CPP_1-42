/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:47:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 15:37:48 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(int ac, char **str)
{
    if (ac != 2) {
        std::cout << "\033[95mInvalid Number of args\033[0m" << std::endl;
        return (EXIT_FAILURE);
    }

    std::string input;
    input = str[1];
    int N = atoi(str[1]);
    if (input.length() > 5 || N < 0 || (N % 2))
    {
        std::cout << "\033[94mYour Number of Reapet Should Must Be Valid!.\033[0m" << std::endl;
        return (EXIT_FAILURE);
    }

    Animal *array[N];

    for (int i = 0; i < N; i++) {
        if (!(i & 1)) {
            array[i] = new Dog("Dog");
            if (array[i] == NULL) {
                std::cerr << "Failed to allocate memory for a Dog." << std::endl;
            }
        }
        else {
            array[i] = new Cat("Cat");
            if (array[i] == NULL) {
                std::cerr << "Failed to allocate memory for a Dog." << std::endl;
            }
        }
    }

    for(int i = 0; i < N; i++) {
        std::cout << std::endl;
        if (array[i]->getType() == "Dog")
            std::cout << "\033[94m"<< array[i]->getType() << "\033[0m :"<< std::endl;
        else
            std::cout << "\033[93m"<< array[i]->getType() << "\033[0m :"<< std::endl;
        array[i]->makeSound();
    }
    std::cout << std::endl;

    for(int i = 0; i < N; i++)
        delete array[i];

    std::cout << std::endl << std::endl;;
    
    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << std::endl;
    return 0;
}