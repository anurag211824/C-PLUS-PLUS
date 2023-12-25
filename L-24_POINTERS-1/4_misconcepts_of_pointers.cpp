#include <iostream>

using namespace std;

int main()
{
    int x = 18;
    int y = 2;
    int *ptr=&x;
    // ptr =5; we cant do this as ptr only stores address nothing else

    // *ptr=&y; thid does not work as we can not store address in an int bucket
    cout<<"address of x:"<<&x<<endl;
    cout<<"address stored inside ptr:" <<ptr<<endl;
    cout<<"addrerss of ptr itself:"<<&ptr<<endl;
    return 0;
}