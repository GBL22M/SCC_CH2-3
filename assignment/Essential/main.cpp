#include "SimpleVector.h"

int main()
{
#ifdef _DEBUG
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif	
	SimpleVector<int> vector;
	vector.PushBack(10);
	vector.PushBack(20);
	vector.PushBack(30);
	vector.PushBack(40);
	vector.PushBack(50);
	vector.Print(); //10 20 30 40 50

	vector.PopBack();
	vector.Print(); //10 20 30 40

	vector.PopBack();
	vector.Print(); //10 20 30

	vector.PopBack();
	vector.Print(); //10 20

	vector.PopBack();
	vector.Print(); //10

	vector.PopBack();
	vector.Print(); // EMPTY VECTOR

	vector.PopBack(); //Empty vector!!
	vector.Print(); //EMPTY VECTOR

	vector.PushBack(100);
	vector.PushBack(200);
	vector.PushBack(300);

	vector.Print(); //100 200 300

	//-----------------------------

	SimpleVector<int> vector2(3);
	vector2.PushBack(1);
	vector2.PushBack(2);
	vector2.PushBack(3);
	vector2.PushBack(4);

	vector2.Print();

	vector2.PopBack();
	vector2.PopBack();
	vector2.PopBack();
	vector2.PopBack();
	vector2.Print();

	return 0;
}