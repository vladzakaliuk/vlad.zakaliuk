#ifndef FLOTILLA
#define FLOTILLA

#include"Plane.h"

class Flotilla
{
	Plane* planes; 
	int current;
public:
	Flotilla();
	~Flotilla(); 

	void Add(Plane& plane);
	void WriteAllToConsole() const;
};

#endif