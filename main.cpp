#include <iostream>

using namespace std;

int main()
{
// declare vars

    int counter, numToAdd1, numToAdd2;

    counter = 1;
// ask the Q's

    while( counter < 4)
    {
    cout << "Allan,\n" << "enter a number between 1 and 20: " <<  endl;
    cin >> numToAdd1;
    cout << "\nokay, do it again: " <<  endl;
    cin >> numToAdd2;
    cout << "\n\n" << numToAdd1 << " + " << numToAdd2 << " equals = " << numToAdd1 + numToAdd2;
    cout << "\n";

    counter = counter + 1;
    }


    return 0;
}

