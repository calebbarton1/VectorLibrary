// CiknayAPI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Vector2.h"



int main()
{
	Vector2f test;

	test = Vector2f(25, 4);
	Vector2f test2 = test;
	test2 = test * 2;

	if (test2 != test)
		std::cout << "shit son that isnt it" << std::endl;


	if (test2 == test)
		std::cout << "shit son that is totally it" << std::endl;

	test -= 2;
	test2 /= test;
	test2 *= 4;

	test = test + 2;
	test = test2 / test;

	

	float mag1 = test2.Magnitude();
	float mag2 = test.MagnitudeSquared();

	float mag3 = test.Magnitude(test, test2);
	float mag4 = test.MagnitudeSquared(test, test2);

	test.Normalise();
	test.Normalise(test2);

	float cross = test ^ test2;
	float dot = test | test2;
	//float blah = Vector2f::Magnitude(test, test2);
}

