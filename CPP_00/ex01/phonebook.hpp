/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:48 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 20:06:02 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <cstdio>
# include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact_p[8];
    public:
        PhoneBook();
        ~PhoneBook();

        std::string test_phone(std::string phone_number);
        std::string test_index(std::string index);
        std::string set_str(std::string str);
        bool        all_digit(std::string pn);

        void        Show_all_columns();
        void        search_command();
        void        Show_4_columns();
        void        add_command();

};

#endif