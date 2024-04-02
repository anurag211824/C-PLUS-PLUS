#include <bits/stdc++.h> // Include necessary header files

using namespace std;

bool checkIsomorphic(string s1, string s2) { // Function to check if two strings are isomorphic
    if (s1.size() != s2.size()) // If the lengths of the strings are different, they cannot be isomorphic
        return false;

    vector<int> store1(256, -1); // Create vector to store mappings of characters in string s1
    vector<int> store2(256, -1); // Create vector to store mappings of characters in string s2

    for (int i = 0; i < s1.size(); i++) { // Iterate through each character of the strings
        if (store1[s1[i]] != store2[i]) // If the mappings of characters in s1 and s2 don't match, return false
            return false;
        store1[s1[i]] = store2[s2[i]] = i; // Update mappings of characters in s1 and s2
    }

    return true; // If all characters can be mapped such that s1 transforms into s2, return true (isomorphic)
}

int main() {
    string s1; // Declare variable to store first string
    string s2; // Declare variable to store second string

    getline(cin, s1); // Read first string from input
    getline(cin, s2); // Read second string from input

    if (checkIsomorphic(s1, s2)) { // Check if the two strings are isomorphic
        cout << "The given strings are isomorphic."; // Print result if they are isomorphic
    } else {
        cout << "The given strings are not isomorphic."; // Print result if they are not isomorphic
    }

    return 0; // Exit the program
}

/*
Your program is designed to check whether two strings are isomorphic.
Two strings are considered isomorphic if the characters
in one string can be replaced to get the second string.
For example, "egg" and "add" are isomorphic, but "foo" and "bar" are not.
*/