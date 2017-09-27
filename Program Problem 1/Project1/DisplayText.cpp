/*
Abhi Patel - September 21, 2017 - Period 2
Assignment Name: Display Text
Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/
// Libraries
#include <iostream>
#include <conio.h> 
// Namespaces
using namespace std; 
// Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	char two = '2';
	cout << "Period " << two << endl;
	cout << "Hello World!" << endl; 
	pause();
}