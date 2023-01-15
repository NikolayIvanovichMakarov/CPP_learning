#include <utility>
#include <iostream>

class MutableExample 
{
public:
	int GetValue() 
	{
		return value;
	}
	int GetConstValue() const 
	{
		constValue = 3;
		return constValue;
	}
	void SetValue(int value) 
	{
		this->value = value;
	}
	void SetConstValue(int constValue) const 
	{
		this->constValue = constValue;
	}
public:

private:
	int value;
	mutable int constValue;
};

int main() 
{
	const MutableExample me{};
	// me.SetValue(3); // Ошибка 
 	me.SetConstValue(4);

	std::cout << "value = " << /* me.GetValue() Ошибка << */ " const = " << me.GetConstValue() << std::endl;

	return 0;
}