//
// Created by trevor on 4/22/16.
//

#ifndef PIDEXAMPLE_OUTPUTCONTAINER_H
#define PIDEXAMPLE_OUTPUTCONTAINER_H


class OutputContainer {
public:
	unsigned int OutputPin;

	OutputContainer(unsigned int outPin) { OutputPin = outPin; }

	void Write(float value);
};


#endif //PIDEXAMPLE_OUTPUTCONTAINER_H
