#ifndef PLANE_H
#define PLANE_H

#include<string>
using namespace std;

class Plane
{
	string name;
	string model;
	int place;
	int volume;
	string autopilot;

	bool IsValid(string name, string model, int place, int volume, string autopilot);
public:
	Plane(string name = "", string model = "", int place = 1, int volume = 1, string autopilot ="");
	void WriteToConsole();



	string GetName() const;
	string GetModel() const;
	int GetPlace() const;
	int GetVolume() const;
	string GetAutopilot() const;
};

#endif