/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Woody.cpp
*/

#include "Woody.hpp"

Woody::Woody(const std::string& name, const std::string& filename) :
Toy(WOODY, name, filename)
{}

void Woody::speak(const std::string& statement) const
{
    std::cout << "WOODY: " << m_name << " \"" << statement << "\"" << std::endl;
}