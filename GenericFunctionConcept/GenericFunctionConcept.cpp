// GenericFunctionConcept.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
template<typename Type>
Type GetSum(Type number, int count = 1);
//template<typename Type1>
int main()
{
    int arrays[] = { 1,4,7,4,8,4 };
    cout << "The elements are: ";

    for (auto var : arrays)
    {
        std::cout << "running sum of " << var << " is " << GetSum(var, 10) << endl;
    }
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

template<typename Type>
Type GetSum(Type number, int count)
{
    if (count <= 1) return number;
    return number+GetSum(number,count-1);
}
