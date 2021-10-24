#include<iostream>
using namespace std;

long long int degreeNum(long long int num, int degree)
{
	if (degree == 1)
	{
		return num;
	}

	return num* degreeNum(num, degree - 1);

}

long long int factorial(int counter, int num, long long int num2)
{
	if (counter > num)
	{
		return num2;
	}

	num2 *= counter;

	return factorial(counter + 1, num, num2);
}

int sumNumbers(int num3, int sum)
{
	if (num3 == 0)
	{
		return sum;
	}

	sum += (num3 % 10);

	return sumNumbers(num3 / 10, sum);
}

int main()
{
	int num, degree;

	cout << "Enter number: ";
	cin >> num;

	cout << "Enter degree: ";
	cin >> degree;

	cout << degreeNum(num, degree) << endl;

	int num2 = 1,
		counter = 1;

	cout << factorial(counter, num, num2) << endl;

	int sum = 0,
		num3;

	cout << "Enter number: ";
	cin >> num3;

	cout << sumNumbers(num3, sum) << endl;

	return 0;
}