#pragma once
#include "Node.h"

template<typename T>
class Iterator
{
public:

	Iterator();

	Iterator(Node<T>* ptr);

	T operator*();
	Iterator<T> operator++();
	Iterator<T> operator--();
	bool operator==(const Iterator<T>&)const;
	bool operator !=(const Iterator<T>&)const;

private:
	Node<T>* current;
};

template<typename T>
inline Iterator<T>::Iterator()
{

}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* ptr)
{
	current = ptr;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return current->data;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	current = current->next;
	return this;
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	current = current->Previous;
	return this;
}

template<typename T>
inline bool Iterator<T>::operator==(const Iterator<T>& checkData) const
{
	if (current->data == checkData.current->data)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

template<typename T>
inline bool Iterator<T>::operator!=(const Iterator<T>& checkData) const
{
	if (current->data != checkData.current->data)
	{
		return true;
	}
	else
	{
		return false;
	}
}
