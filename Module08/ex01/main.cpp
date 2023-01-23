#include "Span.hpp"

static void	testLongestSpan( Span & test )
{
	try
	{
		std::cout << "Longest span  : " << test.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	testShortestSpan( Span & test )
{
	try
	{
		std::cout << "Shortest span : " << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	testVectorEmpty( void )
{
	std::cout << "-------------- Test Vector Empty --------------" << std::endl;

	Span test(5);

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorOneElement( void )
{
	std::cout << "---------- Test Vector One Element ----------" << std::endl;

	Span test(5);

	test.addNumber(42);

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorTwoElement( void )
{
	std::cout << "---------- Test Vector Two Element ----------" << std::endl;

	Span test(5);

	test.addNumber(42);
	test.addNumber(84);

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorTenPositiveElement( void )
{
	std::cout << "---------- Test Vector Ten Element ----------" << std::endl;

	Span test(10);
	int myInts[] = {2, 16, 4, 19, 56, 75, 25, 42, 36, 15};
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));

	test.addNumber(vector.begin(), vector.end());

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorTenNegativeElement( void )
{
	std::cout << "------ Test Vector Ten Negative Element ------" << std::endl;

	Span test(10);
	int myInts[] = {-2, -16, -4, -19, -56, -75, -25, -42, -36, -15};
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));

	test.addNumber(vector.begin(), vector.end());

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorTenThousandElement( void )
{
	std::cout << "------ Test Vector Ten Thousand Element ------" << std::endl;
	srand(time(NULL));

	Span test(10000);
	std::vector<int> vector(10000);

	for (iteratorVectorInt it = vector.begin(); it != vector.end(); it++)
		*it = rand() % INT_MAX;
	test.addNumber(vector.begin(), vector.end());

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorDuplicateElement( void )
{
	std::cout << "------- Test Vector Duplicate Element -------" << std::endl;

	Span test(10);
	std::vector<int> vector(10, 42);

	test.addNumber(vector.begin(), vector.end());

	testLongestSpan(test);
	testShortestSpan(test);

	std::cout << std::endl;
}

static void	testVectorWithCopyElement( void )
{
	std::cout << "------- Test Vector With Copy Element -------" << std::endl;

	Span test(10);
	int myInts[] = {2, 16, 4, 19, 56, 75, 25, 42, 36, 15};
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));

	test.addNumber(vector.begin(), vector.end());

	Span copy1(test);
	Span copy2 = test;

	testLongestSpan(copy1);
	testShortestSpan(copy1);
	testLongestSpan(copy2);
	testShortestSpan(copy2);

	std::cout << std::endl;
}

static void	testOutOfLimits( void )
{
	std::cout << "------------- Test Out of Limits -------------" << std::endl;

	Span test(5);
	std::vector<int> vector(10, 42);

	try
	{
		test.addNumber(vector.begin(), vector.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
}

int main( void )
{
	testVectorEmpty();
	testVectorOneElement();
	testVectorTwoElement();
	testVectorTenPositiveElement();
	testVectorTenNegativeElement();
	testVectorTenThousandElement();
	testVectorDuplicateElement();
	testVectorWithCopyElement();
	testOutOfLimits();
	return 0;
}