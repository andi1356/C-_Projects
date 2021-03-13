/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#pragma once
#include <string>

class Figura
{
	std::string culoare;
public:
	Figura();
	Figura(std::string culoareNoua) :culoare(culoareNoua) {};
	virtual ~Figura();
	virtual double Arie();
	virtual void Afisare();
	//void Afisare();
};
