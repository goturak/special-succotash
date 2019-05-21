//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_PERSON_HPP
#define SPECIAL_SUCCOTASH_PERSON_HPP

#include <string>

using namespace std;

class Person {
private:
    string name;

protected:
    Person(string name){
        this->name = name;
    }

public:
    virtual bool canDrive() = 0;

    string toString() const{
        return name;
    }

    virtual bool validation(list<Person*> *others) = 0;

    friend bool operator==(const Person &a, const Person &b){
        return a.toString() == b.toString();
    }

    friend bool operator!=(const Person &a, const Person &b){
        return !(a.toString() == b.toString());
    }
};


#endif //SPECIAL_SUCCOTASH_PERSON_HPP
