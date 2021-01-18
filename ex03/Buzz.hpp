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
        Buzz(const std::string& name, const std::string& filename = "buzz.txt");

        void speak(const std::string& statement) const override;

};

#endif // __BUZZ_H__