#include <iostream>
#include "PIDContainer.h"

using namespace std;

int main() {
	cout << "Hello, World!" << endl;
	unsigned int leftJoystick = 1, rightJoystick = 2;
	unsigned int leftInPin = 3, rightInPin = 4, leftOutPin = 3, rightOutPin = 4;

	InputContainer inLeft(leftJoystick), inRight(rightJoystick);
	inLeft.InputValue = 90;
	inRight.InputValue = 50;

	InputContainer left(leftInPin), right(rightInPin);
	left.InputValue = 100;
	right.InputValue = 49;

	OutputContainer leftOut(leftOutPin), rightOut(rightOutPin);

	PIDController leftPID(1, 0.0007, 100, &inLeft.InputValue, 20, left, leftOut);
	PIDController rightPID(1, 0.0007, 1, &inRight.InputValue, 20, right, rightOut);

	PIDContainer container;

	container.pidControllers.Add(leftPID);
	container.pidControllers.Add(rightPID);

	for (int i = 0; i < 10; ++i) {
		cout << "left, inputPID D:" << leftPID.D << endl;
		inLeft.InputValue += i;
		container.Update();
		container.Write();
	}

	return 0;
}