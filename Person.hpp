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

public:
    Person(string name){
        this->name = name;
    }

    bool canDrive(){
        return true;
    }
};


#endif //SPECIAL_SUCCOTASH_PERSON_HPP
