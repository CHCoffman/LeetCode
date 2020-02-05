// This program takes the digits of an integer and
// multiplies them and subtracts the result from the
// sum of the digits
#include <iostream>
using namespace std;

int Add(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int Multiply(int n)
{
	int result = 1;
	while(n!= 0)
	{
		result *= n % 10;
		n = n / 10;
	}
	return result;
}

int SubtractProductAndSum(int n)
{
	return Multiply(n) - Add(n);
}
int main()
{
	int n;
	cout << "Enter a number";
	cin >> n;
	cout << "\nProduct: " << Multiply(n) << endl;
	cout << "\nSum: " << Add(n) << endl;
	cout << "\nDifference: " << SubtractProductAndSum(n) << endl;
return 0;
}
