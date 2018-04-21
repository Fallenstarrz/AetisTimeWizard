
//header files
#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "Controller.h" // My own personal header file used to store the below function declarations

using namespace std; // standard namespace, so we don't need to keep typing std:: over and over

void setTimer(int* hour, int* min, int* sec) // take the memory of the parameters, so we can modify the sent parameters without writing multiple functions
{
	cout << "How long would you like to store up your energy by sitting down?\n\n\n"
		<< "Hours: ";
	cin >> *hour; // allow user to set the number stored in hours memory address
	cout << "Minutes: ";
	cin >> *min; // allow user to set the number stored in the minutes memory address
	cout << "Seconds: ";
	cin >> *sec; // allow user to set the number stored in the seconds memory address
}

string setName()
{
	string username; // declare username as a variable
	cout << "Hello User!\n I am called Aetis. A legendary time wizard! My job is to help you save up energy while sitting and remind you to expend that energy, so you don't blow up!" "
		<< "(Get it, blow up... I thought it was clever)"
		<< "What shall I call you?\n"; // simple cout statements
	cin >> username; // allow user to choose a username that the time lord will call them by
	return (username); // return username, so it can be perminantly assigned throughout the program
}

void runTimer(string username, int hour, int min, int sec)
{
	int htos = hour * 3600, mtos = min * 60, total = htos + mtos + sec; // tos is total of seconds, so hours total seconds etc.. this is used to run our for loop
	for (int i = total; i > 0; i--) // for loop, it will run as long as the programs total seconds is not 0
	{
		cout << "\n\n" << username << " you can do it! The remaining time is: "; // inform user of their name and cheer them on
		sec--; // reduce seconds by 1, this will keep the displayed time accurate to the user
		cout << hour << ":" << min << ":" << sec; // print the remaining time on the timer to the user
		Sleep(1000); // sleep will just pause the program, 1000 is the time conversion for roughly 1 second
		if (hour > 0 && min == 0 && sec == 0) // check if hours needs to be reduced, by checking if we have more than 1 hour while our minutes and seconds are both 0
		{
			hour--; // reduce hours by 1
			min += 59; // reset minutes to 59
			sec += 60; // reset seconds to 60
		}
		else if (hour >= 0 && min >= 1 && sec == 0) // check if minutes needs to be reduced, by checking if we have more than 1 minute while our seconds are equal to 0
		{
			min--; // reduce minutes by 1
			sec += 60; // reset seconds to 60
		}
		system("cls"); // clear screen for formatting, and readability
	}
}