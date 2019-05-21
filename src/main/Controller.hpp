/**
 * @authors Guillaume Vetter & Luca Reis de Carvalho
 */

#ifndef SPECIAL_SUCCOTASH_CONTROLLER_HPP
#define SPECIAL_SUCCOTASH_CONTROLLER_HPP

#include <list>
#include "../Person/Person.hpp"
#include "../Container/Bank.hpp"
#include "../Person/Father.hpp"
#include "../Person/Mother.hpp"
#include "../Person/Son.hpp"
#include "../Person/Daughter.hpp"
#include "../Person/Policeman.hpp"
#include "../Person/Robber.hpp"
#include "../Container/Boat.hpp"

using namespace std;

/**
 * Class representing a controller, used to control the boat and manage the user's input.
 */
class Controller {
private:
    //Both bank, and the boat.
    Bank bankLeft;
    Bank bankRight;
    Boat boat;
    //This counter is used to count the number of turns the user made.
    int turn;

public:
    /**
     * Constructor of the controller, initializing every person of the game and showing the menu and displaying
     * the initial state of the game.
     */
    Controller() : bankRight(), bankLeft(), boat(&bankLeft, &bankRight), turn(-1){
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

    /**
     * Method used to show the list of inputs possible.
     */
    void showMenu();

    /**
     * Method used to display the state of the game
     */
    void display();

    /**
     * Method used to take the next turn.
     * @return a boolean set to true if the game goes on, false if the user decided to quit
     */
    bool nextTurn();

private:
    /**
     * Helper method used to reset the state of the game.
     */
    void reset();

    /**
     * Method used to validate the user's input
     * @return true if the input is valid, false otherwise.
     */
    bool validate();

};


#endif //SPECIAL_SUCCOTASH_CONTROLLER_HPP
