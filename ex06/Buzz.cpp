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

bool Buzz::speak(const std::string& statement)
{
    std::cout << "BUZZ: " << m_name << " \"" << statement << "\"" << std::endl;
    return (true);
}

bool Buzz::speak_es(const std::string& statement)
{
    std::cout << "BUZZ: " << m_name << " senorita \"" << statement << "\" senorita" << std::endl;
    return (true);
}