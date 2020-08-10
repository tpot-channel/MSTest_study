// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"

#include "../include/fizzbuzz.h"

const std::string CFizzBuzz::get(int number)
{
	if ((number % 15) == 0) return "FizzBuzz";
	if ((number %  3) == 0) return "Fizz";
	if ((number %  5) == 0) return "Buzz";

	return std::to_string(number);
}