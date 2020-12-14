
#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "..\\Files\\Input.txt";
			string res = "..\\Files\\Output.txt";

			Assert::AreEqual(res, (str));
	};
}