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

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_point = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "[FragTrap] " << "FragTrap " << name << " sort de ca chambre !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap] " << name << " retourne ce coucher !" << std::endl;
}

void FragTrap::highFiveGuys()
{
    if (this->energy > 0)
    {
        std::cout << name << " leve ca main pour te faire un high five !" << std::endl;
        this->energy--;
    }
    else
    {
        std::cout << name << " est a court d'energie, pauvre petit bouchou ! faut le laisser ce reposer !" << std::endl;
    }
}
