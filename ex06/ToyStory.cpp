/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** ToyStory.cpp
*/

#include "ToyStory.hpp"

static void printError(Toy::Error error)
{
    std::cout << error.where() << ": " << error.what() << std::endl;
}

static bool dispDialog(Toy &toy, bool (Toy::*func)(const std::string& param), const std::string& dialog)
{
    bool check = true;

    if (dialog.find_first_of("picture:", 0) == 0) {
        check = toy.setAscii(dialog.substr(8, dialog.size() - 8));
        if (check)
            std::cout << toy.getAscii() << std::endl;
    }
    else
        check = (toy.*func)(dialog);
    if (check == false)
        printError(toy.getLastError());
    return (check);
}

void ToyStory::tellMeAStory(const std::string& filename
                 , Toy &toy1
                 , bool (Toy::*func1)(const std::string& param)
                 , Toy &toy2
                 , bool (Toy::*func2)(const std::string& param))
{
    std::ifstream file(filename);
    std::string buffer;

    if (!file) {
        std::cout << "Bad Story" << std::endl;
        return;
    }
    std::cout << toy1.getAscii() << std::endl
              << toy2.getAscii() << std::endl;
    if (file) {
        for (bool one = true; std::getline(file, buffer); one = !one)
            if (!(one ? dispDialog(toy1, func1, buffer) : dispDialog(toy2, func2, buffer)))
                break;
    }
}