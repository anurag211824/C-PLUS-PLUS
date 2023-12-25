// write a program to find wheather the given output is vowel or consonants
#include <iostream>

using namespace std;

int main()
{
    char alphabet;
    cout << "ente the alphabet:";
    cin >> alphabet;
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << "vowels";
    }
    else
    {
        cout << "consonants";
    }
    return 0;
}