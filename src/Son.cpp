//
// Created by guillaume on 21/05/19.
//
#include "Son.hpp"

bool Son::validation(list<Person*> *others){
    bool mother = false;
    bool noFather = true;
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Father*>(*it) != NULL){
            noFather = false;
        }
        if(dynamic_cast<Mother*>(*it) != NULL){
            mother = true;
        }
    }
    if(noFather && mother){
        cout << "### garcon avec sa mère sans son pere" << endl << endl;
        return false;
    } else {
        return true;
    }
}