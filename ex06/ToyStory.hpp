/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ToyStory.hpp
*/

#ifndef __TOYSTORY_H__
#define __TOYSTORY_H__

#include "Toy.hpp"

class ToyStory
{

    public:
        static void tellMeAStory(const std::string& m_filename
                                , Toy &toy1
                                , bool (Toy::*func1)(const std::string& param)
                                , Toy &toy2
                                , bool (Toy::*func2)(const std::string& param));

};

#endif // __TOYSTORY_H__