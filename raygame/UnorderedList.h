#pragma once
#include "List.h"

template<typename T>
class UnorderedList : List<T>
{
public:

	bool search(const T& data) override;
	void insertFirst(const T& data) override;
	void insertLast(const T& data) override;
	void deleteNode(const T& data) override;

};

template<typename T>
inline bool UnorderedList<T>::search(const T & data)
{
	Node<T>* searchNode = new Node<T>(data);

	for (auto i = List<T>::Begin(); i != List<T>::End(); i++)
	{
		if (searchNode->data == *i )
		{
			return true;
		}
		else if (i == List<T>::End())
		{
			return false;
		}
	}
}

template<typename T>
inline void UnorderedList<T>::insertFirst(const T & data)
{
	Node<T>* fNode = new Node<T>(data);

	List<T>::m_first->previous = fNode;

	List<T>::mCount++;
}

template<typename T>
inline void UnorderedList<T>::insertLast(const T & data)
{
	Node<T>* lNode = new Node<T>(data);

	List<T>::m_last->next = lNode;

	List<T>::mCount++;
}

template<typename T>
inline void UnorderedList<T>::deleteNode(const T & data)
{

}
