//
// Created by guillaume on 21/05/19.
//

#include <iostream>
#include "Controller.hpp"

using namespace std;

void Controller::showMenu() {
    cout << "p\t\t: afficher" << endl;
    cout << "e <nom>\t: embarquer <nom>" << endl;
    cout << "d <nom>\t: debarquer <nom>" << endl;
    cout << "m\t\t: deplacer bateau" << endl;
    cout << "r\t\t: reinitialiser" << endl;
    cout << "q\t\t: quitter" << endl;
    cout << "h\t\t: menu" << endl;

}

void Controller::display() {
    cout << "----------------------------------------------------------" << endl;
    cout << "Gauche: ";
    for (list<Person *>::iterator it = bankLeft.getPerson()->begin(); it != bankLeft.getPerson()->end(); it++) {
        cout << (*it)->toString() + " ";
    }
    cout << endl;

    if (boat.isLeft()) {
        cout << "----------------------------------------------------------" << endl;
        cout << "Bateau: < ";
        for (list<Person *>::iterator it = boat.getPerson()->begin(); it != boat.getPerson()->end(); it++) {
            cout << (*it)->toString() + " ";
        }
        cout << ">";
        cout << endl;
        cout << "===========================================================" << endl;
        cout << endl;
    } else {
        cout << "----------------------------------------------------------" << endl;
        cout << endl;
        cout << "===========================================================" << endl;
        cout << "Bateau: < ";
        for (list<Person *>::iterator it = boat.getPerson()->begin(); it != boat.getPerson()->end(); it++) {
            cout << (*it)->toString() + " ";
        }
        cout << ">";
        cout << endl;
    }

    cout << "----------------------------------------------------------" << endl;
    cout << "Droite: ";
    for (list<Person *>::iterator it = bankRight.getPerson()->begin(); it != bankRight.getPerson()->end(); it++) {
        cout << (*it)->toString() + " ";
    }
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
}

bool Controller::nextTurn() {
    turn++;
    cout << to_string(turn) + "> ";
    string command;
    getline(cin, command);
    char c = command.front();
    command = command.erase(0, 1);
    if (command.front() != ' ' && !command.empty()) {
        cout << "### commande invalide" << endl << endl;
    } else {
        switch (c) {
            case 'p':
                display();
                break;
            case 'e': {
                command.erase(0, 1);
                Person *p = boat.getCurrentBank()->find(command);
                if (boat.embark(p)) {
                    if(validate()){
                        display();
                    } else {
                        boat.debark(p);
                    }
                } else {
                    cout << "### cette personne ne peux pas embarquer" << endl << endl;
                }
                break;
            }
            case 'd': {
                command.erase(0, 1);
                Person *p = boat.find(command);
                if (boat.debark(p)) {
                    if(validate()){
                        display();
                    } else {
                        boat.embark(p);
                    }

                } else {
                    cout << "### cette personne ne peut pas débarquer" << endl << endl;
                }
                break;
            }
            case 'm':
                if (boat.move()) {
                    display();
                } else {
                    cout << "### pas de conducteur de bateau" << endl << endl;
                }
                break;
            case 'r':
                reset();
                display();
                break;

            case 'q':
                return false;

            case 'h':
                showMenu();
                break;

            default:
                cout << "### commande invalide" << endl << endl;
        }
    }
}

bool Controller::validate() {
    for(list<Person*>::iterator it = boat.getCurrentBank()->getPerson()->begin(); it != boat.getCurrentBank()->getPerson()->end(); it++){
        if(!(*it)->validation(boat.getCurrentBank()->getPerson())){
            return false;
        }
    }
    for(list<Person*>::iterator it = boat.getPerson()->begin(); it != boat.getPerson()->end(); it++){
        if(!(*it)->validation(boat.getPerson())){
            return false;
        }
    }
    return true;
}

void Controller::reset() {
    bankRight = Bank();
    bankLeft = Bank();
    turn = 0;
    bankLeft.push_back(new Father("pere"));
    bankLeft.push_back(new Mother("mere"));
    bankLeft.push_back(new Son("paul"));
    bankLeft.push_back(new Son("pierre"));
    bankLeft.push_back(new Daughter("julie"));
    bankLeft.push_back(new Daughter("jeanne"));
    bankLeft.push_back(new Policeman("policier"));
    bankLeft.push_back(new Robber("voleur"));
    boat = Boat(&bankLeft, &bankRight);
}