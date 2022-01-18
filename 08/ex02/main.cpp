#include "mutantstack.hpp"
#include <list>

int main()
{
	std::cout << "=======1st test(from subject)=======" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "=======2st test(compare output with list)=======" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << "=======3st test(random test)=======" << std::endl;
	{
		MutantStack<int> randomTest;
		srand(time(0));
		for (int i = 0; i < 10; ++i)
			randomTest.push(rand() % 100);

		MutantStack<int>::iterator it = randomTest.begin();
		MutantStack<int>::iterator ite = randomTest.end();
		while (it != ite)
		{
			std::cout << *it;
			if (*it % 2 == 0)
				std::cout << " - is an even number" << std::endl;
			else
				std::cout << " - is an odd number" << std::endl;
			++it;
		}
	}
	std::cout << "=======4st test(reverseIterator test)=======" << std::endl;
	{
		MutantStack<int> randomTest;
		randomTest.push(1);
		randomTest.push(2);
		randomTest.push(3);
		randomTest.push(4);
		randomTest.push(5);
		MutantStack<int>::reverse_iterator it = randomTest.rbegin();
		MutantStack<int>::reverse_iterator ite = randomTest.rend();
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	return 0;
}