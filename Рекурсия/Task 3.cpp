#include<iostream>
using namespace std;

int stringLength(char str[],  int counter)
{
	if (str[counter] == 0)
	{
		return counter;
	}

	return stringLength(str, counter + 1);
}

int numberWords(char str[], int word, int counter)
{
	if (str[counter] == 0)
	{
		++word;
		return word;
	}

	if (str[counter] == ' ')
	{
		++word;
	}

	return numberWords(str, word, counter + 1);
}

int  upperCase(char str[], int count)
{
	if (str[count] == 0)
	{
		return 0;
	}

	if (str[count] >= 'a' && str[count] <= 'z')
	{
		str[count] -= 32;
	}

	return upperCase(str, count + 1);
}

int lowerñase(char str[], int count)
{
	if (str[count] == 0)
	{
		return 0;
	}

	if (str[count] >= 'A' && str[count] <= 'Z')
	{
		str[count] += 32;
	}

	return lowerñase(str, count + 1);
}

int entry(char str[], int count, char symbol)
{
	if (str[count] == 0)
	{
		cout << "No" << endl;
		return 0;
	}
	if (str[count] == symbol)
	{
		cout << "Yes" << endl;
		return 0;
	}

	return entry(str, count + 1, symbol);
}

int enteringString(char str[], int count, int enter, char symbol)
{
	if (str[count] == 0)
	{
		return enter;
	}
	if (str[count] == symbol)
	{
		++enter;
	}

	return enteringString(str, count + 1, enter, symbol);
}


int main()
{
	const int num = 255;

	 char str[num];

	 int counter = 1;

	 cout << "Enter string: ";
	 cin.getline(str,num);
	 cout << str << endl;

	 cout << stringLength(str, counter) << endl;

	 int word = 0;

	 cout << numberWords(str, word, counter) << endl;

	 int count = 0;

	 upperCase(str, count);

	 cout << str << endl;

	 lowerñase(str, count);

	 cout << str << endl;

	 char symbol;

	 cout << "Enter symbol: ";
	 cin >> symbol;

	 entry(str, count, symbol);

	 int enter = 0;

	 cout << enteringString(str, count, enter, symbol) << endl;

	 return 0;
}