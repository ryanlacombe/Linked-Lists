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
	//Creates a new node with the passed in data
	Node<T>* fNode = new Node<T>(data);

	//if the last node is nullptr make the last node the new node
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
	//Create a new node with the passed in data
	Node<T>* lNode = new Node<T>(data);

	//if the first node is nullptr
	if (List<T>::m_first == nullptr)
	{
		//set the first node as the new node
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
	//Create a new node and set it to the first node
	Node<T>* searchNode = List<T>::m_first;

	//While the new node is not nullptr
	while (searchNode != nullptr)
	{
		//if the searchnode's data is equal to the data passed in
		if (searchNode->data == data)
		{
			//If the searchnode's next isn't nullptr
			if (searchNode->next != nullptr)
			{
				//Set the searchnode's next's previous to the searchnode's previous
				searchNode->next->previous = searchNode->previous;
			}
			//Otherwise
			else
			{
				//Set the lastNode to the previous of the searchnode
				List<T>::m_last = searchNode->previous;
			}

			//If the searchnode's previous isn't nullptr
			if (searchNode->previous != nullptr)
			{
				//Set the searchnode's previous' next to the searchnode's next
				searchNode->previous->next = searchNode->next;
			}
			//Otherwise
			else
			{
				//Set the firstNode to the searchnode's next
				List<T>::m_first = searchNode->next;
			}

			//Delete the search node
			delete searchNode;
			//End the while loop
			break;
		}
		//Iterate through the list
		searchNode = searchNode->next;
	}
}

template<typename T>
inline void UnorderedList<T>::printList()
{
	Node<T>* printNode = List<T>::m_first;

	while ( printNode != nullptr)
	{
		std::cout << printNode->data << " ";

		printNode = printNode->next;
	}
}
