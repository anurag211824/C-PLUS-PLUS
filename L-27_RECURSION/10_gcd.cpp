#include <iostream>

using namespace std;
int greatest_common_divisor(int a, int b)
{
    if (b%a == 0)
        return a;
   
       
        greatest_common_divisor(b, a%b);
    
}

int main()
{

    cout << greatest_common_divisor(5, 0);
    return 0;
}