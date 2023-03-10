#include <iostream>
using namespace std;

main()
{
    int size, swap;
    cout << "enter size of the array: ";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number: ";
        cin >> number[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int idx = i + 1; idx < size; idx++)
        {
            if (number[idx] < number[i])
            {
                swap = number[idx];
                number[idx] = number[i];
                number[i] = swap;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << number[i] << "  ";
    }
    
}