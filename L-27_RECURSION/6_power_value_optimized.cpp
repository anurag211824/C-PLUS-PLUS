#include <iostream>

using namespace std;
 long long power_vlaue(long long p, long long q)
{
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        // if q is even
        long long result = power_vlaue(p, q / 2);
        return result * result;
    }
    else
    {
        // if q is odd
        long long result = power_vlaue(p, (q - 1) / 2);
        return p * result * result;
    }
}

int main()
{
    long long ans = power_vlaue(2, 5);
    cout << ans;
    return 0;
}
//1.pow(2,10)-->pow(2,5)*pow(2,5); 32*32 -----result

//2.pow(2,5)-->pow(2,2)*pow(2*2)*2; 4*4*2-------^^^^^

//3.pow(2,2)-->pow(2,1)*pow(2,1); 2*2-------^^^

//4.pow(2,1)-->2*1*1-------------^^^
//
//
//
//
//
/*                 pow(2,10)
                 /
                /
               /
            pow(2,5)*pow(2,5)
            /
           /
         /
    pow(2,2)*pow(2,2)*2
    /
   /
  /
pow(2,1)*pow(2,1)
|
| 
pow(2,0)---->1

*/


                   
            

