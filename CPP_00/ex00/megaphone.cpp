/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:20:21 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 18:13:34 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string to_upper(std::string s)
{
    int i;

    i = -1;
    while (s[++i])
        s[i] = toupper(s[i]);
    return (s);
}

int main(int ac, char **str)
{
    int i;
    std::string s;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while (++i < ac)
    {
        s = str[i];
        std::cout << to_upper(s);
    }
    std::cout << std::endl;
    return 0;
}