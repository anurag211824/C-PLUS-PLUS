#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter the age of the person:";
    cin >> age;
    if (age < 12)
    {
        cout << "child";
    }
    else if (age > 12 && age < 18)
    {
        cout << "teenager";
    }
    else
    {
        cout << "adult";
    }

    return 0;
}