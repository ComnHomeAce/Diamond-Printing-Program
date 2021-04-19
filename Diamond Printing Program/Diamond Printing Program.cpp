//This program prints a 9 x 9 diamond pattern

#include <iostream>
using namespace std;

int main()
{
    //size = diamond size
    //space = spaces before asterisks
    int size = 9;
    int space = size / 2 + 1;

    cout << "This program prints a 9 x 9 diamond pattern\n\n";

    //Builds top half of diamond
    for (int i = 0; i < size; i+=2)
    {
        //Print spaces
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //Print asterisks
        for (int k = 0; k < i-1; k++)
        {
            cout << "*";
        }
        cout << endl;
        space--;
    }

    //Builds bottom half of diamond
    for (int i = size; i > 0; i-=2)
    {
        //Print spaces
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        //Print asterisks
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
        space++;
    }
}
