#include<iostream>
using namespace std;

void comArray(int arr[], const int num)
{
	for (int i = 0; i < num; ++i)
	{
		arr[i] = rand() % 20 - 10;
	}
}

void printArray(int arr[], const int num)
{
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << " ";
	}
}

int minArray(int arr[],  int num, int min)
{
	if (num == 1)
	{
		return min;
	}
	if (min > arr[num - 1])
	{
		min = arr[num - 1];
	}

	return minArray(arr, num - 1, min);
}

int maxArray(int arr[], int num, int max)
{
	if (num == 1)
	{
		return max;
	}

	if (max < arr[num - 1])
	{
		max = arr[num - 1];
	}

	return maxArray(arr, num - 1, max);
}

int sumArray(int arr[], int num, int sum)
{
	if (num == 0)
	{
		return sum;
	}

	sum += arr[num - 1];

	return sumArray(arr, num - 1, sum);
}

long int composicion(int arr[], int num, long int com)
{
	if (num == 1)
	{
		return com;
	}

	com *= arr[num - 1];

	return composicion(arr, num - 1, com);
}

int elementArray(int arr[], int num, int num2)
{
	if (num == 1)
	{
		cout << "false" << endl;
		return 0;
	}
	
	if (num2 == arr[num - 1])
	{
		cout << "true" << endl;
		return 0;
	}

	return elementArray(arr, num - 1, num2);
}

int printArray1(int arr[], int num, int counter)
{
	if (counter == num)
	{
		return 0;
	}

	cout << arr[counter] << " ";

	return printArray1(arr, num, counter + 1);
}

int countNegative(int arr[], int num, int count)
{
	if (num == 0)
	{
		return count;
	}

	if (arr[num - 1] < 0)
	{
		++count;
	}

	return countNegative(arr, num - 1, count);
}

int entryElement(int arr[], int num, int counter, int num2)
{
	if (num == 0)
	{
		return counter;
	}

	if (num2 == arr[num - 1])
	{
		++counter;
	}

	return entryElement(arr, num - 1, counter, num2);
}

int evenNum(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] % 2 == 0)
	{
		++counter;
	}

	return evenNum(arr, num - 1, counter);
}

int countPositive(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] > 0)
	{
		++counter;
	}

	return countPositive(arr, num - 1, counter);
}

int oddNum(int arr[], int num, int counter)
{
	if (num == 0)
	{
		return counter;
	}

	if (arr[num - 1] % 2 != 0)
	{
		++counter;
	}

	return oddNum(arr, num - 1, counter);
}

int main()
{
	srand(time(NULL));

	const int num = 5;

	int arr[num];

	comArray(arr, num);

	printArray(arr, num);

	cout << endl;

	int min = arr[0];

	cout << minArray(arr, num, min) << endl;

	int max = arr[0];

	cout << maxArray(arr, num, max) << endl;

	int sum = 0;

	cout << sumArray(arr, num, sum) << endl;

	long int com = 1;

	cout << composicion(arr, num, com) << endl;

	int num2;

	cout << "Enter number: ";
	cin >> num2;

	elementArray(arr, num, num2);

	int counter = 0;

	printArray1(arr, num, counter);

	cout << endl;

	cout << countNegative(arr, num, counter) << endl;

	cout << entryElement(arr, num, counter, num2) << endl;

	cout << evenNum(arr, num, counter) << endl;

	cout << countPositive(arr,num,counter) << endl;

	cout << oddNum(arr, num, counter) << endl;

	return 0;
}