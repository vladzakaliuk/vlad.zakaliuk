#ifndef MENU_H
#define MENU_H

#include"Flotilla.h"

class Menu
{
	Flotilla flotilla;
public:
	void Show();

private:
	void showBaseMenu();
	void handleAddNewPlane();
	void handleShowAllPlanes();

};

#endif