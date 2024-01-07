/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:58:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 18:58:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string stringSTD = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringSTD;
    std::string &stringREF = stringSTD;

    std::cout << "Memory :" << std::endl;
    std::cout << &stringSTD << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << "----------><----------" << std::endl;

    std::cout << "Value :" << std::endl;
    std::cout << stringSTD << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}