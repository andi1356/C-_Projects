/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "Cerc.h"
#include <iostream>

double Cerc::Arie()
{
	return 3.14 * r * r;
}

void Cerc::Afisare()
{
	Figura::Afisare();
	std::cout << "x = " << x << " y = " << y << " r = " << r << std::endl;
}

Cerc::Cerc()
{
	x = y = r = 0;
}

Cerc::~Cerc()
{
	std::cout << "Destructor clasa Cerc" << std::endl;
}
