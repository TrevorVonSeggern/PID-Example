//
// Created by trevor on 4/22/16.
//

#include <iostream>
#include "OutputContainer.h"

void OutputContainer::Write(float value) {
	std::cout << "output on pin: " << OutputPin << " value of: " << value << std::endl;
}

