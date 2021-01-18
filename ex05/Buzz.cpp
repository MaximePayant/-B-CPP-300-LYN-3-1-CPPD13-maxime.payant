/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Buzz.cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string& name, const std::string& filename) :
Toy(BUZZ, name, filename)
{}

void Buzz::speak(const std::string& statement) const
{
    std::cout << "BUZZ: " << m_name << " \"" << statement << "\"" << std::endl;
}

bool Buzz::speak_es(const std::string& statement)
{
    std::cout << "BUZZ: " << m_name << " senorita \"" << statement << "\" senorita" << std::endl;
    return (true);
}