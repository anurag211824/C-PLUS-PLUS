#include <iostream>

using namespace std;
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

int main()
{
    int a, b;
    a = 2;
    b = 3;
    int sum=add(a, b);
    printf("%d",sum);
    return 0;
}