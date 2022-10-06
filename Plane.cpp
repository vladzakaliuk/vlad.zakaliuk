#include"Plane.h"
#include<iostream>
using namespace std;

Plane::Plane(string name, string model, int place, int volume, string autopilot)
{
	if (!IsValid(name, model, place, volume, autopilot))
		throw "Invalid input data for the Plane!!";
	
	this->name = name;
	this->model = model;
	this->place = place;
	this->volume = volume;
	this->autopilot = autopilot;
}

bool Plane::IsValid(string name, string model, int place, int volume, string autopilot)
{
	if (place < 1 )
		return false;
	if (volume < 1 )
		return false;	


	return true;
}

void Plane::WriteToConsole()
{
	cout <<"Name - "<< name << "; mark - " << model << "; places -  " << place<< "; volume - "<< volume<< "; autopilot - "<< volume;
}


string Plane::GetName() const
{
	return name;
}
string Plane::GetAutopilot() const
{
	return autopilot;
}
string Plane::GetModel() const
{
	return model;
}
int Plane::GetPlace() const
{
	return place;
}

int Plane::GetVolume() const
{
	return volume;
}