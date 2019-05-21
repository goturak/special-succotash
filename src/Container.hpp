//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_CONTAINER_HPP
#define SPECIAL_SUCCOTASH_CONTAINER_HPP

#include <list>
#include <algorithm>
#include "Person.hpp"

using namespace std;

class Container {
private:
    list<Person*>* persons;

protected:
    Container() : persons(new list<Person*>){}
public:
    list<Person*>* getPerson();

    void push_back(Person *p);

    Person* pop(Person *p);

    Person* find(string name);

    bool contains(Person *p);


};


#endif //SPECIAL_SUCCOTASH_CONTAINER_HPP
