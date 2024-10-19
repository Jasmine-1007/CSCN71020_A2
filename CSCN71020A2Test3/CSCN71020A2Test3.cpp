#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" void setLength(int input, int* length);
namespace CSCN71020A2Test3
{
	TEST_CLASS(CSCN71020A2Test3)
	{
	public:
		
		TEST_METHOD(testsetLength1)
		{ 
			int input = 50;
			int length;
			setLength(input, &length);
			Assert::AreEqual(50, length);
		}

		TEST_METHOD(testsetLength2)
		{
			int input = 20;
			int length;
			setLength(input, &length);
			Assert::AreEqual(20, length);
		}

		TEST_METHOD(testsetLength3)
		{
			int input = 14;
			int length;
			setLength(input, &length);
			Assert::AreEqual(14, length);
		}
	};
}
