//
// Created by trevor on 4/22/16.
//

#ifndef PIDEXAMPLE_PIDCONTROLLER_H
#define PIDEXAMPLE_PIDCONTROLLER_H


#include "InputContainer.h"
#include "OutputContainer.h"

class PIDController {
public:
	long CurrentTime = 100;
	float P = 0, I = 0, D = 0;
	long LastInputTime = 0;
	float PreviousError = 0;
	float Error = 0;
	float Pp = 0.5, Ip = 0.0001, Dp = 0.01, *Target;
	long Frequency = 15;
	InputContainer &Input;
	OutputContainer &Output;

	PIDController(float p, float i, float d,
	              float *target, long frequency,
	              InputContainer &input,
	              OutputContainer &output)
			: Pp(p), Ip(i), Dp(d), Target(target), Frequency(frequency),
			  Input(input),
			  Output(output) { Update(); }
	float OutputValue;

	void Update();

	void Write();
};


#endif //PIDEXAMPLE_PIDCONTROLLER_H
