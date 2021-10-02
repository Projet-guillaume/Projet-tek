/*
** EPITECH PROJECT, 2020
** Date
** File description:
** hpp
*/

#ifndef DATE_HPP_
#define DATE_HPP_

#include <SFML/Window.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics.hpp>

class Date {
public:
    Date();
    ~Date();
    sf::Text getYear();
    sf::Text getMonth();
    sf::Text getDay();
    sf::Text getDate();
    sf::Text getTime();
    sf::Text getModuleName();
    void setModuleName(std::string nameModule, sf::Vector2f pos);
    void setYear(std::string year, sf::Vector2f pos);
    void setMonth(std::string month, sf::Vector2f pos);
    void setDay(std::string day, sf::Vector2f pos);
    void setDate(std::string date, sf::Vector2f pos);
    void setTime(std::string time, sf::Vector2f pos);

private:
    sf::Font font;
    sf::Text ModuleName;
    sf::Text _date;
    sf::Text _day;
    sf::Text _month;
    sf::Text _time;
    sf::Text _year;
};

#endif