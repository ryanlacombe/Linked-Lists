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
	while (m_last->next == nullptr)
	{
		if (m_last->previous == nullptr)
		{
			delete m_last;
			break;
		}

		m_first = m_first->next;
		delete m_first->previous;
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
	return Iterator<T>(m_first);
}

template<typename T>
inline Iterator<T> List<T>::End()
{
	return Iterator<T>(m_last);
}

template<typename T>
inline void List<T>::copyList(List<T>& listToCopy)
{
	List<T>* listCopy = new List<T>;

	while (listToCopy.m_first != nullptr)
	{
		listCopy->m_first = listToCopy.m_first;

		listToCopy.m_first = listToCopy.m_first->next;
	}
}
