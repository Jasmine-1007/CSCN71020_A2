#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);

namespace CSCN71020A2Test1
{
	TEST_CLASS(CSCN71020A2Test1)
	{
	public:
		
		TEST_METHOD(testGetPerimeter1)
		{
			int width = 3;
			int length = 5;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(13, perimeter);
		}

		TEST_METHOD(testGetPerimeter2)
		{
			int width = 6;
			int length = 10;
			int perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(26, perimeter);
		}

	};
}
