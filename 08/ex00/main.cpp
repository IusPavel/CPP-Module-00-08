#include "easyfind.hpp"
#include <vector>
#include <deque>

int	main()
{
	{
		std::vector<int> arr1;
		arr1.push_back(1);
		arr1.push_back(2);
		arr1.push_back(3);
		arr1.push_back(4);
		arr1.push_back(5);

		int	valueToSearch1 = 1;
		int	valueToSearch6 = 6;
		std::vector<int>::iterator result1 = easyFind(arr1, valueToSearch1);
		std::vector<int>::iterator result6 = easyFind(arr1, valueToSearch6);

		if (result1 != end(arr1))
			std::cout << "1: Found!" << std::endl;
		else
			std::cout << "1: Not found!" << std::endl;

		if (result6 != end(arr1))
			std::cout << "6: Found!" << std::endl;
		else
			std::cout << "6: Not found!" << std::endl;
	}

	{
		std::deque<int> arr;
		arr.push_back(1);
		arr.push_back(2);
		arr.push_front(3);
		arr.push_front(9);
		arr.push_front(10);

		int	valueToSearch3 = 3;
		int	valueToSearch11 = 11;
		std::deque<int>::iterator result3 = easyFind(arr, valueToSearch3);
		std::deque<int>::iterator result11 = easyFind(arr, valueToSearch11);

		if (result3 != end(arr))
			std::cout << *result3 << ": Found!" << std::endl;
		else
			std::cout << "3: Not found!" << std::endl;

		if (result11 != end(arr))
			std::cout << *result11 << ": Found!" << std::endl;
		else
			std::cout << "11: Not found!" << std::endl;
	}

	// {
	// 	std::vector<int> arr;
	// 	arr.push_back(1);
	// 	arr.push_back(2);
	// 	arr.push_back(3);
	// 	arr.push_back(4);
	// 	arr.push_back(5);

	// 	int	valueToSearch3 = 3;
	// 	int	valueToSearch11 = 11;
	// 	try
	// 	{
	// 		easyFind(arr, valueToSearch3);
	// 		easyFind(arr, valueToSearch11);
	// 	}
	// 	catch (const std::exception & ex)
	// 	{
	// 		std::cout << ex.what() << std::endl;
	// 	}
	// }
}