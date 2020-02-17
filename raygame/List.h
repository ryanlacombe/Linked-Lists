#pragma once
#include "Node.h"
#include "Iterator.h"

template<typename T>
class List
{
public:

	List();

	List(List<T>&);

	~List();

	void intializeList();
	bool isEmptyList();
	int Length();
	T front();
	T back();
	virtual bool search(const T&) = 0;
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	virtual void deleteNode(const T&) = 0;
	Iterator<T> Begin();
	Iterator<T> End();

protected:

	int mCount;
	Node<T>* First;
	Node<T>* Last;

private:

	void copyList(List<T>&);
};

template<typename T>
inline List<T>::List()
{

}

template<typename T>
inline List<T>::List(List<T>&)
{
	
}

template<typename T>
inline List<T>::~List()
{

}

template<typename T>
inline void List<T>::intializeList()
{

}

template<typename T>
inline bool List<T>::isEmptyList()
{
	return false;
}

template<typename T>
inline int List<T>::Length()
{
	return 0;
}

template<typename T>
inline T List<T>::front()
{
	return T();
}

template<typename T>
inline T List<T>::back()
{
	return T();
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
inline void List<T>::copyList(List<T>&)
{
}
