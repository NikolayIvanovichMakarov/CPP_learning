
class RuleOfThree 
{
public:
	RuleOfThree() :_simpleValue(5)
	{
	}
	// 1. copy constructor
	RuleOfThree(const RuleOfThree& rot) : _simpleValue(rot._simpleValue)
	{
	}

	// 2. copy assignment operator
	RuleOfThree& operator=(const RuleOfThree& rot)
	{
		if (this != &rot)
			_simpleValue = rot._simpleValue;
		return *this;
	}

	// 3. destructor
	~RuleOfThree()
	{
	}
private:
	int _simpleValue;
};
 

int main() 
{
	RuleOfThree r;		// default constructor
	RuleOfThree r2 = r; // copy constructor
	r = r2;				// copy assignment operator

	return 0;
}