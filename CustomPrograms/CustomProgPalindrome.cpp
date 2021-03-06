#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

bool IsPalindrome(const string & value);

int main()
{
	string value = "radar";
	bool isPal = IsPalindrome(value);

	if (isPal)
	{
		cout << value << " is Palindrome";
	}
	else
	{
		cout << value << " is NOT Palindrome";
	}

    return 0;
}


/*
	function to test whether a string is palindrome or not
*/
bool IsPalindrome(const string & value)
{
	int f = 0;
	int l = (int)value.length() - 1;

	while (f < l)
	{
		if (value[f] != value[l])
			return  false;

		++f;
		--l;
	}
	return true;
}
