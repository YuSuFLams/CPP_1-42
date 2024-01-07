/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:09:32 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:15:35 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &cpy);
        Brain &operator=(const Brain &obj);
        ~Brain();

        std::string getIdeas(int ind) const;
        void        setIdeas(int ind, const std::string idea);
};
#endif 