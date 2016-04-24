//
// Created by trevor on 4/22/16.
//

#ifndef PIDEXAMPLE_PIDCONTAINER_H
#define PIDEXAMPLE_PIDCONTAINER_H

#include "PIDController.h"
#include "LinkedList.tpp"

#include <vector>

using std::vector;

class PIDContainer {
public:
	PIDContainer();

	void Update();

	void Write();

	LinkedList<PIDController> pidControllers = LinkedList<PIDController>();
};


#endif //PIDEXAMPLE_PIDCONTAINER_H
