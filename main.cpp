#include <utility>
#include <iostream>

class RuleOfZero
{
public:
	void SetA(int a)
	{
		_a = a;
	}
	void SetB(int b)
	{
		_b = b;
	}
	int getA() const
	{
		return _a;
	}
	int getB() const
	{
		return _b;
	}
public:
	RuleOfZero() = default;
   
   	RuleOfZero(RuleOfZero const& inRuleOfZero) = default;
   	RuleOfZero& operator=(RuleOfZero const& inRuleOfZero) = default;
   
 	RuleOfZero(RuleOfZero&& inRuleOfZero) = default;
   	RuleOfZero& operator=(RuleOfZero&& inRuleOfZero) = default;
   
	~RuleOfZero() = default;

private:
	int _a,_b;
};

void PrintROZ(const RuleOfZero& roz)
{
	std::cout << "a = " << roz.getA() << " b = " << roz.getB() << std::endl;
}

int main() 
{
	RuleOfZero r1;

	r1.SetA(3);
	r1.SetB(4);
	
	std::cout << "r1 "; 
	PrintROZ(r1);

	RuleOfZero r2;

	std::cout << "r2 "; 
	PrintROZ(r2);

	RuleOfZero r3 = r1;
	std::cout << "r3 "; 
	PrintROZ(r3);


	return 0;
}