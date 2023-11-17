#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../PR08.1/PR08.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81re
{
	TEST_CLASS(UnitTest81re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "asd+=gfd--+";
			Assert::AreEqual(5, Count(str));

			char* dest = new char[15];
			dest = Change(str);
			Assert::AreEqual("asd+=gfd***+", dest);
		}
	};
}
