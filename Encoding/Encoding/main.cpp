#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char choice;
	bool repeat = true;

	while (repeat)
	{
		string s;
		cout << "Input Sequence:" << endl;
		getline(cin >> ws, s);

		char array[] = { '0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
		cout << " " << endl;
		cout << "Encoded:" << endl;
		for (int i = 0; i < size(s); i++) //iterating through the string over here
		{
			if (s[i] == ' ') //replace every blank space in the string with another blank space. essentially, keeps blank spaces intact.
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
		while (true)
		{
			cout << " " << endl;
			cout << "Retry encoding? (Y/N):" << endl; //Try a different input
			cout << " " << endl;
			cin >> choice;
			cout << " " << endl;
			// second loop to check whether the character was y or n

			if (choice == 'y' || choice == 'Y') //keep doing this so long as the choice is yes.
			{
				break; // get out of the second loop, and go back to the first
			}
			else if (choice == 'n' || choice == 'N')
			{
				repeat = false; //set repeat to false
				break; //exit out of this loop, and then since there's nothing left, it will quit the program.
			}
			else
			{
				cout << "Error. Please try again." << endl; //print this out if nothing hit y or n, and
			}
		}
		
	} 
	
	return 0;
}