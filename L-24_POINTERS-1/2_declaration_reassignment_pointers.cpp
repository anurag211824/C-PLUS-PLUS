#include <iostream>

using namespace std;

int main()
{
    int *ptr; // only declaring the pointers
    cout << ptr << endl;
    int marks = 90;
    ptr = &marks; // re-assignment /update
    cout << ptr << "\n";
    return 0;
}