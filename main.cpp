#include <memory>
#include <iostream>
#include <utility>

auto myFunction() 
{
	return 1;
}

auto sum(int i) {
	if (i == 1)
		return i;           // возвращаемое значение - int
	else
		return sum(i - 1) + i;     // теперь можно вызывать рекурсивно
}

int main()
{
	int a = sum(5);
	std::cout << "sum = " << a << std::endl;
	return 0;
}