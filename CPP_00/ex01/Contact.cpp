/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:33 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 02:45:24 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, \
    std::string d_secret)
{
    this->_first_name = f_name;
    this->_last_name = l_name;
    this->_nick_name = n_name;
    this->_phone_number = p_number;
    this->_darkest_secret = d_secret;
}
Contact::~Contact()
{
}

std::string Contact::getF_Name() const
{
    return (this->_first_name);
}

std::string Contact::getL_Name() const
{
    return (this->_last_name);
}

std::string Contact::getN_name() const
{
    return (this->_nick_name);
}

std::string Contact::getP_Number() const
{
    return (this->_phone_number);
}

std::string Contact::getD_Secret() const
{
    return (this->_darkest_secret);
}
