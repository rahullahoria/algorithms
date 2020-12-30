// Given two strings, write a method to decide 
// if one is a permutation of the other.

// C++ program to check whether two strings are 
// Permutations of each other 
#include <bits/stdc++.h> 
using namespace std; 

/* function to check whether two strings are 
Permutation of each other */
bool arePermutation(string str1, string str2) 
{ 
	// Get lenghts of both strings 
	int n1 = str1.length(); 
	int n2 = str2.length(); 

	// If length of both strings is not same, 
	// then they cannot be Permutation 
	if (n1 != n2) 
	return false; 

	// Sort both strings 
	sort(str1.begin(), str1.end()); 
	sort(str2.begin(), str2.end()); 

	// Compare sorted strings 
	for (int i = 0; i < n1; i++) 
	if (str1[i] != str2[i]) 
		return false; 

	return true; 
} 

/* Driver program to test to print printDups*/
int main() 
{ 
	string str1 = "test"; 
	string str2 = "ttew"; 
	if (arePermutation(str1, str2)) 
	printf("Yes"); 
	else
	printf("No"); 

	return 0; 
} 
