/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#include <iostream>
#include "Controller.hpp"

using namespace std;

void Controller::showMenu() {
    //Simple displaying of the menu.
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
    //We check if the boat is left or right and adapt the display accordingly.
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
    //We begin by incrementing the turn.
    turn++;
    cout << to_string(turn) + "> ";
    //We take the first character
    string command;
    getline(cin, command);
    char c = command.front();
    command = command.erase(0, 1);
    //If the command is not a letter, it is not valid.
    if (command.front() != ' ' && !command.empty()) {
        cout << "### commande invalide" << endl << endl;
    } else {
        //We switch on the char representing the command
        switch (c) {
            case 'p':
                //We display if we read 'p'
                display();
                break;

            case 'e': {
                //We parse the rest of the command and check of the argument is a person on the bank.
                command.erase(0, 1);
                Person *p = boat.getCurrentBank()->find(command);
                if (boat.embark(p)) {
                    //If the boarding succeed, we try to validate the rules.
                    if(validate()){
                        //If it is the case, we display the new state
                        display();
                    } else {
                        //Otherwise we reverse the change
                        boat.debark(p);
                    }
                } else {
                    //We display an error if the boarding fails.
                    cout << "### cette personne ne peux pas embarquer" << endl << endl;
                }
                break;
            }

            case 'd': {
                //As with embark, we parse the rest of the command.
                command.erase(0, 1);
                Person *p = boat.find(command);
                if (boat.debark(p)) {
                    //If it succeed we display. We choose not to validate on debark, because the game can not be done if
                    //this is the case.
                    display();
                } else {
                    //We display an error if debark fails.
                    cout << "### cette personne ne peut pas debarquer" << endl << endl;
                }
                break;
            }

            case 'm':
                if (boat.move()) {
                    //If the movement succeed we display the result.
                    display();
                } else {
                    //If not, we display an error
                    cout << "### pas de conducteur de bateau" << endl << endl;
                }
                break;

            case 'r':
                reset();
                display();
                break;

            case 'q':
                //We return false so the main loop understand it must stop
                return false;

            case 'h':
                showMenu();
                break;

            default:
                //Else, we display that the command is invalid.
                cout << "### commande invalide" << endl << endl;
        }
    }
}

bool Controller::validate() {
    //We check if every person on the current bank respect the rules.
    for(list<Person*>::iterator it = boat.getCurrentBank()->getPerson()->begin(); it != boat.getCurrentBank()->getPerson()->end(); it++){
        if(!(*it)->validation(boat.getCurrentBank()->getPerson())){
            return false;
        }
    }
    //We check if every person on the boat respect the rules.
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