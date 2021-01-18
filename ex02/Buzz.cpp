/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Buzz.cpp
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string& name, const std::string& filename = "woody.txt") :
Toy(BUZZ, name, filename)
{}

Buzz::~Buzz()
{}