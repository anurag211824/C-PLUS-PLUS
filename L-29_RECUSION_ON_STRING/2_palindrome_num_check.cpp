#include <iostream>

using namespace std;
bool palindrome_check(int num, int reverse, int m)
{
    // base case
    if (num == 0)
    {
        return reverse == m;
    }

    int remainder = num % 10;
    reverse = reverse * 10 + remainder;
    return palindrome_check(num / 10, reverse, m);
}
bool palindrome(int num, int *temp)
{
    // base case
    if (num >= 0 && num <= 9)
    {
        int lastdigitTemp = (*temp) % 10;
        (*temp) /= 10;
        return num == lastdigitTemp;
    }
    bool result = (palindrome(num / 10, temp) && (num % 10) == ((*temp) % 10));
    *temp /= 10;
    return result;
}

int main()
{
    int num = 126431;
    int m = num;
    int reverse = 0;
    int ans = palindrome_check(num, reverse, m);
    if (ans == 1)
        cout << num << " is a palindrome.";
    else
        cout << num << " is not a palindrome.";

 cout<<endl;
    int *temp = &num;
    int result = palindrome(num, temp);
    cout << result;
    ;

    return 0;
}