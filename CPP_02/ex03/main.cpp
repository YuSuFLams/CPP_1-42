/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:22:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/31 18:41:23 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(1, 2);
    Point b(2, 3);
    Point c(-2, 3);
    
    Point pts_1(1, 2.5);
    Point pts_2(-4, 9);

    bool area_c = bsp(a, b, c, pts_1);
    bool area_w = bsp(a, b, c, pts_2);
    
    std::cout << "\n *******     Correct Test     ******* " << std::endl;
    if (area_c == true) 
        std::cout <<  "\033[33;4mPoint You Give Me Is In Inside This Triangle !.\033[0m\n" << std::endl;
    else 
        std::cout << "\033[36;4mPoint You Give Me Is Not Found In This Triangle !.\033[0m\n" << std::endl;

    std::cout << " *******     Wrong Test     ******* " << std::endl;
    if (area_w == true) 
        std::cout << "\033[33;4mPoint You Give Me Is In Inside This Triangle !.\033[0m\n" << std::endl;
    else 
        std::cout << "\033[36;4mPoint You Give Me Is Not Found In This Triangle !.\033[0m\n" << std::endl;

    return 0;
}
