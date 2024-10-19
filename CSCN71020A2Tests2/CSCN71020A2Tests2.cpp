#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" int getArea(int* length, int* width);

namespace CSCN71020A2Tests2
{
	TEST_CLASS(CSCN71020A2Tests2)
	{
	public:
		
		TEST_METHOD(testgetArea1)
		{
			int width = 10;
			int length = 200;
			int area = getArea(&width, &length);
			Assert::AreEqual(2000, area);
		}

		TEST_METHOD(testgetArea2)
		{
			int width = 3;
			int length = 4;
			int area = getArea(&width, &length);
			Assert::AreEqual(12, area);
		}

		TEST_METHOD(testgetArea3)
		{
			int width = 0;
			int length = 20;
			int area = getArea(&width, &length);
			Assert::AreEqual(0, area);
		}
	};
}
