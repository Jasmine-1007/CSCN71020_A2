#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" int setWidth(int input, int* width);
namespace CSCN71020A2Test4
{
	TEST_CLASS(CSCN71020A2Test4)
	{
	public:
		
		TEST_METHOD(testsetWidth1)
		{
			int input = 33;
			int width;
			setWidth(input, &width);
			Assert::AreEqual(33, width);
		}

		TEST_METHOD(testsetWidth2)
		{
			int input = 100;
			int width;
			setWidth(input, &width);
			Assert::AreEqual(100, width);
		}

		TEST_METHOD(testsetWidth3)
		{
			int input = 80;
			int width;
			setWidth(input, &width);
			Assert::AreEqual(80, width);
		}
	};
}
