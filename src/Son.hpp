//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_SON_HPP
#define SPECIAL_SUCCOTASH_SON_HPP

#include <list>
#include "Children.hpp"
#include "Father.hpp"
#include "Mother.hpp"
#include <iostream>

class Son : public Children{
public:
    Son(string name) : Children(name){}

    bool validation(list<Person*> *others);

};

#endif //SPECIAL_SUCCOTASH_SON_HPP
