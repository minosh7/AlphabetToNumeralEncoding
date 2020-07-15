#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "Take an input to map your character:" << endl;
	cin >> s;
	
	char array[] = { '0','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	for (int i = 0; i < size(s); i++) //iterating through the string over here
	{
		for (int j = 1; j < 27; j++)
		{
			if (s[i] == array[j])
			{
				cout << j;
			}
		}
	}
	cout << " " << endl;
	system("pause");
	return 0;
}