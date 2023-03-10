#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;

    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number: ";
        cin >> number[i];
    }

    int cycle;
    cout<<"enter repeating cycle: ";
    cin>>cycle;

    for (int i = 0; i < number[cycle]; i++)
    {
       if (/* condition */)
       {
        /* code */
       }
       
    }
    
}