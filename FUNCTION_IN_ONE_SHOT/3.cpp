// Given the age of a person, write a function to check if the person is eligible to vote or not.
#include <iostream>

using namespace std;
void vote(int age)
{
    if (age >= 18)
    {
        cout << "eligible to vote";
    }
    else
    {
        cout << "not eligible to vote";
    }
}

int main()
{
    int age;
    cout<<"enter the age:";
    cin>>age;
    vote(age);
    return 0;
}