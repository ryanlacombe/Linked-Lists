#pragma once

template<typename T>
class Node
{
public:

	Node(const T& data) : data{ data } {}

	T data;
	Node<T>* next = nullptr;
	Node<T>* previous = nullptr;
};