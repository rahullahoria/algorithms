/*
One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.
EXAMPLE
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bae -> false 
*/

// C++ program to check if given two strings are 
// at distance one. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns true if edit distance between s1 and 
// s2 is one, else false 
bool isEditDistanceOne(string s1, string s2) 
{ 
	// Find lengths of given strings 
	int m = s1.length(), n = s2.length(); 

	// If difference between lengths is more than 
	// 1, then strings can't be at one distance 
	if (abs(m - n) > 1) 
		return false; 

	int count = 0; // Count of edits 

	int i = 0, j = 0; 
	while (i < m && j < n) 
	{ 
		// If current characters don't match 
		if (s1[i] != s2[j]) 
		{ 
			if (count == 1) 
				return false; 

			// If length of one string is 
			// more, then only possible edit 
			// is to remove a character 
			if (m > n) 
				i++; 
			else if (m< n) 
				j++; 
			else //Iflengths of both strings is same 
			{ 
				i++; 
				j++; 
			} 
			
			// Increment count of edits 
			count++; 
		} 

		else // If current characters match 
		{ 
			i++; 
			j++; 
		} 
	} 

	// If last character is extra in any string 
	if (i < m || j < n) 
		count++; 

	return count == 1; 
} 

// Driver program 
int main() 
{ 
string s1 = "gfg"; 
string s2 = "gf"; 
isEditDistanceOne(s1, s2)? 
		cout << "Yes": cout << "No"; 
return 0; 
} 
