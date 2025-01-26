#include "game.h"

Game::Game(int mn) : maxNumber(mn), numOfGuesses(0)
{
    cout << "Game constructor: object initialized with 40 as a maximum number" << endl;
    maxNumber = mn;
    cout << "Maxnum = " << maxNumber << endl;

}

Game::~Game()
{
    cout << "Game destructor: object cleared form stack memory" << endl;

}

void Game::play()
{

    int randomNumber = 0;
    int playerGuess = 0;

    // arvotaan satunnainen luku
    // satunnaisluku = 17;

    srand(time(NULL));
    randomNumber = rand() % maxNumber;

    while (playerGuess != randomNumber) {

        // kysytään pelaajalta arvaus

        cout << "Anna luku: " << endl;
        cin >> playerGuess;
        numOfGuesses++; // pelaaja teki arvauksen lkm +1

        // tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // kerrotaan tarkistuksen tulos
        // jos vastaus meni väärin, palataan kohtaan 2

        // arvaus on pienempi

        if (playerGuess < randomNumber) {
            cout << "Luku on suurempi!" << endl;
        }

        // arvaus on suurempi

        if (playerGuess > randomNumber) {
            cout << "Luku on pienempi!" << endl;
        }

    } // päättää while-silmukan

    cout << "Oikein arvattu!" << endl;


    printGameResult();
}

void Game::printGameResult()
{
    cout << "Number of guesses: "
         << numOfGuesses
         << endl;
}
