#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    cout << "enter the array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // for loop
    cout << "for loop" << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    // for each loop
    cout << "for each loop" << endl;
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;
    // while loop
    cout << "while loop" << endl;
    int index = 0;
    while (index < 5)
    {
        cout << arr[index] << " ";
        index++;
    }
    cout << endl;
    char vowels[5];

    cout << "enter the array:";
    for (int i = 0; i < 5; i++)
    {
        cin >> vowels[i];
    }
    for (char &ele : vowels)
    {
        cout << ele << " ";
    }
    return 0;
}