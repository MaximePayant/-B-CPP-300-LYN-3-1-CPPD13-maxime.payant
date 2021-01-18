/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Woody.hpp
*/

#ifndef WOODY_HPP
#define WOODY_HPP

#include "Toy.hpp"

class Woody :
    public Toy
{

    public:
        Woody(const std::string& name, const std::string& filename = "woody.txt");
        ~Woody();

};

Woody::Woody(const std::string& name, const std::string& filename) :
Toy(WOODY, name, filename)
{}

Woody::~Woody()
{}

#endif // WOODY_HPP