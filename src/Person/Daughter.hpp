/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_DAUGHTER_HPP
#define SPECIAL_SUCCOTASH_DAUGHTER_HPP

#include <list>
#include "Children.hpp"
#include "Father.hpp"
#include "Mother.hpp"
#include <iostream>

class Daughter : public Children{
public:
    Daughter(string name) : Children(name){}

    bool validation(list<Person*> *others);
};

#endif //SPECIAL_SUCCOTASH_DAUGHTER_HPP
