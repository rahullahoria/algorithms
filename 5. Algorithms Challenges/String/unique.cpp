// Implement an algorithm to determine if a string has all unique characters. 
// What if you cannot use additional data structures? 

// C++ program to illustrate string
// with unique characters using
// brute force technique
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 256;

// by left shift
bool uniqueCharacters(string str)
{
 
    // Assuming string can have characters
    // a-z, this has 32 bits set to 0
    int checker = 0;
 
    for (int i = 0; i < str.length(); i++) {
 
        int bitAtIndex = str[i] - 'a';
 
        // if that bit is already set in
        // checker, return false
        if ((checker & (1 << bitAtIndex)) > 0) {
            return false;
        }
 
        // otherwise update and continue by
        // setting that bit in the checker
        checker = checker | (1 << bitAtIndex);
    }
 
    // no duplicates encountered, return true
    return true;
}
// by hash 
bool uniqueCharacters(string str)
{
 
    // If length is greater than 265,
    // some characters must have been repeated
    if (str.length() > MAX_CHAR)
        return false;
 
    bool chars[MAX_CHAR] = { 0 };
    for (int i = 0; i < str.length(); i++) {
        if (chars[int(str[i])] == true)
            return false;
 
        chars[int(str[i])] = true;
    }
    return true;
}

// by sorting n*logn
bool uniqueCharacters(string str)
{
 
    // Using sorting
    sort(str.begin(), str.end());
 
    for (int i = 0; i < str.length()-1; i++) {
 
        // if at any time, 2 adjacent
        // elements become equal,
        // return false
        if (str[i] == str[i + 1]) {
            return false;
        }
    }
    return true;
}

// nav approach n^2
bool uniqueCharacters(string str)
{

	// If at any time we encounter 2
	// same characters, return false
	for (int i = 0; i < str.length() - 1; i++) {
		for (int j = i + 1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				return false;
			}
		}
	}

	// If no duplicate characters encountered,
	// return true
	return true;
}

// driver code
int main()
{
	string str = "GeeksforGeeks";

	if (uniqueCharacters(str)) {
		cout << "The String " << str
			<< " has all unique characters\n";
	}
	else {
		cout << "The String " << str
			<< " has duplicate characters\n";
	}
	return 0;
}
// This code is contributed by Divyam Madaan
