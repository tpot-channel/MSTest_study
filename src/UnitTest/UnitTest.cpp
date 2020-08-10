#include "pch.h"
#include "CppUnitTest.h"

#include "../include/fizzbuzz.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(FizzBuzz)
	{
	public:

		TEST_METHOD(１の時は１)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::to_string(1), fizzbuzz.get(1));
		}

		TEST_METHOD(２の時は２)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::to_string(2), fizzbuzz.get(2));
		}
	};

	TEST_CLASS(FizzBuzz_factor3)
	{
	public:

		TEST_METHOD(３の時はFizz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("Fizz"), fizzbuzz.get(3));
		}

		TEST_METHOD(６の時はFizz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("Fizz"), fizzbuzz.get(6));
		}
	};

	TEST_CLASS(FizzBuzz_factor5)
	{
	public:

		TEST_METHOD(５の時はBuzz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("Buzz"), fizzbuzz.get(5));
		}

		TEST_METHOD(１０の時はBuzz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("Buzz"), fizzbuzz.get(10));
		}
	};

	TEST_CLASS(FizzBuzz_factor15)
	{
	public:

		TEST_METHOD(１５の時はFizzBuzz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("FizzBuzz"), fizzbuzz.get(15));
		}

		TEST_METHOD(３０の時はFizzBuzz)
		{
			CFizzBuzz fizzbuzz;
			Assert::AreEqual(std::string("FizzBuzz"), fizzbuzz.get(30));
		}
	};
}
