/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "Figura.h"
#include <iostream>

Figura::Figura()
{
	culoare = "";
}

double Figura::Arie()
{
	return 0.0;
}

void Figura::Afisare()
{
	std::cout << "Figura are culoarea " << culoare << std::endl;
}

Figura::~Figura()
{
	std::cout << "Destructor clasa Figura" << std::endl;
}
