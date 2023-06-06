/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:32:43 by afavre            #+#    #+#             */
/*   Updated: 2023/05/30 10:32:46 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../include/ClapTrap.hpp>

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_point = 10;
    this->energy = 10;
    this->damage = 0;
    std::cout << name << " fait son entrée !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    if (this != &copy)
    {
        *this = copy;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " nous fait ces adieux !" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
        this->name = copy.name;
        this->hit_point = copy.hit_point;
        this->energy = copy.energy;
        this->damage = copy.damage;
        return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->energy <= 0)
        std::cout << name << " est a court d'energie, pauvre petit bouchou ! faut le laisser ce reposer !" << std::endl;
    else
    {
        std::cout << name << " attaque " << target << " et lui inflige " << damage << " degats de feu !" << std::endl;
        this->energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point > 0)
    {
        std::cout << name << " a prit " << amount << " degat de feu !" << std::endl;
        if ((this->hit_point -= amount) <= 0)
            std::cout << name << " part dans un sommeil sans fin !" << std::endl;
    }
    else if (this->hit_point <= 0)
    {
        std::cout << "cela ne sert a rien de s'acharner sur ce pauvre " << name << " il a deja rendu son dernier souffle plus tot !" << std::endl;
        this->hit_point = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0)
    {
        if (this->hit_point < 10)
        {
            std::cout << name << " ce couvre d'un halo vert et recupere " << amount << " point de vie !" << std::endl;
            this->hit_point += amount;
            if (this->hit_point > 10)
                this->hit_point = 10;
            this->energy--;
        }
        else if (this->hit_point == 10)
            std::cout << name << " a deja tout ces points de vie !" << std::endl;
    }
    else
    {
        std::cout << name << " est a court d'energie, pauvre petit bouchou ! faut le laisser ce reposer !" << std::endl;
    }
}

std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getHitPoint()
{
    return (this->hit_point);
}