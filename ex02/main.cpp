#include"Array.hpp"

int main()
{
	Array<int> arr1(5);
	Array<std::string> arr2(7);

	std::string strs[] = {"Hola", "que", "tal", "como", "estas", "tu", "?"};
	
	for (int i = 0; i < arr1.size(); i++)
		arr1[i] = i;

	for (int i = 0; i < arr2.size(); i++)
		arr2[i] = strs[i];

	Array<int> arr3(arr1);
	Array<std::string> arr4;
	arr4 = arr2;
	
	try
	{
		std::cout << "arr3[1] : " << arr3[1] << std::endl;
		std::cout << "arr4[3] : " << arr4[3] << std::endl;
		std::cout << "arr1[10]: " << arr1[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
}