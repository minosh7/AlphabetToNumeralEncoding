#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char choice;
	do
	{
		string s;
		cout << "Input Sequence:" << endl;
		getline(cin >> ws, s);

		char array[] = { '0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
		cout << " " << endl;
		cout << "Encoded:" << endl;
		for (int i = 0; i < size(s); i++) //iterating through the string over here
		{
			if (s[i] == ' ')
			{
				cout << ' ';
			}
			for (int j = 1; j < 27; j++) //at the same time, iterate through the alphabet
			{
				if (s[i] == array[j]) // if the letter in string is equal to the letter in the alphabet we found, then, return the respecive number
				{
					cout << j;
				}
			}
		}
		cout << " " << endl;
		cout << "Retry encoding? (Y/N):" << endl; //Try a different input
		cout << " " << endl;
		cin >> choice;
		cout << " " << endl;
	} 
	while (choice == 'Y' || choice == 'y'); //keep doing this so long as the choice is yes.
	if (choice == 'N' || choice == 'n')
	{
		exit;
	}
	
	return 0;
}