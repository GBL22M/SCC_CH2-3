#pragma once
#define _CRTDBG_MAP_ALLOC

#include <iostream>

#ifdef _DEBUG
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

template <typename T>
class SimpleVector
{
public:
	SimpleVector(int capacity = 10);
	~SimpleVector();

	void PushBack(const T& value);
	void PopBack();

	int GetSize()
	{
		return mCurrentSize;
	}
	int GetCapacity() 
	{
		return mcurrentCapacity; 
	}

	void Print()
	{
		if (mCurrentSize == 0)
			std::cout << "EMPTY VECTOR";

		for (int i = 0; i < mCurrentSize; ++i)
		{
			std::cout << mData[i] << " ";
		}
		std::cout << "\n";
	}

private:
	T* mData;
	int mCurrentSize;
	int mcurrentCapacity;
};

template <typename T>
SimpleVector<T>::SimpleVector(int capacity)
	:mcurrentCapacity(capacity)
	, mCurrentSize(0)
{
	mData = new T[capacity];
}

template<typename T>
SimpleVector<T>::~SimpleVector()
{
	mcurrentCapacity = 0;
	mCurrentSize = 0;

	delete[] mData;	
}

template<typename T>
void SimpleVector<T>::PushBack(const T& value)
{
	if (mCurrentSize >= mcurrentCapacity)
	{
		std::cout << "not enough capacity\n";
		return;
	}
	mData[mCurrentSize] = value;
	mCurrentSize++;
}

template<typename T>
void SimpleVector<T>::PopBack()
{
	if (mCurrentSize == 0)
	{
		std::cout << "Empty vector!!\n";
		return;
	}

	mCurrentSize--;
}