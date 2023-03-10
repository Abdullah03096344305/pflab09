#include <iostream>
using namespace std;

main()
{
    int size;
    int count = 0;
    string temp;
    char letter;
    cout << "enter no of words to store: ";
    cin >> size;
    string word[size];
    for (int index = 0; index < size; index++)
    {
        cout << "enter word: ";
        cin >> word[index];
    }
    cout << "enter a character: ";
    cin >> letter;
    for (int index = 0; index < size; index++)
    {
        temp = word[index];
        int i = 0;
        while (temp[i] != '\0')
        {
            if (temp[i] == letter)
            {
                count++;
            }
            i++;
        }
    }
    if (count != 0)
    {
        cout << "the word repeat " << count << "times" << endl;
    }
    else if (count == 0)
    {
        cout << "no match ";
    }
}
