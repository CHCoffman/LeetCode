// Given a sorted array nums, remove the duplicates 
// in-place such that each element appear only once and return the new length.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int elem = 0; // To hold the number of individual elements
	int arr[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

	for(int i = 1; i < 10; i++)
	{
		if(arr[i] == arr[i - 1])
			elem++;
	}

	cout << "Number of distinct elements: " << elem << endl;

	return 0;
}