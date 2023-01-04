#include <iostream>
#include <vector>

/*set the value of TEST_EXPLICIT equal "1" and see explicit test*/
#define TEST_EXPLICIT 0

class ExplicitTest
{
public:
	int a;
	ExplicitTest() : a(0)
	{
		std::cout << "Explicit()" << std::endl;
	}
#if (TEST_EXPLICIT == 1)
	explicit
#endif
	ExplicitTest(int _a) : a(_a)
	{
		std::cout << "Explicit(int _a)" << std::endl;
	}
	~ExplicitTest()
	{
		std::cout << "~Explicit()" << std::endl;
	}
};
 

int main() 
{
	ExplicitTest et = 1; // works only if 


	return 0;
}