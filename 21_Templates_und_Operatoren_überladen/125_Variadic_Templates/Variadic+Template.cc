#include <iostream>
#include <string>

template <typename T>
T concat(T first)
{
	return first;
}

template <typename T, typename... Args>
T concat(T first, Args... args)
{
	return first + concat(args...);
}

int main()
{
	std::string s1 = "Ha";
	std::string s2 = "ll";
	std::string s3 = "o";

	// First = s1, ...args=[s2, s3]
	// Frist = s2, ...args=[s3]
	// First = s3, ..args=[]
	std::cout << concat(s1, s2, s3) << std::endl;

	std::cout << concat(2, 3, 4) << std::endl;

	getchar();
	return 0;
}