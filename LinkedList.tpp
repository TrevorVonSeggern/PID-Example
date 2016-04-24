//
// Created by trevor on 4/22/16.
//

#include "Node.tpp"

template<typename TYPE>
class LinkedList {
public:
	typedef Node<TYPE> node_type;
	typedef node_type *node_pointer;

	LinkedList() { }

	~LinkedList();

	unsigned int Size = 0;

	node_pointer Start = NULL, End = NULL;

	void DestructNode(node_pointer node);

	void Add(TYPE &value);
};


template<typename TYPE>
LinkedList<TYPE>::~LinkedList() {
	Node<TYPE> *currentNode = Start;
	if (currentNode == NULL)
		return;
	DestructNode(Start);
}

template<typename TYPE>
void LinkedList<TYPE>::DestructNode(node_pointer node) {
	if (node == NULL)
		return;
	DestructNode(node->Next);
	delete node;
}

template<typename TYPE>
void LinkedList<TYPE>::Add(TYPE &value) {
	++Size;
	Node<TYPE> *temp = new Node<TYPE>(value);
	if (Start == NULL) {
		Start = temp;
		End = temp;
		return;
	}
	End->Next = temp;
	End = temp;
}