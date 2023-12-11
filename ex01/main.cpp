#include"iter.hpp"

template<typename T>
void printPretty(T x)
{
	std::cout << "-*- ::>> " << x << " <<:: -*-" << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

	iter(arr, 5, printPretty);

	std::cout << std::endl;

	std::string arr2[] = {"Hola", "que", "tal", "estas", "?"};
	
	iter (arr2, 5, printPretty);
	
}