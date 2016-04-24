//
// Created by trevor on 4/22/16.
//

#include "PIDController.h"


void PIDController::Update() {
	if (CurrentTime >= LastInputTime + Frequency) {
		Input.UpdateValue();
		Error = Input.InputValue - *Target;
		double timeSlice = CurrentTime - LastInputTime;
		P = Pp * Error;
		I += Ip * Error / timeSlice;
		D = (float) (Dp * (Error - PreviousError) / timeSlice);
		OutputValue = P + I + D;
		PreviousError = Error;
	}
}

void PIDController::Write() {
	Output.Write(OutputValue);
}

