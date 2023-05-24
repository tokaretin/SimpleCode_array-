#include <iostream>

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		int num;
		std::cin >> num;
		arr[i] = num;
	}

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << ", ";
	}
}

 