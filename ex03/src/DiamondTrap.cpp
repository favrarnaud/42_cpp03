/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:25:09 by afavre            #+#    #+#             */
/*   Updated: 2023/05/31 10:25:10 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
                                            FragTrap(name + "_clap_name"),
                                            ScavTrap(name + "_clap_name")
{
    this->name = name;
    this->hit_point = FragTrap::hit_point;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    //this->ClapTrap::name = name + "_clap_name";
    std::cout << "[DiamondTrap] " << "constructeur de " << name <<  std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "[DiamondTrap] " << "destructeur de " << name << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "le DiamondTrap ce nomme " << name << "," <<  std::endl;
    std::cout << "le ClapTrap ce nomme " << ClapTrap::name << "," <<  std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
}