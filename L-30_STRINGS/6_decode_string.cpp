#include <bits/stdc++.h>
using namespace std;

// Function to decode the given encoded string
string Decodestring(string s)
{
    int n = s.size();
    string result = ""; // Initialize an empty string to store the decoded result

    // Iterate through each character of the input string
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ']') // If the character is not ']', simply append it to the result
            result.push_back(s[i]);
        else
        {                     // If the character is ']', start decoding the encoded string inside the square brackets
            string temp = ""; // Temporary string to store the characters inside the square brackets
            while (!result.empty() && result.back() != '[')
            {                                  // Extract characters until '[' is encountered
                temp.push_back(result.back()); // Append the character to the temporary string
                result.pop_back();             // Remove the character from the result
            }
            reverse(temp.begin(), temp.end()); // Reverse the temporary string to get the encoded string
            result.pop_back();                 // Remove the '[' from the result

            string num = ""; // String to store the repeat count
            while (!result.empty() && (result.back() >= '0' && result.back() <= '9'))
            {                                 // Extract digits for the repeat count
                num.push_back(result.back()); // Append the digit to the repeat count string
                result.pop_back();            // Remove the digit from the result
            }
            reverse(num.begin(), num.end()); // Reverse the repeat count string to get the actual count
            int number = stoi(num);          // Convert the repeat count string to an integer

            // Append the decoded string (temp) to the result 'number' times
            while (number)
            {
                result += temp;
                number--;
            }
        }
    }
    return result; // Return the decoded result
}

int main()
{
    string s;
    getline(cin, s);                 // Read the input string
    cout << Decodestring(s) << endl; // Decode the input string and print the decoded result
    return 0;
}

/*
Given an encoded string, return its decoded string.

The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times.
Note that k is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc.
Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k.
For example, there will not be input like 3a or 2[4].

The test cases are generated so that the length of the output will never exceed 105.



Example 1:

Input: s = "3[a]2[bc]"
Output: "aaabcbc"
Example 2:

Input: s = "3[a2[c]]"
Output: "accaccacc"
Example 3:

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"
*/
