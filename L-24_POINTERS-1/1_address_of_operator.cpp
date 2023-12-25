#include <iostream>

using namespace std;

int main()
{
    int x = 18;
    float y = 4.5;
    cout << &x << " " << &y << endl;
    // create a pointer that can store address of x
    // As x is an integer variable, so we need a pointer
    // that can store address of integer type
    int *ptr1 = &x;
    // create a pointer that can store address of y
    // As y is an float variable, so we need a pointer
    // that can store address of variable type
    float *ptr2 = &y;
    cout << "the address stored inside ptr1:" << ptr1 << endl;
    cout << "the value present at the address stored in ptr1:" << *ptr1 << endl; //*ptr1 is called derefrencing operatror
    cout << "the address stored inside ptr2:" << ptr2 << endl;
    cout << "the value present at the address stored in ptr2:" << *ptr2 << endl; //*ptr2 is called derefrencing operatror

    // ___________________

    x = 23;
    // the bucket x updated the value from 18 -> 23
    // but ptr is still pointing to same bucket
    // now if we derefrence ptr ,we will get 23

    cout << "new updated value of x:" << x << endl;
    cout << "ptr1 still pointing to same memory which has 23 instead of 18:" << *ptr1<<endl;
    *ptr1=50;
    cout<<"new value  pointed by ptr1:"<<*ptr1<<endl;
    cout<<"anurag_kumar"<<endl;

    return 0;
}