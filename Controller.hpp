//
// Created by guillaume on 21/05/19.
//

#ifndef SPECIAL_SUCCOTASH_CONTROLLER_HPP
#define SPECIAL_SUCCOTASH_CONTROLLER_HPP

#include <list>
#include "Person.hpp"
#include "Bank.hpp"
#include "Father.hpp"
#include "Mother.hpp"
#include "Son.hpp"
#include "Daughter.hpp"
#include "Policeman.hpp"
#include "Robber.hpp"
#include "Boat.hpp"

using namespace std;

class Controller {
private:
    Bank bankLeft;
    Bank bankRight;
    Boat boat;
    int turn;


public:
    Controller() : bankRight(), bankLeft(), boat(&bankLeft, &bankRight), turn(0){
        bankLeft.push_back(new Father("pere"));
        bankLeft.push_back(new Mother("mere"));
        bankLeft.push_back(new Son("paul"));
        bankLeft.push_back(new Son("pierre"));
        bankLeft.push_back(new Daughter("julie"));
        bankLeft.push_back(new Daughter("jeanne"));
        bankLeft.push_back(new Policeman("policier"));
        bankLeft.push_back(new Robber("voleur"));
        showMenu();
        display();

    }

    void showMenu();

    void display();

    bool nextTurn();
private:
    void reset();

};


#endif //SPECIAL_SUCCOTASH_CONTROLLER_HPP
