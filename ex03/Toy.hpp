/*
** EPITECH PROJECT, 2021
** CPP_SEMINAR
** File description:
** Toy.hpp
*/

#ifndef TOY_HPP
#define TOY_HPP

#include "Picture.hpp"

class Toy
{

    public:
        typedef enum {BASIC_TOY, ALIEN, BUZZ, WOODY} ToyType;

        Toy();
        Toy(ToyType type, const std::string& name, const std::string& filename);
        ~Toy();

        const std::string& getName() const { return (m_name); };
        ToyType getType() const            { return (m_type); };
        const std::string& getAscii() const;

        void setName(const std::string& name) { m_name = name;   };
        bool setAscii(const std::string& filename);

        virtual void speak(const std::string& statement) const;

    protected:
        std::string m_name;
        ToyType m_type;
        Picture m_picture;

};

#endif // TOY_HPP