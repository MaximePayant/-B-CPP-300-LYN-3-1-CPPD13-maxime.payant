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
    if (m_picture.getPictureFromFile(filename))
        return (true);
    m_error.m_what = "bad new illustration";
    m_error.m_where = "setAscii";
    m_error.type = Error::PICTURE;
    return (false);
}

bool Toy::speak(const std::string& statement)
{
    std::cout << m_name << " \"" << statement << "\"" << std::endl;
    return (true);
}

bool Toy::speak_es(const std::string& statement)
{
    std::cout << m_name << " \"" << statement << "\"" << std::endl;
    return (true);
}

Toy& Toy::operator<<(const std::string& str)
{
    m_picture.m_data = str;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Toy& toy)
{
    os << toy.getName() << std::endl << toy.getAscii() << std::endl;
    return (os);
}

Toy::Error Toy::getLastError() const
{
    return (m_error);
}