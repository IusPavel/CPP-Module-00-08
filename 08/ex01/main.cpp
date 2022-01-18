#include "span.hpp"

int	main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
		std::cout << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(7);
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}

		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
		std::cout << std::endl;
	{
		std::vector<int> temp;
		srand(time(NULL));
		for (size_t i = 0; i < 10000; ++i)
			temp.push_back(rand());
		Span sp = Span(10000);
		sp.addNumber(temp.begin(), temp.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}