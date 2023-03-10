#include <iostream>
using namespace std;

main()
{
    int size;
    int miles;
    int count = 0;
    cout << "enter the number of weeks: ";
    cin >> size;
    int number1;

    int progress[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter miles: ";
        cin >> progress[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        number1 = progress[i];
        if (number1 < progress[i + 1])
        {
            count++;
        }
    }
    cout << "progress day are: " << count << endl;
}
