// AetisTimeWizard.cpp : Defines the entry point for the console application.
//

//header files
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "Controller.h" // My header file see controller.h for details

using namespace std; // use standard namespace

void main() // main fucntion, we choose void, because we don't want it to return anything
{
	string name = setName(); // variable to hold users name & set it to the return of the setName function from controller.cpp
	int h = 0; // hours variable
	int m = 0; // minuutes variable
	int s = 0; // seconds variable
	setTimer(&h,&m,&s); // call setTimer from runTimer from controller.cpp and send a reference to hour minute and second variables as parameters
	runTimer(name, h, m, s); // call function runTimer from controller.cpp and send name, hour, minute, & seconds as parameters
	cout << "\n\nWhew! You did it! I didn't think you could do it! All that sitting is hard work! Now go have a walk to blow off that energy you just got!\n\n"; // simple cout to imform user that program has finished
	system("pause"); // pause at the end of the timer!
}