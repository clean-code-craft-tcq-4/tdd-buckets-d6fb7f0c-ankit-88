#include "charging.hpp"

std::string getCurrentRangeOccurance(int* ptr)
{
	std::string result;
	if (abs(ptr[0] - ptr[1]) == 1) 
	{
		result = std::to_string(ptr[0]) + "-" + std::to_string(ptr[1]) + "," + std::to_string(2);
	}
	return result;
}
