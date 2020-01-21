#pragma once

template<typename T>
class List
{
private:
	struct Node
	{
		T		data;
		Node*	next;
		Node(T d, Node* n) : data(d), next(n) {}
		Node(T d) : Node(d, nullptr) {}
	};
	Node*		pStart;
public:




};