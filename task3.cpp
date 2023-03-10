

#include <iostream>
using namespace std;

main()
{
    int size;
    int miles;
    int count = 0;
    cout << "enter the size of array: ";
    cin >> size;
    int number1;

    int progress[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number to store in an array: ";
        cin >> progress[i];
    }
    for (int i = 1; i < size - 1; i++)
    {
        number1 = progress[i];
        if (number1 > progress[i + 1] && number1 > progress[i - 1])
        {
            cout << number1 << " ";
        }
    }
}
