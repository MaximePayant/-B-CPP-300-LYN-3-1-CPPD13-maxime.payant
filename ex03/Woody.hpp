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

        void speak(const std::string& statement) const override;

};

#endif // WOODY_HPP