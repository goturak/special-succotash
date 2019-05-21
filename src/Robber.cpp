//
// Created by guillaume on 21/05/19.
//
#include "Robber.hpp"

bool Robber::validation(list<Person*> *others){
    bool familyMember = false;
    bool noPoliceman = true;
    for(list<Person*>::iterator it = others->begin(); it != others->end(); it++){
        if(dynamic_cast<Policeman*>(*it) != NULL){
            noPoliceman = false;
        }
        if(dynamic_cast<FamilyMember*>(*it) != NULL){
            familyMember = true;
        }
    }
    if(noPoliceman && familyMember){
        cout << "### voleur avec un membre de la famille sans le policier" << endl << endl;
        return false;
    } else {
        return true;
    }
}