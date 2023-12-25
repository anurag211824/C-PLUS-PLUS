// call by refrence example
#include <iostream>

using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a=2;
    int b=3;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
}