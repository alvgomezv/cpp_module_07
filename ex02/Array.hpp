#ifndef Array_hpp
# define Array_hpp

#include <iostream>
#include <string>

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array(void) : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(const Array &copy) : _array(new T[copy._size]), _size(copy.size())
		{
			for (unsigned int i = 0; i < copy._size; i++)
				_array[i] = copy._array[i];
		}
		Array &operator=(const Array &copy) 
		{
			delete [] _array;
			_array = new T[copy._size];
			_size = copy._size;
			for (unsigned int i = 0; i < copy._size; i++)
				_array[i] = copy._array[i];
			return *this;
		}
		~Array(void) { delete [] _array; }

		int size(void) const { return _size; }

		T &operator[](int index)
		{
			if (index < 0 || index >= this->size())
				throw OutOfLimitsException();
			return _array[index];
		}

		class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Index out of limits";
				}
		};
};

#endif
