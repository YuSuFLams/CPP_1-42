/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:39:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 15:35:18 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal *animal = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << std::endl;
    std::cout << "**** Cat & Animal & Dog ****" << std::endl;
    std::cout << std::endl;

    std::cout << std::endl; 
    std::cout << "Name : \033[94m" << j->getType() << "\033[0m " << std::endl;
    i->makeSound();
    std::cout << std::endl; 
    std::cout << "Name : \033[94m" << i->getType() << "\033[0m " << std::endl;
    j->makeSound();
    std::cout << std::endl; 
    std::cout << "Name : \033[95m" << animal->getType() << "\033[0m " << std::endl;
    animal->makeSound();
    
    std::cout << std::endl; 
    std::cout << "**** WrongCat & WrongAnimal ****" << std::endl;
    std::cout << std::endl; 
    
    const WrongAnimal *Wrong_animal = new WrongAnimal();
    const WrongAnimal *Wrong_Cat = new WrongCat();
    
    std::cout << std::endl;
    
    std::cout << "Name : \033[94m" << Wrong_Cat->getType() << "\033[0m " << std::endl;
    Wrong_Cat->makeSound();
    
    std::cout << std::endl;

    std::cout << "Name : \033[94m" << Wrong_animal->getType() << "\033[0m " << std::endl;
    Wrong_animal->makeSound();
    std::cout << std::endl;

    delete Wrong_Cat;
    delete Wrong_animal;

    std::cout << std::endl;

    delete i;
    delete j;
    delete animal;
    return 0;
}