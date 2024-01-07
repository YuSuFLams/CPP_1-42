/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:35 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 02:45:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact();
        ~Contact();
        Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret);
        
        std::string getF_Name() const;
        std::string getL_Name() const;
        std::string getN_name() const;
        std::string getP_Number() const;
        std::string getD_Secret() const;

};

#endif
