#include <iostream>
using namespace std;

main()
{
    int size;
    int a = 0;
    int sum = 0;

    cout << "enter array size: ";
    cin >> size;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number: ";
        cin >> number[i];
    }
    for (int i = 0; i < size; i = i + 3)
    {
        a = number[i] * number[i + 1] * number[i + 2];
        sum = sum + a;
    }
    cout << "total area is equal to " << sum << endl;
    
}