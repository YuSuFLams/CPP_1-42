/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:31:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 03:53:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->Materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    for (int i = 0; i < 4; i++)
        this->Materia[i] = NULL;
    *this = cpy;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++){
        if (this->Materia[i]  != NULL) {
            delete this->Materia[i];
            this->Materia[i] = NULL;
        }
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    if (this != &obj)
    {
        for(int i = 0; i < 4; i++){
            if (this->Materia[i]  != NULL) {
                delete this->Materia[i];
                this->Materia[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (obj.Materia[i] != NULL)
                this->Materia[i] = obj.Materia[i]->clone();
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++){
        if (this->Materia[i] == NULL && m != NULL){
            this->Materia[i] = m->clone();
            break ;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i] != NULL && !this->Materia[i]->getType().compare(type))
            return (this->Materia[i]->clone());
    }
    return (NULL);
}
