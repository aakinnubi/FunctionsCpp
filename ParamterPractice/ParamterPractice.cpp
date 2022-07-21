// ParamterPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <format>
using namespace std;

string Greetings(string Firstname = "John", string LastName = "Doe", int age = 23, string location ="Santa Monica");
bool GuessIsPrime(int number);
bool GuessIsEven(int number);
int main()
{
    cout << "Hello World!\n";
    cout << Greetings() << endl;
    cout << Greetings("Abiola", "Akinnubi", 34, "Little Rock") << endl;
    int number;
    cout << "Guess if number is ven or prime by entering number: " << endl;
    cin >> number;
    cout << "Your guess for prime is " << boolalpha << GuessIsPrime(number) << " While we also test for even on yoru behalf to be " << boolalpha << GuessIsEven(number) << endl;

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

string Greetings(string Firstname, string LastName, int age, string location)
{
    string message = format("Hi there {} {}, you are {} and you currently reside at {} . Happy to meet you!", Firstname, LastName, age, location);
    //string message2 = "Hi there " + Firstname + " " + LastName + " " + std::to_string(age) + " " + location;
    return message;
}
bool GuessIsPrime(int number) {
    if (number % 2 == 0) return false;
    return true;
}
bool GuessIsEven(int number) {
    return (number % 2 == 0);
}