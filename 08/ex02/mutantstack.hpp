#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	MutantStack(void) {}
	MutantStack(const MutantStack<T> & other) : std::stack<T>(other) {}
	virtual ~MutantStack(void) {}

	MutantStack<T> & operator=(const MutantStack<T> & other)
	{
		this->c = other.c;
		return *this;
	}
	iterator				begin(void);
	iterator				end(void);
	const_iterator			begin(void) const;
	const_iterator			end(void) const;
	reverse_iterator		rbegin(void);
	reverse_iterator		rend(void);
	const_reverse_iterator	rbegin(void) const;
	const_reverse_iterator	rend(void) const;
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin(void) const
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end(void) const
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin(void) const
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend(void) const
{
	return this->c.rend();
}

#endif