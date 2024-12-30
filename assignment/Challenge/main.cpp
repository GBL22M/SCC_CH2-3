#include <iostream>
#include "SimpleVector_v2.h"

int main()
{	
	BetterSimpleVector<int> vector2;
	BetterSimpleVector<int> vector(3);

	vector.PushBack(10);
	vector.PushBack(40);
	vector.PushBack(30);
	vector.PushBack(50);
	vector.PushBack(20);

	std::cout << "vector: ";
	vector.Print();
	
	vector2.PushBack(100);
	vector2.PushBack(200);
	vector2.PushBack(300);
	vector2.PushBack(400);
	vector2.PushBack(500);

	vector2.PushBack(600);
	vector2.PushBack(700);
	vector2.PushBack(800);
	vector2.PushBack(900);
	vector2.PushBack(1000);
	vector2.PushBack(1100);

	std::cout << "vector2: ";
	vector2.Print();

	BetterSimpleVector<int> newVector(vector2);
	std::cout << "----COPY CONSTRUCTOR TEST----\n";
	std::cout << "newVector by vector2: ";
	newVector.Print();
	std::cout << "---------------------\n";

	BetterSimpleVector<int> vector3(3);
	vector3.PushBack(1);
	vector3.PushBack(2);
	vector3.PushBack(3);

	std::cout << "vector3: ";
	vector3.Print();

	BetterSimpleVector<int> newVector2(vector3);
	std::cout << "----COPY CONSTRUCTOR TEST----\n";
	std::cout << "newVector2 by vector3: ";
	newVector2.Print();
	std::cout << "---------------------\n";

	newVector2.PushBack(4);
	newVector2.PushBack(5);
	newVector2.PushBack(6);

	std::cout << "newVector2: ";
	newVector2.Print();

	vector3.PushBack(1);
	std::cout << "vector3: ";
	vector3.Print();

	return 0;
}