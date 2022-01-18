#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
private:
	T				*arr;
	unsigned int	_size;
public:
	Array(void) : arr(new T()), _size(0) {}
	Array(unsigned int	n) : arr(new T[n]()), _size(n) {}
	Array(const Array<T>& other)
	{
		this->arr = new T[other._size];
		this->_size = other._size;
		for (int i = 0; i < (int)_size; ++i)
		{
			this->arr[i] = other.arr[i];
		}
	}
	~Array(void) { delete[] arr; }

	Array<T>&	operator=(const Array<T>& other)
	{
		delete[] this->arr;
		this->arr = new T[other._size];
		for (int i = 0; i < (int)_size; ++i)
		{
			this->arr[i] = other.arr[i];
		}
		return *this;
	}

	T&	operator[](unsigned int	index)
	{
		if (index >= _size || index < 0)
			throw std::out_of_range("out_of_range");
		return (arr[index]);
	}
	
	unsigned int	size(void) const
	{
		return(_size);
	}

};

#endif