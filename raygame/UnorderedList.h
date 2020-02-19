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
	Node<T>* searchNode = List<T>::m_first;

	while (searchNode != nullptr)
	{
		if (searchNode->data == data)
		{
			return true;
		}
		
		searchNode = searchNode->next;
	}

	return false;
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
