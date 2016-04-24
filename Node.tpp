//
// Created by trevor on 4/22/16.
//

#include <cstddef>

template<typename TYPE>
class Node {
public:
	TYPE &Value;

	Node<TYPE> *Next = NULL;

	Node<TYPE> (TYPE &value) : Value(value) {}
};
