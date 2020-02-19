#pragma once
#include "Node.h"
#include "Iterator.h"

template<typename T>
class List
{
public:

	List();

	List(List<T>& listToCopy);

	~List();

	void intializeList();
	bool isEmptyList();
	int Length();
	T front();
	T back();
	virtual bool search(const T& data) = 0;
	virtual void insertFirst(const T& data) = 0;
	virtual void insertLast(const T& data) = 0;
	virtual void deleteNode(const T& data) = 0;
	Iterator<T> Begin();
	Iterator<T> End();

protected:

	int mCount;
	Node<T>* m_first;
	Node<T>* m_last;

private:

	void copyList(List<T>& listToCopy);
};

template<typename T>
inline List<T>::List()
{
	mCount = 0;
}

template<typename T>
inline List<T>::List(List<T>& listToCopy)
{
	
}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
inline void List<T>::intializeList()
{
	for (int i = ; i < Length(); i++)
	{

	}

	mCount = 0;
}

template<typename T>
inline bool List<T>::isEmptyList()
{
	if (Length() > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template<typename T>
inline int List<T>::Length()
{
	return mCount;
}

template<typename T>
inline T List<T>::front()
{
	return m_first;
}

template<typename T>
inline T List<T>::back()
{
	return m_last;
}

template<typename T>
inline Iterator<T> List<T>::Begin()
{
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> List<T>::End()
{
	return Iterator<T>();
}

template<typename T>
inline void List<T>::copyList(List<T>& listToCopy)
{

	for (int i = 0; i < Length(); i++)
	{

	}
}
