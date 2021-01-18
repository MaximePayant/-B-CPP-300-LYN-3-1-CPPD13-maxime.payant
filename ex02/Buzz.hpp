/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Buzz.hpp
*/

#ifndef __BUZZ_H__
#define __BUZZ_H__

#include "Toy.hpp"

class Buzz :
    public Toy
{

    public:
        Buzz(const std::string& name, const std::string& filename = "woody.txt");
        ~Buzz();

};

#endif // __BUZZ_H__