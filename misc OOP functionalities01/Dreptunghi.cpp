/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "Dreptunghi.h"
#include <iostream>

double Dreptunghi::Arie()
{

	return (x2-x1)*(y2-y1);
}

void Dreptunghi::Afisare()
{
	Figura::Afisare();
	std::cout << "x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << std::endl;
}

double Dreptunghi::operator!()
{
	return 2 * (x2 - x1) + 2 * (y2 - y1);
}

bool Dreptunghi::contine(Cerc c)
{
	//TODO
	return false;
}

Dreptunghi::Dreptunghi()
{
	x1 = 0;
	x2 = 0;
	y1 = 0;
	y2 = 0;
}

Dreptunghi::Dreptunghi(std::string c, int a1, int b1, int a2, int b2) :Figura(c), x1(a1), y1(b1), x2(a2), y2(b2)
{
}

Dreptunghi::~Dreptunghi()
{
	std::cout << "Destructor clasa Dreptunghi" << std::endl;
}
