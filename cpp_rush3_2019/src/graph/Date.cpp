/*
** EPITECH PROJECT, 2020
** Date
** File description:
** cpp
*/

#include "Date.hpp"

Date::Date()
{

}

Date::~Date() {

}

sf::Text Date::getYear() {
    return _year;
}

sf::Text Date::getMonth() {
    return _month;
}

sf::Text Date::getDay() {
    return _day;
}

sf::Text Date::getDate() {
    return _date;
}

sf::Text Date::getTime() {
    return _time;
}

sf::Text Date::getModuleName() {
    return ModuleName;
}

void Date::setModuleName(std::string nameModule, sf::Vector2f pos) {
    font.loadFromFile("src/graph/res/Technoma.otf");
    ModuleName.setFont(font);
    ModuleName.setString(nameModule);
    ModuleName.setPosition(pos);
    ModuleName.setCharacterSize(19);
    ModuleName.setFillColor(sf::Color::Red);
    ModuleName.setStyle(sf::Text::Bold);
}

void Date::setYear(std::string year, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _year.setFont(font);
    _year.setString(year);
    _year.setPosition(pos);
    _year.setCharacterSize(16);
    _year.setFillColor(sf::Color::Black);
    _year.setStyle(sf::Text::Bold);
}

void Date::setMonth(std::string month, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _month.setFont(font);
    _month.setString(month);
    _month.setPosition(pos);
    _month.setCharacterSize(16);
    _month.setFillColor(sf::Color::Black);
    _month.setStyle(sf::Text::Bold);
}

void Date::setDay(std::string day, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _day.setFont(font);
    _day.setString(day);
    _day.setPosition(pos);
    _day.setCharacterSize(16);
    _day.setFillColor(sf::Color::Black);
    _day.setStyle(sf::Text::Bold);
}

void Date::setDate(std::string date, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _date.setFont(font);
    _date.setString(date);
    _date.setPosition(pos);
    _date.setCharacterSize(16);
    _date.setFillColor(sf::Color::Black);
    _date.setStyle(sf::Text::Bold);
}

void Date::setTime(std::string time, sf::Vector2f pos)
{
    font.loadFromFile("src/graph/res/Technoma.otf");
    _time.setFont(font);
    _time.setString(time);
    _time.setPosition(pos);
    _time.setCharacterSize(16);
    _time.setFillColor(sf::Color::Black);
    _time.setStyle(sf::Text::Bold);
}