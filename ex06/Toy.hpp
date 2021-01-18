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

        virtual bool speak(const std::string& statement);
        virtual bool speak_es(const std::string& statement);

        Toy& operator<<(const std::string& str);

        class Error
        {

            public:
                std::string m_what;
                std::string m_where;
                enum ErrorType {UNKNOWN, PICTURE, SPEAK} type;

                Error() : m_what(""), m_where(""), type(UNKNOWN) {};

                const std::string& what() const   { return (m_what);  };
                const std::string& where() const  { return (m_where); };
        } m_error;

        Error getLastError() const;

    protected:
        std::string m_name;
        ToyType m_type;
        Picture m_picture;

};

std::ostream& operator<<(std::ostream& os, const Toy& toy);

#endif // TOY_HPP