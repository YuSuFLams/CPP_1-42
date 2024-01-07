/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:02:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 18:25:25 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void)
{
    std::cout << "\033[1;34m[ DEBUG ] :\033[0m" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup";
    std::cout << "burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "\033[1;33m[ INFO ] :\033[0m" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;;
}


void Harl::warning( void )
{
    std::cout << "\033[1;31m[ WARNING ] :\033[0m" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
    std::cout << "years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "\033[1;32m[ ERROR ] :\033[0m" << std::endl; 
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*m_func[4]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string array[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++)
        if (!level.compare(array[i]))
            (this->*m_func[i])();
}