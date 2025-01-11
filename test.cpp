#include <iostream>

int main()
{
	int a;
	
	for(int i = 0; i < 10; i ++)
	{
		std::cin >> a;
		std::cout << "Hello, World " << a << std::endl;
		if (i == 5)
			std::cout << "5th" << std::endl;
	}	
	return 0;
}

