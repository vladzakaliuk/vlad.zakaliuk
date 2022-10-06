#include"PlaneSerializer.h"
#include<fstream>
using namespace std;

void PlaneSerializer::ReadPlanesFromFile(Plane*& planes, int& count)
{
	ifstream fin("planes.txt");
	planes = new Plane[100]; count = 0;

	string name, model, autopilot; int place, volume;
	while (!fin.eof())
	{
		fin >> name >> model >> place>> volume>> autopilot;
		planes[count++] = Plane(name, model, place, volume, autopilot);
	}

	fin.close();
}

void PlaneSerializer::WritePlanesToFile(Plane* planes, int count)
{
	ofstream fout("planes.txt");

	for (int i = 0; i < count; i++)
	{
		fout << planes[i].GetName() << " " << planes[i].GetModel() << " " << planes[i].GetPlace()<< " " << planes[i].GetVolume()<< " " << planes[i].GetAutopilot();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}