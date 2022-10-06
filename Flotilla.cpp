#include "Flotilla.h"
#include"PlaneSerializer.h"
#include<iostream>
using namespace std;

Flotilla::Flotilla()
{
	PlaneSerializer::ReadPlanesFromFile(planes, current);
}

Flotilla::~Flotilla() 
{
	PlaneSerializer::WritePlanesToFile(planes, current);
	delete[] planes;
}

void Flotilla::Add(Plane& plane)
{
	planes[current] = plane;
	current++;
}

void Flotilla::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++)
	{
		planes[i].WriteToConsole();
		cout << endl;
	}
}
