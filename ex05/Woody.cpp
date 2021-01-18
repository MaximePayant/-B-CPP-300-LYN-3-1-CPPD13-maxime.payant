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

bool Woody::speak_es(const std::string& statement)
{
    (void)statement;
    m_error.m_what = "wrong mode";
    m_error.m_where = "speak_es";
    m_error.type = Error::SPEAK;
    return (false);
}