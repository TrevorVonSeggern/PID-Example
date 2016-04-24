//
// Created by trevor on 4/22/16.
//

#ifndef PIDEXAMPLE_INPUTCONTAINER_H
#define PIDEXAMPLE_INPUTCONTAINER_H


class InputContainer {
public:
	unsigned int InputPin;
	InputContainer(unsigned int inputPin) { InputPin = inputPin; }

	void UpdateValue();

	float InputValue = 100;
};


#endif //PIDEXAMPLE_INPUTCONTAINER_H
