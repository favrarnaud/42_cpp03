/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:16:11 by afavre            #+#    #+#             */
/*   Updated: 2023/05/30 10:16:14 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main()
{
    std::cout << "----------| Generation des ClapTrap |---------------" << std::endl;
    ScavTrap a("arnaud");

    std::cout << std::endl << "----------| Test des fonction de base |---------------" << std::endl;

    std::cout << std::endl << "--> ClapTrap.attaque()" << std::endl;
    a.attack("lajoie");

    std::cout << std::endl << "--> ClapTrap.takeDamage()" << std::endl;
    for (int i = 0; i< 3; i++)
        a.takeDamage(5);

    std::cout << std::endl << "--> ClapTrap.beRepaired()" << std::endl;
    for (int i = 0; i < 4; i++)
        a.beRepaired(5);
    std::cout << a.getName() << " a " << a.getHitPoint() << " point de vie !" << std::endl;

    std::cout << std::endl << "----------| Test de l'energie du ClapTrap |---------------" << std::endl;
    for (int i = 0; i < 50; i++)
        a.attack("lajoie");

    std::cout << std::endl << "|-|-|-| Rendons un peu d'energie a ce pauvre petit ! 😉 |-|-|-|" << std::endl;
    a.setEnergy(5);

    std::cout << std::endl << "----------| Test de la fonction guardGate |---------------" << std::endl;
    for (int i = 0; i < 10; i++)
        a.guardGate();

    std::cout << std::endl << "----------| Destruction des ClapTrap |---------------" << std::endl;
    return (0);
}