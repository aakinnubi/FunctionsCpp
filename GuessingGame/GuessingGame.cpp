// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;
bool GuessChecker(int inputGuess);
int computerGuess = rand();
int main()
{
    std::cout << "Hello World!\n" << endl;

    int userGuess;
    do {
        cout << "Enter a number to guess" << endl;
        cin >> userGuess;
    } while (!GuessChecker(userGuess));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

bool GuessChecker(int inputGuess)
{
    //cout << "Computer guess is "<<computerGuess << "Your guess is "<<inputGuess << endl;
    if (computerGuess == inputGuess) return true;
    return false;
}
