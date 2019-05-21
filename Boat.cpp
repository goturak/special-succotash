//
// Created by guillaume on 21/05/19.
//

#include <iostream>
#include "Boat.hpp"
using namespace std;

bool Boat::hasDriver() {
    list<Person*>* p = getPerson();
    for(list<Person*>::iterator it = p->begin(); it != p->end(); it++){
        if((*it)->canDrive()){
            return true;
        }
    }
    return false;
}

bool Boat::isLeft() {
    return currentBank == left;
}

bool Boat::move() {
    if(hasDriver()) {
        if (left == currentBank) {
            currentBank = right;
        } else {
            currentBank = left;
        }
        return true;
    } else {
        return false;
    }
}

Bank* Boat::getCurrentBank(){
    return currentBank;
}

bool Boat::embark(Person *p) {
    if(getPerson()->size() < 2){
        push_back(p);
        currentBank->pop(p);
    } else {
        return false;
    }
    return true;
}

bool Boat::debark(Person *p) {

}