#pragma once
#include "List.h"
#include <iostream>

template<typename T>
class UnorderedList : List<T>
{
public:

	bool search(const T& data) override;
	void insertFirst(const T& data) override;
	void insertLast(const T& data) override;
	void deleteNode(const T& data) override;
	void printList();

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

	if (List<T>::m_last == nullptr)
	{
		List<T>::m_last = fNode;
	}

	fNode->next = List<T>::m_first;
	if (List<T>::m_first != nullptr)
	{
		List<T>::m_first->previous = fNode;
	}
	List<T>::m_first = fNode;
	


	List<T>::mCount++;
}

template<typename T>
inline void UnorderedList<T>::insertLast(const T & data)
{
	Node<T>* lNode = new Node<T>(data);

	if (List<T>::m_first == nullptr)
	{
		List<T>::m_first = lNode;
	}

	lNode->previous = List<T>::m_last;
	if (List<T>::m_last != nullptr)
	{
		List<T>::m_last->next = lNode;
	}
	List<T>::m_last = lNode;

	List<T>::mCount++;
}

template<typename T>
inline void UnorderedList<T>::deleteNode(const T & data)
{
	Node<T>* searchNode = List<T>::m_first;

	while (searchNode != nullptr)
	{
		if (searchNode->data == data)
		{
			if (searchNode->next != nullptr)
			{
				searchNode->next->previous = searchNode->previous;
			}
			else
			{
				List<T>::m_last = searchNode->previous;
			}

			if (searchNode->previous != nullptr)
			{
				searchNode->previous->next = searchNode->next;
			}
			else
			{
				List<T>::m_first = searchNode->next;
			}

			delete searchNode;
			break;
		}

		searchNode = searchNode->next;
	}
}

template<typename T>
inline void UnorderedList<T>::printList()
{
	Node<T>* printNode = List<T>::m_first;

	while ( printNode != nullptr)
	{
		std::cout << printNode->data;

		printNode = printNode->next;
	}
}
