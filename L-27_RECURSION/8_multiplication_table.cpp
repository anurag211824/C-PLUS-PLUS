#include <iostream>

using namespace std;
void multipilcation_table(int num, int k)
{
    // base case
    if (k < 1)
        return;

    multipilcation_table(num, k - 1);
    int multiple = num * k;
    cout << multiple << " ";
}

int main()
{
    multipilcation_table(19, 10);
    return 0;
}