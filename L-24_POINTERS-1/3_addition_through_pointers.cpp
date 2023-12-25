#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int *ptrx = &x; // &x fetches rhe addresss of x and then store it in ptrx
    int *ptry = &y; // &y fetches rhe addresss of y and then store it in ptry
    int result;     // declare result so it has garbage value
    int *ptr_result = &result;
    /*
    *ptrx->10
    *ptrxy->20
    *ptr+*ptry->30
    *ptr_result=30 we store 30 0n the addres stored in *ptr_result
    *result -> 30
    */
    *ptr_result = *ptrx + *ptry;
    cout << result << endl;

    return 0;
}