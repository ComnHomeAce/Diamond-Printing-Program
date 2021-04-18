//This program prints a 9 x 9 diamond pattern

#include <iostream>
using namespace std;

int main()
{
    //num = array

    int size = 9;
    int space = size - 1;

    cout << "This program prints a 9 x 9 diamond pattern\n\n";

    //Builds top half of diamond
    for (int i = 0; i < size; i++)
    {
        
    }
    
    while (i < 4)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
        i++;
    }
    i = 0;

    sum = accumulate(num, num + 4, 0);
    avg = sum / 4;

    while (i < 4)
    {
        if (num[i] > avg)
        {
            cnt += 1;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << "\nThe sum is " << sum << "\n";
    cout << "\nThe average is " << avg << "\n";
    cout << "\n" << cnt << " number(s) are above average.\n";
}