#include <utility>
class RuleOfFive 
{
public:
	RuleOfFive() :_simpleValue(5)
	{
	}
	// 1. copy constructor
	RuleOfFive(const RuleOfFive& rot) : _simpleValue(rot._simpleValue)
	{
	}

	// 2. copy assignment operator
	RuleOfFive& operator=(const RuleOfFive& rot)
	{
		if (this != &rot)
			_simpleValue = rot._simpleValue;
		return *this;
	}

	// 3. destructor
	~RuleOfFive()
	{
	}


	// move constructor
	RuleOfFive(const RuleOfFive&& rof) noexcept
	{
		_simpleValue = rof._simpleValue;	
	}

	// move assignment
	RuleOfFive& operator=(const RuleOfFive&& rof) noexcept
	{
		// self-asignment check
		if (this != &rof)
		{
			_simpleValue = rof._simpleValue;
		}

		return *this;
	}
private:
	int _simpleValue;
};
 

int main() 
{
	RuleOfFive r;		// default constructor
	RuleOfFive r2 = r;	// copy constructor
	r = r2;				// copy assignment operator
	RuleOfFive r3 = std::move(r2);	// move constructor
	r3 = std::move(r2);				// move assigment operator
	return 0;
}