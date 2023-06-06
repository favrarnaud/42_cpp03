/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:31:31 by afavre            #+#    #+#             */
/*   Updated: 2023/05/30 12:31:33 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap " << name << " au rapport !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << " retourne a la caserne !" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->energy > 0)
    {
        std::cout << name << " vient de ce transformer en un mur d'enceinte imprennable !" << std::endl;
        this->energy--;
    }
    else
    {
        std::cout << name << " est a court d'energie, pauvre petit bouchou ! faut le laisser ce reposer !" << std::endl;
    }
}
