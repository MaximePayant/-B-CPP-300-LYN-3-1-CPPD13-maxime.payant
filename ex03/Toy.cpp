/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Toy.cpp
*/

#include "Toy.hpp"

Toy::Toy() :
m_name("toy"),
m_type(BASIC_TOY),
m_picture()
{}

Toy::Toy(ToyType type, const std::string& name, const std::string& filename) :
m_name(name),
m_type(type),
m_picture(filename)
{}

Toy::~Toy()
{}

const std::string& Toy::getAscii() const
{
    return (m_picture.getAscii());
}

bool Toy::setAscii(const std::string& filename)
{
    return (m_picture.getPictureFromFile(filename));
}

void Toy::speak(const std::string& statement) const
{
    std::cout << m_name << " \"" << statement << "\"" << std::endl;
}