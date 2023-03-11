#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* , int* );
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int* length);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		//Task 1:
		TEST_METHOD(Perimeter)
		{
			// To test the perimeter length of 6 and width of 4

			int length = 6;
			int width = 4;	
			int actualPerimeter = 0;
			actualPerimeter = getPerimeter(&length, &width);
			Assert::AreEqual(20, actualPerimeter);
		}

		TEST_METHOD(Area)
		{
			// To test the area length of 6 and width of 4

			int length = 6;
			int width = 4;
			int actualArea = 0;
			actualArea = getArea(&length, &width);
			Assert::AreEqual(24, actualArea);
		}

		//Task 2:

		TEST_METHOD(Length1)
		{
			int input = 50;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Length2)
		{
			int input = 67;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Length3)
		{
			int input = 30;
			int length;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(Width1)
		{
			int input = 47;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(Width2)
		{
			int input = 65;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(Width3)
		{
			int input = 97;
			int width;
			setLength(input, &width);
			Assert::AreEqual(input, width);
		}

	};
}
