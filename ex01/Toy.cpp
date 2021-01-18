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

Toy::Toy(const Toy& toy) :
m_name(toy.m_name),
m_type(toy.m_type),
m_picture(toy.m_picture)
{}

Toy::~Toy()
{}

Toy& Toy::operator=(const Toy& toy)
{
    m_name = toy.m_name;
    m_type = toy.m_type;
    m_picture = toy.m_picture;
}

const std::string& Toy::getAscii() const
{
    return (m_picture.getAscii());
}

bool Toy::setAscii(const std::string& filename)
{
    return (m_picture.getPictureFromFile(filename));
}