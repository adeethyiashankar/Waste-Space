#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int main(int argv, char* argc[])
{
	std::string num1 = "";
	if (argv < 2)
	{
		std::cout << "Enter size of file (in megabytes): ";
		std::cin >> num1;
	}
	else
	{
		num1 = argc[1];
	}
	std::fstream del;
	del.open("WasteSpace.txt", std::ios::out);
	float tStart = clock();
	int num = std::stoi(num1);
	std::cout << "\n";
	if (num < 1024)
	{
		std::cout << num << " MB will be wasted\n\n";
	}
	else
	{
		double mbgb = num / 1024;
		printf("%.2f GB will be wasted\n\n", mbgb);
	}
	std::string add = std::string(1048576, '0');
for (int i = 0; i < num; i++)
	{
		std::string add = std::string(1048576, '0');
		del << add;
		if ((i + 1) % 128 == 0 && (i + 1) < 1024)
		{
			std::cout << (i + 1) << " MB\n";
		}
		else if ((i + 1) % 1024 == 0)
		{
			std::cout << (i + 1) / 1024 << " GB\n";
		}
	}
	std::cout << "\n";
	if (num < 1024)
	{
		std::cout << num << " MB wasted\n";
	}
	else
	{
		double mbgb = num / 1024;
		printf("%.2f GB wasted\n", mbgb);
	}
	printf("Time taken: %.2fs\n", ((float)clock() - tStart) / CLOCKS_PER_SEC);
	del.close();
	return 0;
}
