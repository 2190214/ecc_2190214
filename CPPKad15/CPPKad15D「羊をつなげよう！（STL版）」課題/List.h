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
	List() : pStart(0) {}
	~List() { clear(); }

	void push_front(T data)
	{
		Node* pNode = new Node(data, pStart);
		pStart = pNode;
	}

	void push_back(T data)
	{
		Node** ppLast = &pStart;
		while (*ppLast) {
			ppLast = &((*ppLast)->next);
		}
		*ppLast = new Node(data);
	}

	void clear()
	{
		Node* pNode = pStart;
		while (pNode) {
			Node* pNext = pNode->next;
			delete pNode;
			pNode = pNext;
		}
		pStart = nullptr;
	}

	int size()
	{
		Node* pNode = pStart;
		int n = 0;
		while (pNode) {
			n++;
			pNode = pNode->next;
		}
		return n;
	}

	T& operator[](int i)
	{
		Node* pNode = pStart;
		while (i) {
			pNode = pNode->next;
			i--;
		}
		return pNode->data;
	}

	bool empty()
	{
		return (!pStart);
	}
};