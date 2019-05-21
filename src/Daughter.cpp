//
// Created by guillaume on 21/05/19.
//

#include "Daughter.hpp"

bool Daughter::validation(list<Person*> *others){
    bool father = false;
    bool noMother = true;
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Mother*>(*it) != NULL){
            noMother = false;
        }
        if(dynamic_cast<Father*>(*it) != NULL){
            father = true;
        }
    }
    if(father && noMother){
        cout << "### fille avec son père sans sa mere" << endl << endl;
        return false;
    } else {
        return true;
    }

}