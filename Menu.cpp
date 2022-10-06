#include"Menu.h"
#include"Plane.h"

#include<iostream>
#include<string>
using namespace std;

void Menu::Show()
{
	cout << "Hostel";

	char userInput;

	do {
		showBaseMenu();

		cin >> userInput;

		if (userInput == '1') {
			handleAddNewPlane();
			continue;
		}

		if (userInput == '2') {
			handleShowAllPlanes();
			continue;
		}

	
	} while (userInput != '0');
}

void Menu::showBaseMenu()
{
	cout << endl
		<< "Please select an option:\n"
		<< "1. Add new plane information.\n"
		<< "2. Show all plane.\n"
		<< "0. Exit.\n";
}

void Menu::handleAddNewPlane()
{
	char userInput;

	cout << "\tAdd information or back to main menu\n"
		<< "\t1. Add\n \t0. Back.\n";

	cin >> userInput;

	if (userInput == '0')
		return;

	string name, model, autopilot; int place, volume;
	cout << endl << "Enter plane information:\n" << "name:\n";
	cin >> name;
	cout << "brand:\n"; cin >> model;
	cout << "places:\n"; cin >> place;
	cout << "volume:\n"; cin >> volume;
	cout << "autopilot:\n"; cin >> autopilot;

	try
	{
		Plane plane(name, model, place, volume, autopilot);
		flotilla.Add(plane);
		cout << "Information added successfully!" << endl;
	}
	catch (const char* err)
	{
		cout << "Information is not added!!" << endl << err << endl;
	}

	cout << endl;
}

void Menu::handleShowAllPlanes()
{
	cout << "Show all rooms information:\n";

	flotilla.WriteAllToConsole();
}
