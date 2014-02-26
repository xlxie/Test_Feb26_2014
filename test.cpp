#include <stdio.h>

class Test
{
private:
	int i;
public:
	Test()
	{
		printf("Default constructor\n");
	}
	Test(int arg_i)
	{
		i = arg_i;
		printf("  Constructor with ID = %d is called\n",i);
	}
	~Test()
	{
		printf("Deconstructor with ID = %d is called\n",i);
	}
};


static Test t2(2);
Test t1(1);

Test func(Test arg_t)
{
	static Test t7(7);
	Test t8(8);

	return Test(9);
}
int main()
{	
	printf("starts\n");
	Test t3(3);
	Test t4(4);
	t4 = 5;
	{
		Test t6(6);
	}
	func(Test(10));
	printf("ends\n");
	return 0;
}