#include <memory>
#include <iostream>
#include <utility>

auto myFunction() 
{
	return 1;
}

auto sum(int i) {
	if (i == 1)
		return i;           // ������������ �������� - int
	else
		return sum(i - 1) + i;     // ������ ����� �������� ����������
}

int main()
{
	int a = sum(5);
	std::cout << "sum = " << a << std::endl;
	return 0;
}