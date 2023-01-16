#include <iomanip>
#include <iostream>
#include <vector>

void print_vec(const std::vector<int>& myvec) 
{
	for (const auto& i : myvec) 
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void inc_vec(std::vector<int>& myvec) 
{
	for (auto& i : myvec)
	{
		++i;
	}
}

int main() 
{
	std::vector<int> myvec = {0,4,5,6,7,8,9,1,2,3};
	print_vec(myvec);
	inc_vec(myvec);
	print_vec(myvec);

	return 0;
}