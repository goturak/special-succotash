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
    list<Person*>* getPerson(){
        return persons;
    }

    void push_back(Person *p){
        persons->push_back(p);
    }

    Person* pop(Person *p){
        list<Person*>::iterator result = std::find(persons->begin(), persons->end(), p);
        if(result == persons->end()){
            return nullptr;
        }
        persons->remove(p);
        return *result;
    }

    Person* find(string name){
        for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
            if((*it)->toString()== name){
                return *it;
            }
        }
        return nullptr;
    }

    bool contains(string name){
        for(list<Person*>::iterator it = persons->begin(); it != persons->end(); it++){
            if((*it)->toString() == name){
                return true;
            }
        }
        return false;
    }


};


#endif //SPECIAL_SUCCOTASH_CONTAINER_HPP
