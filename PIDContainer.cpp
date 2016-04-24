//
// Created by trevor on 4/22/16.
//

#include "PIDContainer.h"

void PIDContainer::Update() {
	Node<PIDController> *it = pidControllers.Start;
	for(; it != NULL; it = (Node<PIDController> *) it->Next) {
		it->Value.Update();
	}
}

void PIDContainer::Write() {
	Node<PIDController> *it = pidControllers.Start;
	for(; it != NULL; it = (Node<PIDController> *) it->Next) {
		it->Value.Write();
	}
}

PIDContainer::PIDContainer() {
}

