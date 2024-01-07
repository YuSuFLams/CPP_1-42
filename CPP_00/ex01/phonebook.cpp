/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:42 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 20:20:08 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::set_str(std::string str)
{
    if (str.length() < 10)
    {
        while (str.length() < 10)
            str.push_back(' ');
    }
    else if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.push_back('.');
    }
    else
        return (str);
    return (str);   
}

std::string PhoneBook::test_phone(std::string phone_number)
{
    int i = -1;

    while (phone_number[++i])
    {   
        if (!std::isdigit(phone_number[i])) {
            std::cout << "Your Number Phone Should Be Numbers Only!." << std::endl;
            break ;
        }
    }
    return (phone_number);
}

std::string PhoneBook::test_index(std::string index)
{
	int i = -1;

	while (index[++i])
	{   
		if (!std::isdigit(index[i])) {
			std::cout << "Your Index Should Be Valid!." << std::endl;
			break ;
		}
	}
	return (index);
}

bool PhoneBook::all_digit(std::string pn)
{
    int i = -1;

    while (pn[++i])
    {
        if (!std::isdigit(pn[i]))
            return (false);
    }
    return (true);
}

void	PhoneBook::add_command()
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	static int  index;
	Contact     n_contact;

    do
    {
        std::cout << "Entre First Name "<< std::setw(5) <<  ":";
        std::getline(std::cin, first_name);
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        if (first_name.empty())
            std::cout << "Your First Name Should Be Not Empty!" << std::endl;
    } while (first_name.empty());
    

    do
    {
        std::cout << "Entre Last Name "<< std::setw(6) <<  ":" ;
        std::getline(std::cin, last_name);
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        if (last_name.empty())
            std::cout << "Your Last Name Should Be Not Empty!" << std::endl;
    } while (last_name.empty());
	

    do
    {
        std::cout << "Entre Nick Name "<< std::setw(6) <<  ":" ;
        std::getline(std::cin, nick_name);
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        if (nick_name.empty())
            std::cout << "Your Nick Name Should Be Not Empty!" << std::endl;
    } while (nick_name.empty());
	

	do
	{
		std::cout << "Entre Phone Number "<< std::setw(3) <<  ":" ;
		std::getline(std::cin, phone_number);
		if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
		if (!phone_number.length())
			std::cout << "Your Phone Number Can't Be Empty!" << std::endl;
		phone_number = test_phone(phone_number);
	}while (!all_digit(phone_number) || !phone_number.length());

    do
    {
        std::cout << "Entre Darkset Secret :" ;
        std::getline(std::cin, darkest_secret);
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        if (darkest_secret.empty())
            std::cout << "Your Darkset Secret Should Be Not Empty!" << std::endl;
    } while (darkest_secret.empty());

	n_contact = Contact(set_str(first_name), set_str(last_name), set_str(nick_name), \
	set_str(phone_number), set_str(darkest_secret));
	contact_p[index % 8] = n_contact;
    std::cout << "\033[1;33m\tADD Are Succesfully !\033[0m" << std::endl;
	index++;
}

void	PhoneBook::Show_4_columns()
{
	int i = 0;

	std::cout << "***********************************************" << std::endl;
	std::cout << "||  INDEX   |FIRST NAME|LAST  NAME|NICK  NAME||" << std::endl;
	std::cout << "||**********|**********|**********|**********||" << std::endl;

	for (i = 0; i < 8; i++)
	{
		if(contact_p[i].getF_Name().length() <= 0)
			break;
		std::cout << "||" << std::setw(5) << i + 1 << std::setw(6) << "|";
		std::cout << contact_p[i].getF_Name() << "|" << contact_p[i].getL_Name() << "|" \
		<< contact_p[i].getN_name() << "||" << std::endl;
		std::cout << "***********************************************" << std::endl;
	}
	if (contact_p[0].getF_Name().length() <= 0)
		std::cout << "***********************************************" << std::endl;
}

void    PhoneBook::Show_all_columns()
{
    int index = 0;
	std::string str;

    do
    {
        std::cout << "Enter The Index Whose Information You Want Me To Show You:";
        std::getline(std::cin,str);
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        str = test_index(str);
    }while (!all_digit(str));
    
    if (std::cin.good())
        index = atoi(str.c_str());
    
    if (index < 1 || index > 8)
    {
        std::cout << "Your Index Is Out Of Range!." << std::endl;
        return ;
    }
    index--;
    if (index >= 0 && index <= 7 && contact_p[index].getF_Name().length() <= 0)
    {
        std::cout << "Index Your Entry Is Empty In Contact!." << std::endl;
        if (std::cin.eof() == true)
        {
            std::cin.clear();
            std::cout << std::endl;
            clearerr(stdin);
        }
        return ;
    }

    std::cout << "*********************************************************************" << std::endl;
    std::cout << "||  Index   |First Name|Last  Name|Nick  Name|Phone Numb|Darset Sec||" << std::endl;
    std::cout << "||**********|**********|**********|**********|**********|**********||" << std::endl;

    std::cout << "||" << std::setw(5) << index + 1 << std::setw(6) << "|";
    std::cout << contact_p[index].getF_Name() << "|" << contact_p[index].getL_Name() << "|" \
    << contact_p[index].getN_name() << "|" << contact_p[index].getP_Number() << "|" << contact_p[index].getD_Secret() \
    << "||" << std::endl;
    std::cout << "*********************************************************************" << std::endl;
}

void    PhoneBook::search_command()
{
    Show_4_columns();
    Show_all_columns();
}