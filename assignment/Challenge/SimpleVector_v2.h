#pragma once
#define _CRTDBG_MAP_ALLOC

#include <algorithm>
#include <iostream>

#ifdef _DEBUG
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

template <typename T>
class BetterSimpleVector
{
public:
	BetterSimpleVector();
	BetterSimpleVector(int capacity);
	BetterSimpleVector(const BetterSimpleVector& other);
	~BetterSimpleVector();

	void PushBack(const T& value);
	void PopBack();
	void Print();
	void SortData();

	int GetSize()
	{
		return mCurrentSize;
	}
	int GetCapacity()
	{
		return mCurrentCapacity;
	}

protected:
	void Resize(int newCapacity);

private:
	T* mData;
	int mCurrentCapacity;
	int mCurrentSize;
};

template <typename T>
BetterSimpleVector<T>::BetterSimpleVector()
	: mCurrentCapacity(10)
	, mCurrentSize(0)
{
	mData = new T[10];
}

template <typename T>
BetterSimpleVector<T>::BetterSimpleVector(int capacity)
	: mCurrentCapacity(capacity)
	, mCurrentSize(0)
{
	mData = new T[capacity];
}

template<typename T>
BetterSimpleVector<T>::BetterSimpleVector(const BetterSimpleVector& other)
{	
	mCurrentCapacity = other.mCurrentCapacity;
	mCurrentSize = other.mCurrentSize;

	mData = new T[mCurrentCapacity];

	for (int i = 0; i < mCurrentSize; ++i)
	{
		mData[i] = other.mData[i];
	}
}

template<typename T>
BetterSimpleVector<T>::~BetterSimpleVector()
{
	mCurrentCapacity = 0;
	mCurrentSize = 0;
	
	delete[] mData;	

	_CrtDumpMemoryLeaks();
}

template<typename T>
void BetterSimpleVector<T>::PushBack(const T& value)
{	
	//full
	if (mCurrentSize == mCurrentCapacity)
	{
		Resize(mCurrentCapacity + 5);				
	}
	
	mData[mCurrentSize] = value;
	mCurrentSize++;
}

template<typename T>
void BetterSimpleVector<T>::PopBack()
{
	if (mCurrentSize == 0)
	{
		std::cout << "Empty vector!!\n";
		return;
	}

	mCurrentSize--;
}

template<typename T>
void BetterSimpleVector<T>::Print()
{
	if (mCurrentSize == 0)
	{
		std::cout << "EMPTY VECTOR";
		return;
	}

	for (int i = 0; i < mCurrentSize; ++i)
	{
		std::cout << mData[i] << " ";
	}
	std::cout << "\n";
}

template<typename T>
void BetterSimpleVector<T>::SortData()
{	
	std::sort(mData, mData + mCurrentSize);	
}

template<typename T>
void BetterSimpleVector<T>::Resize(int newCapacity)
{
	if (newCapacity <= mCurrentCapacity)
	{
		std::cout << "we have remain capacity\n";
		return;
	}
	std::cout << "Resize Vector, current capacity is " << newCapacity << "\n";

	T* newData = new T[newCapacity];

	//현재 값 복사
	for (int i = 0; i < mCurrentSize; ++i)
	{
		newData[i] = mData[i];
	}

	delete[] mData;	

	mData = newData;	
	mCurrentCapacity = newCapacity;	

	_CrtDumpMemoryLeaks();
}