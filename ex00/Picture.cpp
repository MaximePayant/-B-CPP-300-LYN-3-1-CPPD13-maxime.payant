/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Picture.cpp
*/

#include "Picture.hpp"

Picture::Picture() :
m_data("")
{}

Picture::Picture(const std::string &file)
{
    std::ifstream fileStream(file);
    std::stringstream buffer;

    printf("Create with <%s> filename\n", file.c_str());
    if (file.empty())
        m_data = "";
    else if (fileStream) {
        buffer << fileStream.rdbuf();
        m_data = buffer.str();
        fileStream.close();
    }
    else
        m_data = "ERROR";
}

Picture::~Picture()
{
    m_data.clear();
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream fileStream(file);
    std::stringstream buffer;

    if (fileStream) {
        m_data.clear();
        buffer << fileStream.rdbuf();
        m_data = buffer.str();
        fileStream.close();
    }
    else {
        m_data = "ERROR";
        return (false);
    }
    return (true);
}

const std::string& Picture::getAscii() const
{
    return (m_data);
}