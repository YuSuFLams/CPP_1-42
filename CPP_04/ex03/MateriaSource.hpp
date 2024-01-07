/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:09:11 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 01:09:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *Materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &cpy);
        MateriaSource& operator=(const MateriaSource &obj);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif